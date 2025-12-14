/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199263
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) max((576459652791795712ULL), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) (signed char)-71)))), (((/* implicit */int) arr_6 [i_1])))))));
                    var_18 = ((/* implicit */int) ((((/* implicit */int) (signed char)110)) < (((/* implicit */int) (short)12756))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_4), ((signed char)-72)));
                                var_20 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_1 [i_1 - 2] [i_2 - 2])))) > (((((/* implicit */int) arr_0 [i_1 - 2] [i_1])) % (((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 2]))))));
                                arr_13 [i_1] [i_1 - 1] = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) ((unsigned char) ((int) arr_8 [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 2])));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) var_1);
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((_Bool) (signed char)76)))));
    var_24 = var_5;
}
