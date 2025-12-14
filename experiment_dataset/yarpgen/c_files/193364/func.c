/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193364
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
    var_12 = ((/* implicit */unsigned int) var_8);
    var_13 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (((((/* implicit */_Bool) ((1588206575) | (-1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((9223372036854775807LL) + (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) || ((!(((/* implicit */_Bool) var_8)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) -1588206575)) && (((/* implicit */_Bool) -1588206590)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) -8573315207128499262LL);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (-((-(8961978034175312528ULL)))));
                    arr_9 [i_0] [(signed char)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 - 4] [i_0 - 2])) >= (((/* implicit */int) arr_1 [i_0 - 2]))));
                    var_16 = ((/* implicit */signed char) -1588206556);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0] [i_0 - 2])) ? (((arr_5 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (1869971373))))));
        var_17 = ((/* implicit */long long int) ((unsigned int) arr_4 [i_0] [i_0 - 4] [i_0]));
    }
}
