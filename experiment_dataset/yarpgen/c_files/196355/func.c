/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196355
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
    var_17 = ((/* implicit */int) (-(var_7)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((576460752303422976LL) - (576460752303422965LL)))))) ? (5054386431673409786ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_1 - 1] [i_2]))));
                    arr_9 [i_2] [i_2] [i_2] [i_2] = arr_1 [i_0] [i_1];
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_2])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_0))))) ? (max((((/* implicit */unsigned int) var_11)), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2] [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [11U] [11U]))))) / (351267287182932024LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19573))))))));
                }
            } 
        } 
    } 
    var_20 = (!(((/* implicit */_Bool) var_5)));
}
