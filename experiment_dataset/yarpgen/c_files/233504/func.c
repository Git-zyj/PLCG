/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233504
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) ((arr_1 [i_0]) - (((/* implicit */int) arr_2 [i_0]))))), (((3957281432U) | (max((((/* implicit */unsigned int) (signed char)-94)), (3957281435U)))))));
                var_20 = min((((/* implicit */unsigned short) arr_3 [i_0] [i_0])), (max((var_0), (((/* implicit */unsigned short) arr_3 [i_1 + 1] [i_0])))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_7)) / (((/* implicit */int) arr_0 [i_0]))))));
                    var_22 = ((/* implicit */int) min((max((((((/* implicit */unsigned long long int) var_4)) - (var_14))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2] [i_2])))), (((/* implicit */unsigned long long int) var_4))));
                    arr_6 [10LL] [i_1] = max((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_2])), (max((((long long int) (_Bool)1)), (((/* implicit */long long int) ((unsigned short) var_13))))));
                }
                /* vectorizable */
                for (short i_3 = 3; i_3 < 13; i_3 += 4) 
                {
                    arr_10 [i_0] [i_1 + 1] [i_3] = ((/* implicit */short) 634919936700452985ULL);
                    var_23 -= ((/* implicit */unsigned short) (~(2088801780)));
                }
                for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    arr_13 [i_0] [(signed char)0] [i_4] [13ULL] = ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (var_18)))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))) * (634919936700452991ULL))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned int) (+(arr_4 [i_4] [11] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((var_11) - (2425341033U)))) : (min((var_2), (((/* implicit */unsigned long long int) var_6))))));
                    arr_14 [i_1] = ((/* implicit */int) (_Bool)1);
                }
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */int) ((unsigned short) (short)2048));
                var_25 = ((/* implicit */long long int) arr_9 [i_0] [i_1] [(unsigned char)4] [i_1 - 3]);
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((max((var_14), (var_16))) | (((/* implicit */unsigned long long int) var_13)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_27 = ((/* implicit */long long int) var_9);
}
