/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225168
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0] [i_1])), ((unsigned char)30))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */signed char) max((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0])), (((((/* implicit */int) ((signed char) arr_0 [i_1] [i_1]))) * (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2] [i_4 - 3] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_0]))))))));
                                arr_14 [i_0] [i_1] [i_4] [i_0] [i_4 - 3] = ((/* implicit */unsigned long long int) arr_1 [i_4] [i_2]);
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_9 [i_2] [i_1] [i_0] [i_0] [i_0] [i_0])) : (arr_5 [i_0] [i_0] [i_0])))) ? (0) : (((/* implicit */int) arr_10 [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) (+(-1276300679)))) + (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) -1)))))))))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) -25)) || (((/* implicit */_Bool) -527111521))));
                        var_13 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_5])) << (((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [i_1] [i_1] [i_0]))) : (10959009320622390122ULL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_16 [i_2] [i_2]), (((/* implicit */unsigned int) arr_10 [i_0] [i_0]))))) ? (arr_0 [i_0] [i_1]) : (max((arr_0 [i_1] [i_5]), (((/* implicit */long long int) arr_6 [i_2])))))))));
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) (signed char)18);
    var_15 = ((unsigned char) var_9);
}
