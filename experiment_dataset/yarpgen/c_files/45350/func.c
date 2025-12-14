/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45350
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
    var_18 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -1395182103)) ? (((2817138305226181189ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))))) : (((15629605768483370432ULL) | (((/* implicit */unsigned long long int) 1987975975))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) var_11);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 *= arr_3 [6ULL];
                                var_20 = ((/* implicit */signed char) var_2);
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [9U] = ((/* implicit */unsigned char) arr_6 [i_0] [8ULL]);
            }
        } 
    } 
}
