/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51114
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */int) var_15);
        arr_2 [i_0 - 1] = ((/* implicit */long long int) arr_1 [i_0 - 1]);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
        var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)27))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_11 [i_2] [i_3] [i_0] [i_0] [i_2] &= arr_5 [i_3] [i_3] [i_3];
                        arr_12 [i_0] [i_0] [i_3] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)15872)) && (((/* implicit */_Bool) var_1))));
                        arr_13 [i_1] [i_2] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)29))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        arr_17 [i_4] &= ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)4)) != (((/* implicit */int) var_1)))) ? (((/* implicit */int) (unsigned char)226)) : (((((((/* implicit */int) arr_5 [i_4] [i_4] [i_4])) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_4] [i_4] [i_4])) + (28272)))))));
        arr_18 [i_4] = ((/* implicit */signed char) (short)-20158);
        arr_19 [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (arr_16 [i_4])))) ? (((/* implicit */int) (short)2915)) : (((/* implicit */int) arr_5 [i_4] [i_4] [i_4])))), ((+(((((/* implicit */int) var_8)) % (((/* implicit */int) (unsigned char)44))))))));
        var_20 = ((/* implicit */_Bool) (~(((arr_16 [i_4]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4])))))));
    }
    var_21 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)60))));
}
