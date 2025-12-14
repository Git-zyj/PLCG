/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19220
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)-2)))))))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_3 [i_0] [i_1])))), (arr_4 [i_0] [i_0] [i_1])))) ? (arr_2 [i_1]) : (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16)))) + (33554431)))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1]))))) <= (((/* implicit */int) arr_3 [i_1 + 1] [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 2; i_3 < 13; i_3 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(((((/* implicit */_Bool) -33554432)) ? (((((/* implicit */int) (signed char)-107)) & (var_8))) : (((/* implicit */int) ((unsigned short) (unsigned short)19))))))))));
                arr_10 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((((5946751583886335115ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))))) >> ((((((-2147483647 - 1)) - (-2147483641))) + (51))))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)11))))) ? (((/* implicit */int) arr_7 [i_3 + 3] [i_3 + 2])) : (max((33554441), (((/* implicit */int) arr_7 [i_2] [i_3])))))) - (21795)))));
            }
        } 
    } 
}
