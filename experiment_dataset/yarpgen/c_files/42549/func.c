/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42549
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1 - 1] [(unsigned char)0])) || (((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_2]))))), (max((min((1860903684U), (((/* implicit */unsigned int) arr_0 [i_2])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 1] [i_1])) ? (arr_7 [i_1]) : (((/* implicit */int) (_Bool)0)))))))));
                    arr_8 [i_0] [5U] [i_2] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_7 [i_1])) ? (var_3) : (arr_1 [i_2]))) >> (((((((/* implicit */_Bool) 4998483395305004541ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (1520352093U))) - (53608U))))) != (max((((/* implicit */int) ((2774615183U) <= (((/* implicit */unsigned int) arr_1 [i_2]))))), (0)))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) max((18446744073709551598ULL), (14214145446437152124ULL))))) != (133169152))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned short) arr_1 [i_3]);
        /* LoopNest 2 */
        for (short i_4 = 3; i_4 < 14; i_4 += 4) 
        {
            for (unsigned short i_5 = 2; i_5 < 14; i_5 += 3) 
            {
                {
                    arr_19 [i_4 - 3] [i_5] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
                    var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) (short)-28291)) ? (((/* implicit */int) arr_5 [i_5 + 1] [i_4 + 1] [i_3])) : (((/* implicit */int) (short)8964))))));
                }
            } 
        } 
    }
    var_14 = ((/* implicit */long long int) (-(-10)));
}
