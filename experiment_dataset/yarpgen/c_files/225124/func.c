/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225124
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
    var_10 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) 56223091)), (0U)));
    var_11 = ((/* implicit */_Bool) var_0);
    var_12 = ((/* implicit */int) var_6);
    var_13 = ((/* implicit */int) var_2);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((var_4) ? (((/* implicit */int) (unsigned char)51)) : (((((/* implicit */_Bool) (short)23919)) ? (((/* implicit */int) (short)4813)) : (((/* implicit */int) (short)32767))))));
                        var_15 = ((/* implicit */int) var_0);
                    }
                    for (short i_4 = 2; i_4 < 23; i_4 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */long long int) arr_3 [i_0 - 1] [i_0 - 1] [i_0]);
                        var_17 = ((/* implicit */signed char) min((((/* implicit */int) arr_9 [i_4] [(unsigned short)19] [(unsigned short)19] [i_2] [i_1] [i_0])), (((((((((/* implicit */int) var_1)) + (2147483647))) << (((/* implicit */int) var_6)))) | (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)0))))))));
                        var_18 = ((int) var_6);
                    }
                    for (short i_5 = 2; i_5 < 23; i_5 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_9 [i_0 + 1] [i_1] [i_5 - 1] [i_1] [i_5 - 2] [(_Bool)1]), (arr_9 [i_0 + 2] [i_0 + 2] [i_5 + 1] [i_2] [i_2] [i_0 - 2]))))));
                        var_20 += ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0]);
                        arr_17 [i_0] = ((/* implicit */short) min(((+(((/* implicit */int) arr_1 [i_0 + 2])))), (((((/* implicit */int) ((arr_6 [i_1] [i_2] [i_5]) != (((/* implicit */int) var_3))))) & (((/* implicit */int) arr_4 [i_0 - 2] [i_0]))))));
                    }
                    var_21 = ((/* implicit */int) min((((unsigned long long int) var_2)), (min((((5236711522155759555ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) min((var_4), ((_Bool)0))))))));
                }
            } 
        } 
    } 
}
