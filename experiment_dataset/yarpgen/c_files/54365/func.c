/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54365
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
    var_12 = ((/* implicit */short) 10378490520553958550ULL);
    var_13 *= (~(min((((/* implicit */unsigned long long int) var_2)), (var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (~(arr_6 [i_2 - 1] [i_2 - 1] [i_2])));
                    var_15 = ((/* implicit */unsigned short) arr_1 [i_2 - 2]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) arr_10 [i_2] [i_2] [i_2] [i_2 - 1]);
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_1 [i_2 + 1]))));
                                arr_13 [i_0] [i_1] [i_4] [(signed char)21] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned short)57285))))))), (var_11)));
                                arr_14 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) | ((+(((/* implicit */int) var_2))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) arr_12 [i_2 - 2] [i_4] [i_2 - 3] [i_1] [i_4] [i_1]);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] = arr_2 [i_2 - 2] [i_1];
                }
            } 
        } 
    } 
}
