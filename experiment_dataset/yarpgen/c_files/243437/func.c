/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243437
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)6])) ? (arr_0 [i_0]) : (arr_0 [i_1]))), (((/* implicit */long long int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_2 [1ULL] [i_1])))), (((/* implicit */int) arr_2 [i_0] [i_1]))))) : (272730423296ULL)));
                var_16 += ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)49278)) >> (((((((/* implicit */_Bool) arr_0 [24])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)20)))) + (75)))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_1])) != ((~(var_2)))))) < (((/* implicit */int) var_13))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        for (signed char i_3 = 3; i_3 < 21; i_3 += 4) 
        {
            {
                arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_0 [i_2 - 1]);
                arr_12 [20U] [20U] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)20))));
                var_18 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))) * (14945693777087692765ULL))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-11660))) != (13U)))))))));
            }
        } 
    } 
}
