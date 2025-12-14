/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217756
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
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_1] &= ((/* implicit */int) ((unsigned int) ((unsigned int) var_19)));
                var_20 = ((/* implicit */unsigned long long int) var_14);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (signed char i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        for (signed char i_3 = 1; i_3 < 13; i_3 += 4) 
        {
            for (short i_4 = 2; i_4 < 14; i_4 += 2) 
            {
                {
                    var_22 = ((/* implicit */short) var_6);
                    arr_13 [i_2 - 1] [14ULL] [14ULL] [i_2] = ((/* implicit */signed char) var_10);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_23 = var_7;
                                var_24 = ((/* implicit */unsigned short) ((signed char) ((unsigned char) var_11)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
