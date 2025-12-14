/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215466
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
    for (signed char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (-(492771647U)))))) ? (arr_5 [i_0 + 1] [11U] [i_2]) : (4294967289U)));
                    var_20 |= ((/* implicit */long long int) ((unsigned int) (-(((((/* implicit */unsigned long long int) var_17)) - (10384795150809635669ULL))))));
                    var_21 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 2])) ? (arr_3 [i_0 - 2] [i_0 + 1] [i_2]) : (((/* implicit */unsigned long long int) -1561078023))))) ? (((((/* implicit */_Bool) min((10384795150809635659ULL), (arr_4 [i_0 - 1] [i_1])))) ? ((~(arr_3 [i_2] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) max((arr_6 [i_2] [i_2] [10U] [i_2]), (((/* implicit */unsigned int) (short)128))))))) : (((/* implicit */unsigned long long int) min((arr_5 [i_0 - 2] [i_1] [i_2]), (arr_5 [i_0] [i_0] [i_2]))))));
                    arr_9 [i_0 - 2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1353029366532800846ULL)))) && (((/* implicit */_Bool) ((unsigned char) arr_4 [i_0 - 2] [i_0 - 2])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) 536870911U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47))) : (var_8)))))), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (10384795150809635664ULL)))))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) == (var_4)));
}
