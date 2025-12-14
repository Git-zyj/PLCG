/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234392
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
    var_17 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)165)), (var_16))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 - 1]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned int i_3 = 4; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */int) (signed char)-123);
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3 - 3]))) : (((((/* implicit */_Bool) ((long long int) arr_9 [i_3] [i_1] [i_1] [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_3 + 2] [i_1]))))) : (arr_0 [i_0] [i_0])))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_5 [i_0 + 2] [i_0 + 2]))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [(signed char)18] [i_0 - 1])) > (((/* implicit */int) arr_5 [i_3] [i_0 + 1]))))) : (((/* implicit */int) min((arr_5 [i_2] [i_0 - 1]), (arr_5 [i_3] [i_0 + 2]))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) var_13)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2] [i_0 - 1]))) | (3390230817U)))));
        }
    }
    var_23 += ((/* implicit */int) (-((~(((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_10)))))));
    var_24 = ((/* implicit */unsigned short) min((((/* implicit */short) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_3))))), ((short)24874)));
    var_25 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */int) ((short) var_10)))))));
}
