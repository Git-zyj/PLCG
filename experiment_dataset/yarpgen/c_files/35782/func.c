/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35782
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [0] [i_0] [16] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_5 [(unsigned char)1] [(unsigned char)1])) ? (var_10) : (var_14)))));
                    var_17 += ((/* implicit */int) arr_4 [i_0] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */int) var_7);
                                var_19 = ((/* implicit */_Bool) ((unsigned long long int) ((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15)))))) - (((/* implicit */int) var_13))));
}
