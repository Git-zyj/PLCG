/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236691
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
    var_11 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (signed char)117)), (3193914140277123010LL))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) ((unsigned short) var_7))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 1] = ((/* implicit */signed char) arr_4 [(unsigned char)1]);
                arr_6 [i_0] = ((/* implicit */signed char) var_9);
                arr_7 [i_0] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1449411606U)) && ((_Bool)0)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (unsigned char i_3 = 4; i_3 < 9; i_3 += 2) 
        {
            {
                arr_14 [i_2] [i_2] [i_2 + 1] = ((/* implicit */signed char) ((max((arr_9 [i_2]), (max((arr_11 [i_2] [i_3]), (((/* implicit */int) var_7)))))) << (((((((arr_9 [i_2]) / (((/* implicit */int) arr_13 [i_3 - 1] [i_2 + 1] [i_2 + 1])))) + (46006))) - (1)))));
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    arr_19 [9] [i_3 - 4] = ((/* implicit */unsigned char) var_9);
                    var_12 += ((/* implicit */unsigned int) ((short) arr_13 [i_2] [i_2] [i_4]));
                    var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_4 [i_2])), (max((((var_0) ? (arr_1 [i_4] [(short)8]) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_3]))) >= (arr_18 [i_3 - 4] [i_4]))))))));
                    arr_20 [i_3] [i_3] [i_2 + 1] = ((/* implicit */long long int) min((((max((((/* implicit */int) arr_10 [i_2 + 1] [i_4])), (arr_11 [i_3 - 2] [i_3]))) | (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4095)))))), (max((((((/* implicit */int) arr_13 [i_2] [i_2 + 1] [i_2 + 1])) * (((/* implicit */int) (unsigned char)224)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) && (((/* implicit */_Bool) arr_11 [i_3] [i_4])))))))));
                }
                for (signed char i_5 = 4; i_5 < 8; i_5 += 2) 
                {
                    arr_23 [i_2] [i_3] [i_3] = ((/* implicit */int) ((long long int) arr_12 [i_2] [i_3 - 2]));
                    arr_24 [i_2 + 1] [i_3 - 2] [(short)1] [i_5] = ((/* implicit */long long int) arr_21 [(signed char)1] [(signed char)1] [i_5 - 1] [i_2 + 1]);
                }
                arr_25 [i_2 + 1] [i_2 + 1] [i_3 + 1] = ((unsigned char) max((max((var_6), (((/* implicit */signed char) var_2)))), (((/* implicit */signed char) var_0))));
                var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_10 [i_2] [i_3 - 4])), (((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_3 - 4])) ? (((/* implicit */unsigned int) arr_1 [i_2 + 1] [i_3 - 2])) : (arr_18 [i_2 + 1] [i_3 - 4])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((short) var_4));
}
