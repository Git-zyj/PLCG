/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217010
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
    for (int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_0] = max((((/* implicit */int) var_14)), ((-(((/* implicit */int) min((var_0), (var_4)))))));
                            var_17 ^= ((/* implicit */unsigned short) min(((-((+(1474410381))))), ((-(((/* implicit */int) min((var_2), (var_4))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) max((1474410359), (max(((+(1474410381))), (((/* implicit */int) var_14))))));
                arr_12 [i_0] [i_0] [i_1] = (+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_7))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((max((((/* implicit */int) var_7)), (min((((/* implicit */int) var_10)), (var_12))))), (var_6)));
    var_20 = (-((+(((/* implicit */int) (unsigned short)227)))));
}
