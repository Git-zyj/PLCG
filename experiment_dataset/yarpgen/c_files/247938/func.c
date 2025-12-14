/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247938
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
    var_13 = ((/* implicit */int) (signed char)-51);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) var_2);
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7))))))))));
                        arr_8 [i_0 - 1] [i_1 - 2] [i_1 - 2] [i_2] [i_0] = ((/* implicit */short) (~(arr_0 [i_0])));
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)46646)))))));
                        var_17 -= ((/* implicit */short) var_2);
                        arr_9 [i_3] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 2; i_4 < 20; i_4 += 3) 
    {
        var_18 -= ((/* implicit */unsigned long long int) min((arr_11 [i_4] [i_4]), (((/* implicit */int) ((short) 8176)))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 4) 
        {
            for (int i_6 = 3; i_6 < 20; i_6 += 1) 
            {
                {
                    arr_17 [i_4] [i_5 + 3] [i_5 + 3] [(signed char)15] = ((/* implicit */long long int) var_4);
                    arr_18 [i_5] [i_4] = ((/* implicit */unsigned long long int) arr_12 [i_5]);
                }
            } 
        } 
        var_19 = ((((/* implicit */_Bool) var_2)) ? (((8168) - (2147483647))) : (((((/* implicit */_Bool) arr_11 [i_4 + 2] [i_4 - 1])) ? (arr_11 [i_4] [i_4 + 2]) : (((/* implicit */int) arr_14 [i_4 + 1] [i_4])))));
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        var_20 -= ((/* implicit */int) ((var_9) / (((/* implicit */unsigned long long int) arr_11 [i_7] [i_7]))));
        arr_23 [i_7] = ((/* implicit */unsigned short) arr_15 [(unsigned short)15] [(unsigned char)8] [i_7] [i_7]);
        var_21 = ((/* implicit */unsigned short) -8164);
    }
    var_22 = ((/* implicit */int) var_12);
    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((max((((/* implicit */int) var_12)), (-8176))) / (var_5))))));
}
