/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241444
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
    var_15 |= ((var_14) & (var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_16 += ((/* implicit */int) ((4294967295U) << (0U)));
                                var_17 |= min((((/* implicit */unsigned long long int) (-(arr_14 [i_1] [i_0] [i_1] [i_3 + 1] [i_4] [i_3 - 1] [i_1 - 1])))), (18446744073709551615ULL));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((0ULL) ^ (((/* implicit */unsigned long long int) var_10)))))));
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */unsigned long long int) ((arr_10 [i_1 - 1] [i_1 - 3] [i_1 - 1] [i_1]) != ((-(arr_14 [i_1 - 2] [i_1] [i_1 - 3] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((arr_24 [i_7] [i_7] [i_7]) - (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_7]))))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((16777200U) != (((/* implicit */unsigned int) var_11)))))))))));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    for (unsigned int i_10 = 1; i_10 < 14; i_10 += 2) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            {
                                arr_35 [i_7] [i_8] [i_9] [i_8] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(1424805337U))))));
                                arr_36 [i_7] [i_7] [i_8] [i_7] [i_7] = 167844566;
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((var_13) != (var_10)));
            }
        } 
    } 
}
