/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214026
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
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((~(2637659585U))) % (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))))) != (((((/* implicit */_Bool) 1657307685U)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    var_19 ^= ((/* implicit */int) min((2637659585U), (((/* implicit */unsigned int) var_14))));
    var_20 += ((/* implicit */short) ((((/* implicit */unsigned long long int) var_9)) % ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (var_16))))) : (((((/* implicit */_Bool) var_1)) ? (1148654971316333441ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) (_Bool)1);
                            arr_9 [i_3] [i_2] [2U] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0])) ? (1657307710U) : (arr_8 [i_0] [i_0 + 1] [(unsigned short)5] [i_0] [i_0 + 1] [i_0]))) * (min((((/* implicit */unsigned int) (short)0)), (arr_8 [i_0 - 2] [i_0] [i_0] [i_1] [i_2] [i_3])))));
                            arr_10 [i_3] [(unsigned short)12] = ((((/* implicit */int) var_0)) * (max((((((/* implicit */int) var_17)) % (((/* implicit */int) (short)-1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_3]))))))));
                            arr_11 [i_0] [i_0 + 1] [i_1] [i_2] [i_2] [i_3] = ((unsigned int) var_6);
                        }
                    } 
                } 
                var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 1])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 + 1])))) : (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) (short)-3))))));
                arr_12 [i_0 - 1] &= ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */unsigned short) arr_7 [i_0 - 2] [i_0 - 1])), (arr_0 [(short)14]))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)0), ((short)-1)))) ? (((/* implicit */unsigned int) 0)) : (var_12)))) != (min(((~(var_13))), (((/* implicit */unsigned long long int) var_15))))));
}
