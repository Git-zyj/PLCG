/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193801
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) var_5);
                    arr_9 [i_2] = ((((arr_2 [i_2]) + (0ULL))) - (((16509578476189644558ULL) + (arr_2 [i_0]))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) var_2);
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */signed char) var_8);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 4) 
    {
        for (unsigned int i_4 = 1; i_4 < 8; i_4 += 3) 
        {
            {
                var_16 |= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4]))) - (min((((/* implicit */unsigned long long int) arr_5 [i_4 + 2] [i_3] [i_3])), (1937165597519907058ULL))))));
                arr_17 [4ULL] [4ULL] |= ((unsigned long long int) arr_12 [i_3]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 1; i_5 < 11; i_5 += 2) 
    {
        for (signed char i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                {
                    arr_26 [i_7] [i_5 + 3] [i_5 + 3] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((var_11) >= (var_6))))));
                    arr_27 [i_7] [i_6 + 1] [i_5 - 1] &= ((((/* implicit */_Bool) (-(169870305U)))) ? (((unsigned long long int) arr_2 [i_5 + 2])) : (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)0))))))));
                    arr_28 [i_7] = ((/* implicit */int) var_3);
                }
            } 
        } 
    } 
}
