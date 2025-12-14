/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50597
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_13 = ((arr_9 [i_2] [i_3]) - ((~(((unsigned int) arr_5 [i_1 + 1] [i_3])))));
                        var_14 -= ((((((/* implicit */_Bool) (unsigned short)45120)) || (((((/* implicit */_Bool) 2119780183U)) || (((/* implicit */_Bool) arr_0 [i_3])))))) ? (1704401897U) : (min((((((/* implicit */_Bool) var_0)) ? (850073193U) : (var_10))), (805454429U))));
                        arr_10 [i_0] [i_1] [i_2] [i_0] [i_2] [i_1] |= ((/* implicit */unsigned short) 57951864U);
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16396)) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) (unsigned short)18374))))) : (((/* implicit */int) (unsigned short)40372))));
        var_15 = ((/* implicit */unsigned int) var_2);
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
    {
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            {
                var_16 &= min((3997800966U), (((/* implicit */unsigned int) (unsigned short)64265)));
                arr_17 [i_4] [i_5] [i_5] |= 3206336030U;
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((unsigned int) var_7)))));
    var_18 += ((unsigned int) (-(((((/* implicit */_Bool) 1550686482U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49145))) : (var_11)))));
}
