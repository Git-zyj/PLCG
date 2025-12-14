/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30102
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) ((short) ((unsigned short) 18446744073709551615ULL)));
        var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 + 1] [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) arr_5 [i_1]))));
        var_21 = ((/* implicit */long long int) ((arr_4 [i_1]) <= (((/* implicit */int) arr_5 [i_1]))));
        var_22 = ((/* implicit */unsigned char) arr_5 [i_1]);
        var_23 ^= ((/* implicit */long long int) ((signed char) (unsigned short)62841));
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) << (((((/* implicit */int) arr_5 [i_1])) - (36783))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 4; i_2 < 21; i_2 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) ((signed char) var_9));
        var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2 - 4])) - (((/* implicit */int) arr_8 [i_2 - 4]))));
        var_27 = ((/* implicit */unsigned short) ((((arr_9 [i_2]) << (((((((/* implicit */int) (short)(-32767 - 1))) + (32788))) - (20))))) << (((arr_9 [i_2 + 1]) - (1526716086)))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 6; i_3 += 1) 
    {
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_3 + 2])) << (((/* implicit */int) (signed char)20))));
        arr_12 [i_3] = ((/* implicit */unsigned char) arr_5 [i_3 + 3]);
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 4; i_4 < 19; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            {
                arr_17 [i_5] [i_5] [i_5] = arr_16 [i_4 - 3];
                var_29 += ((/* implicit */unsigned short) ((((((/* implicit */int) arr_16 [i_4 + 1])) * (((/* implicit */int) arr_16 [i_4 + 1])))) / (((/* implicit */int) ((signed char) arr_16 [i_4 + 1])))));
            }
        } 
    } 
}
