/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29171
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
    var_13 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) var_11);
                    arr_10 [i_0] [i_0] [i_0] [i_0] = 5398419071864271184ULL;
                    var_15 = ((/* implicit */long long int) arr_9 [3ULL] [8LL] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_1))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    for (unsigned int i_6 = 2; i_6 < 8; i_6 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) arr_13 [i_3]);
                            var_18 = arr_9 [i_4] [8ULL] [i_6];
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_12);
}
