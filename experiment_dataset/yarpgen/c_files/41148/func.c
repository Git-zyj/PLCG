/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41148
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [(_Bool)1] [i_2] = ((/* implicit */_Bool) 1194876440U);
                    arr_11 [i_0] [i_0] [i_1] [i_0] |= ((/* implicit */short) (signed char)0);
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) (~((~(((((/* implicit */int) var_11)) >> (((-1861127947) + (1861127972)))))))));
                                arr_19 [i_0] [i_2] [i_2] [i_3] [(short)9] = ((/* implicit */signed char) min((3100090856U), (((/* implicit */unsigned int) var_11))));
                                var_15 = ((/* implicit */long long int) (-(max((3100090856U), (((unsigned int) var_10))))));
                                var_16 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((7037217834386412922LL), (((/* implicit */long long int) (short)-4168))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [14LL]))) & (4294967282U))) : (((/* implicit */unsigned int) (~(var_6))))))), (((((/* implicit */_Bool) arr_17 [i_4] [i_1] [i_2] [i_4])) ? (arr_6 [i_0]) : (arr_6 [i_1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (long long int i_6 = 1; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_22 [i_6] [i_6] [i_6 - 1] [i_6 - 1] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)8840))))));
                                var_18 = ((/* implicit */long long int) (-((+(min((((/* implicit */unsigned int) (signed char)127)), (arr_1 [i_0] [i_0])))))));
                                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(min((((/* implicit */int) (signed char)-16)), (var_6))))))));
                                arr_27 [i_2] [i_2] [i_2] [i_5] [i_6 - 1] = ((/* implicit */signed char) arr_5 [i_6 - 1] [i_6 - 1]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((((max((((/* implicit */unsigned long long int) var_5)), (18446744073709551604ULL))) & (((/* implicit */unsigned long long int) min((var_12), (3100090877U)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 21; i_7 += 4) 
    {
        for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_7 - 1])))))));
                arr_34 [i_8] = ((/* implicit */unsigned long long int) (-(max((min((((/* implicit */long long int) arr_32 [i_8])), (var_2))), (-7037217834386412935LL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
    {
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            {
                var_22 += ((/* implicit */int) arr_35 [i_10]);
                var_23 = (!(((/* implicit */_Bool) (-(((/* implicit */int) ((arr_38 [i_9] [i_10]) >= (((/* implicit */int) arr_35 [i_10])))))))));
            }
        } 
    } 
}
