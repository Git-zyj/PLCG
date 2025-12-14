/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226631
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
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) <= (min((262143U), (618465473U)))))))))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned char)186)), (2047LL)));
                arr_5 [i_0] = ((/* implicit */_Bool) ((unsigned int) 16962822814553198494ULL));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((2047LL), (var_6)))))) ? ((-(1121501860331520ULL))) : (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_1 [i_1] [i_1])))), ((-(((/* implicit */int) var_9))))))))))));
                var_22 = ((/* implicit */unsigned char) (short)0);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_4)), (11118621724154399542ULL)));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            {
                var_24 ^= (+((~(max((((/* implicit */unsigned long long int) 4294967295U)), (18446744073709551608ULL))))));
                arr_11 [i_3] [i_3] = ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)0)))) << (((1121501860331520ULL) - (1121501860331489ULL)))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (min((((((/* implicit */int) (unsigned char)38)) + (((/* implicit */int) (short)-13641)))), (((/* implicit */int) ((((/* implicit */_Bool) 2411120822U)) || (((/* implicit */_Bool) (unsigned char)7))))))) : ((+(arr_10 [i_3] [i_3] [i_3])))));
            }
        } 
    } 
}
