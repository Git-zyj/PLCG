/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52258
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_6 [2ULL] [i_2] [i_2] [i_0] &= ((/* implicit */_Bool) var_1);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) (+(((unsigned long long int) ((arr_7 [i_0] [i_3 - 1] [i_3] [i_3 - 1]) ? (((/* implicit */unsigned int) -201909123)) : (2366783779U))))));
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 584246713))) ? (((/* implicit */unsigned long long int) ((long long int) arr_3 [i_3 - 1]))) : (((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12476039594024683760ULL))) : (((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))))));
                                arr_12 [i_0] = ((/* implicit */unsigned short) var_10);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) var_13);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            {
                arr_17 [i_6] [i_6] = ((/* implicit */int) (-(2360494188U)));
                var_17 = (~(var_12));
            }
        } 
    } 
}
