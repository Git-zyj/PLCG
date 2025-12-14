/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225157
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) ((((unsigned int) arr_2 [i_0] [i_0] [i_0])) / ((~(((unsigned int) arr_0 [i_0]))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) ^ ((+(arr_3 [i_0] [i_0] [i_1])))))) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0])))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    arr_9 [(signed char)4] &= ((/* implicit */short) arr_5 [i_0]);
                    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [(signed char)22] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
                }
                for (signed char i_3 = 4; i_3 < 23; i_3 += 4) 
                {
                    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)3)), (65504ULL)));
                    var_21 = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_8 [i_1] [i_3 + 1] [i_3 + 2])))) < (((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) << (((((arr_7 [i_1]) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_3]))))) - (4294946288U)))))))) : (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_8 [i_1] [i_3 + 1] [i_3 + 2])))) < (((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) << (((((((arr_7 [i_1]) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_3]))))) - (4294946288U))) - (2163478003U))))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((var_1) <= (var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (((/* implicit */int) var_13)) : (((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709486122ULL)) || (((/* implicit */_Bool) var_13))))) - (1)))))));
}
