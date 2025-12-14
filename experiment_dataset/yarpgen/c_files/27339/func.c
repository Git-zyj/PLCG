/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27339
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
    var_12 = ((/* implicit */unsigned short) var_7);
    var_13 = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_0)))))));
    var_14 = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) (+(((/* implicit */int) var_3))))) < (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_2 + 1] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) arr_0 [i_1]);
                    arr_10 [i_2] [i_1 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)71))))) * (((((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 + 1]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 + 2])))))));
                }
            } 
        } 
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) >> (0LL))) << (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [7ULL]))))) : (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0])))));
        var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((arr_6 [(unsigned short)15] [i_0]) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_3)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 13795528128275616668ULL)))))))), ((+(-21LL)))));
        var_17 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_1 [i_0]))))));
    }
}
