/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21787
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (signed char)-101))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [(unsigned char)7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2]))))))))));
                        arr_11 [i_0] [(unsigned short)19] [i_0] [(unsigned short)19] [i_0] [i_0] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)32767))));
                        arr_12 [i_0] [i_0] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) var_5);
                    }
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((/* implicit */int) (((+(((/* implicit */int) var_14)))) == (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) var_12))))))))))));
                        arr_17 [i_4] [(signed char)14] [(signed char)14] [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)0);
                    }
                    arr_18 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] = ((/* implicit */int) ((var_3) ? ((-(826682125023257895LL))) : (max((((/* implicit */long long int) arr_13 [(signed char)21] [(signed char)21] [i_0])), (4170717125721890349LL)))));
                }
            } 
        } 
    } 
    var_19 *= ((/* implicit */unsigned long long int) max((var_1), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_11)), ((-2147483647 - 1))))))))));
    var_20 -= ((/* implicit */_Bool) ((short) (-((+(((/* implicit */int) var_3)))))));
}
