/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220651
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
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_11 [i_1] [i_2 - 3] [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((arr_7 [i_0 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))) ? (arr_8 [i_0 + 1] [i_0 + 1] [i_2 - 2] [i_2 - 2]) : (min((arr_4 [i_0 + 1]), (((/* implicit */int) var_15)))))), (((/* implicit */int) min((((unsigned char) var_1)), (((/* implicit */unsigned char) ((_Bool) arr_4 [i_2]))))))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_4 [i_1])), (((long long int) arr_3 [i_0])))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_9 [i_2] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (short)23024)) : (arr_8 [i_1] [i_0 + 1] [i_0 + 1] [i_2 + 2]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_0 - 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) max((((var_14) || (((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0] [i_4 - 1] [i_1] [i_0 + 1] [i_1])))), (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_4 + 2] [i_1] [i_0 - 1] [i_0])) || (((/* implicit */_Bool) var_0))))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_1] [i_2 - 4]), ((short)23021)))) && (((/* implicit */_Bool) ((((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */signed char) (_Bool)1))))) << (((/* implicit */int) max((arr_6 [i_2]), (arr_6 [i_0])))))))));
                                var_17 = ((/* implicit */unsigned char) arr_3 [i_0 - 1]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min(((unsigned short)609), (((/* implicit */unsigned short) arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [18] [i_0 + 1] [i_2 - 3])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) var_10);
}
