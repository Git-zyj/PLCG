/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243248
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((var_12) >= (var_12)))), (min(((unsigned char)109), ((unsigned char)109))))))) & (min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)109))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_0)))))));
    var_14 = ((/* implicit */_Bool) min(((~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)109)), ((unsigned short)65513)))))), (min((((/* implicit */int) var_5)), (((((/* implicit */int) var_9)) & (1910586759)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_10))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_3])) ? (((/* implicit */int) arr_8 [10U] [3LL] [3LL] [3U] [i_0 + 1] [i_3])) : (((/* implicit */int) (short)29126))));
                    }
                    var_17 = ((((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */long long int) var_6)) : (var_0))) * (((/* implicit */long long int) ((((/* implicit */int) (signed char)-16)) / (((/* implicit */int) arr_0 [i_0 - 1]))))));
                }
            } 
        } 
    } 
}
