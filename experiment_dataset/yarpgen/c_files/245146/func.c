/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245146
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
    var_14 = ((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) min((((/* implicit */int) var_13)), (-1737158662)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */long long int) (_Bool)1);
                            var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
                            var_17 = ((/* implicit */_Bool) max((var_17), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 + 3] [i_3] [i_0 - 2] [i_2] [i_4])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 + 1] [i_3] [i_0 - 3] [(signed char)0] [i_4])))))) >= ((-(((((/* implicit */_Bool) var_1)) ? (arr_10 [i_4]) : (var_4)))))))));
                        }
                        var_18 = ((/* implicit */unsigned int) (!(((_Bool) var_7))));
                        arr_11 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */int) var_8);
                        arr_12 [i_3] [i_3] [i_1] [i_3] [i_2] = ((/* implicit */int) var_8);
                    }
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 13; i_5 += 1) 
                    {
                        arr_15 [i_0 + 1] [i_1] [i_0 + 1] = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) arr_14 [i_0 + 1] [i_1] [i_1] [i_1 + 2])))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_1)) : (var_11)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                        var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */int) ((((/* implicit */int) (short)32757)) <= (((/* implicit */int) var_10))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                    }
                    var_21 -= (!(((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0] [i_0])))))));
                    arr_16 [i_0] [i_1] [(signed char)8] = ((/* implicit */unsigned char) ((unsigned short) ((_Bool) arr_3 [i_1])));
                }
            } 
        } 
    } 
}
