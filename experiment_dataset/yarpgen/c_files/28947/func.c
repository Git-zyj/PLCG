/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28947
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))) ? (18446744073709551593ULL) : (116119173310461765ULL))))));
                var_14 = ((/* implicit */unsigned short) (+((+(arr_2 [i_1 + 1] [i_1 + 1] [i_1])))));
                var_15 = ((/* implicit */unsigned long long int) ((int) 18446744073709551593ULL));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 3; i_4 < 12; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_18 [i_2] [(unsigned short)6] [i_2] [i_5] [i_5] |= min((((unsigned long long int) arr_14 [i_4] [i_4 - 1] [i_4] [i_4 - 2])), (min((arr_13 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 - 2]), (((/* implicit */unsigned long long int) arr_14 [i_4] [i_4] [i_4] [i_4 + 1])))));
                                arr_19 [i_2] = ((/* implicit */_Bool) 2199181897209816007ULL);
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_12 [i_6] [i_3] [i_3]))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_9 [i_2])), ((+(16247562176499735597ULL)))));
                    var_19 = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_11);
    var_21 = ((/* implicit */short) ((long long int) 9223372036854775807LL));
}
