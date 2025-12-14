/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53482
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
    var_11 = ((/* implicit */_Bool) max((max((((/* implicit */int) ((_Bool) var_5))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))), (((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (((unsigned char) 17815783292282094361ULL))))))))));
                    var_13 = ((/* implicit */short) arr_6 [i_0] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_0]))));
                                arr_13 [i_2] [i_1] [i_1] |= ((((630960781427457255ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_10 [i_1]))))))) * (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_3] [i_0]))) * (17815783292282094361ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (arr_5 [i_0] [i_1] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) arr_3 [i_2 - 1] [i_2 + 1]);
                    arr_14 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_2]);
                }
            } 
        } 
    } 
}
