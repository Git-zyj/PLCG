/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209497
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
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_13 = arr_5 [i_3] [i_2] [i_0 - 1];
                            var_14 = (~(((((((/* implicit */_Bool) 15)) ? (var_3) : (5455428548682214232LL))) >> (((/* implicit */int) ((-264865874) >= (var_12)))))));
                            var_15 &= ((/* implicit */int) var_3);
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) arr_5 [i_1] [i_0] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */int) arr_10 [i_4]);
                            var_18 = ((/* implicit */long long int) var_7);
                            var_19 = ((((-688554254) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned short)0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7] [i_6] [i_5] [i_4]))))) - (1LL))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (-(860178055959237708LL))))));
            }
        } 
    } 
}
