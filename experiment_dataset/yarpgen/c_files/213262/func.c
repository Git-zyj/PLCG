/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213262
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned short) arr_5 [i_2] [i_1] [11LL] [i_0]);
                    var_10 = arr_3 [i_0] [i_0] [i_0];
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 2; i_3 < 23; i_3 += 1) 
    {
        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) 
        {
            {
                arr_13 [i_3] = ((/* implicit */unsigned int) arr_9 [i_4]);
                var_11 -= ((/* implicit */_Bool) (~(-7664603893513550091LL)));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) arr_18 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]);
                            var_13 += ((/* implicit */unsigned short) -6392551141089148366LL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_7))));
}
