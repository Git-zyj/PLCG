/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234915
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_7))));
    var_15 |= ((/* implicit */unsigned char) ((signed char) var_3));
    var_16 = ((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) (_Bool)1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))))) % (((/* implicit */int) max(((short)-30482), (((/* implicit */short) (signed char)39))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_18 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)201))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_6))))) + (16230344135182495101ULL)));
                }
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1644365546892048784LL)) ? (arr_8 [4ULL] [i_0] [11LL] [i_3]) : (((/* implicit */long long int) min((1501747072), (((/* implicit */int) min(((unsigned char)140), ((unsigned char)5)))))))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)132)))))), ((+(((/* implicit */int) min((((/* implicit */unsigned short) (short)-5211)), ((unsigned short)26861)))))))))));
                }
                var_22 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-11776)), (var_8)))) ? ((-(((/* implicit */int) (signed char)104)))) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1 + 1]))))) > ((~(7420326158285657082ULL)))));
            }
        } 
    } 
}
