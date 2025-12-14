/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230630
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
    var_13 = (unsigned char)181;
    var_14 = ((((/* implicit */_Bool) (-((~(var_10)))))) ? (var_8) : (((/* implicit */long long int) (+(var_7)))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 ^= var_2;
                                var_16 = ((((long long int) ((arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] [i_4]) - (((/* implicit */long long int) ((/* implicit */int) var_0)))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_3] [i_4])) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_6))) : (((var_11) ? (939939398U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                                arr_12 [i_0] [i_1 - 1] [9LL] [i_3] [i_4] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4279218374U)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) (-((-(var_5)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) var_0);
}
