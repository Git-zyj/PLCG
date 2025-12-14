/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39530
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_11 = ((/* implicit */unsigned char) (+(max((min((((/* implicit */long long int) arr_7 [i_0] [i_1] [(short)6])), (var_6))), (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned char) arr_4 [(unsigned char)18])))))))));
                    var_12 = ((/* implicit */_Bool) var_2);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            {
                                arr_15 [i_5] [(short)2] [i_3] [i_1] [(short)2] [i_0] &= ((/* implicit */short) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [10ULL]))) * (arr_5 [i_0] [i_1] [i_5]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4 + 1] [(signed char)14] [i_4] [(_Bool)1]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_3] [i_4] [i_4 + 1] [i_4 + 1] [i_5])))))));
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 820315050U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))) : (3474652246U)));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((arr_8 [i_3]), (((/* implicit */long long int) var_5)))) << (((max((((/* implicit */unsigned int) (short)-8741)), (820315074U))) - (4294958502U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_12 [i_4 + 1] [13] [i_4 + 1] [i_4 + 1] [i_4 + 1]), (arr_12 [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4 + 1]))))) : (arr_9 [i_0] [i_0])));
                            }
                        } 
                    } 
                    arr_16 [i_3] [i_1] [i_3] = ((/* implicit */long long int) var_2);
                }
                arr_17 [i_0] = ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) ((unsigned char) arr_12 [i_0] [2LL] [i_0] [2LL] [i_1]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((((int) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (((/* implicit */int) (unsigned short)15360))));
}
