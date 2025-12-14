/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189974
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
                var_13 = ((/* implicit */long long int) 18297799495900730809ULL);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) var_2);
                var_14 = ((/* implicit */short) 18297799495900730809ULL);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_11 [i_3] [9LL] [i_2] [i_3 + 1] [i_3] = ((/* implicit */int) var_4);
                            arr_12 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */int) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) var_3);
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (unsigned short)6465))));
            }
        } 
    } 
}
