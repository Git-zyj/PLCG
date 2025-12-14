/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54928
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 -= ((/* implicit */unsigned short) (+(min((arr_0 [(signed char)16] [i_1 + 1]), (arr_0 [2] [i_1 - 1])))));
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) (short)8862);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [(short)2] [i_2 + 3] [i_1] [(short)2] &= ((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_5)), ((+(((/* implicit */int) arr_1 [i_4] [i_2])))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (arr_7 [i_0] [i_1] [i_0] [i_1])))))))));
                                var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] = ((/* implicit */unsigned long long int) var_5);
                    var_18 |= ((/* implicit */unsigned short) (-(15143740535947878485ULL)));
                }
                for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    arr_20 [i_0] [i_5] = ((/* implicit */int) (+(arr_7 [i_0] [i_1] [i_1 - 1] [i_0])));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((6662628613097784073ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                                arr_26 [i_0] = ((/* implicit */unsigned short) ((((int) arr_17 [i_0] [i_0] [i_6] [i_7])) > (((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_5] [i_5])))))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_0]))) : ((+(((/* implicit */int) var_9))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_3);
}
