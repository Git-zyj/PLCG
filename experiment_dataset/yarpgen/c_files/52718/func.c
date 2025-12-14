/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52718
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] [(unsigned short)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0 + 1] [i_0]) << (((arr_4 [i_0] [i_0 + 1] [i_1]) - (145804827365603771ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1]))) * (arr_4 [i_0 - 1] [i_0 + 1] [i_1]))))));
                var_10 = ((/* implicit */unsigned char) ((unsigned long long int) max((var_7), (((/* implicit */unsigned short) var_8)))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((417800670), (((/* implicit */int) var_7))))) ? (((/* implicit */int) (unsigned short)52019)) : (((/* implicit */int) (short)9220))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_13 [i_3] [(unsigned short)8] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4 - 2] [i_4 - 2])) ? (((/* implicit */int) max((arr_9 [i_2] [(unsigned char)1]), (((/* implicit */unsigned short) var_9))))) : (((/* implicit */int) arr_12 [i_4] [i_3] [i_2]))))) < (137434759168ULL)));
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_7 [i_2])))))) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_3] [i_3])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) ((unsigned short) min((var_5), (((/* implicit */unsigned long long int) var_2))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_8))));
}
