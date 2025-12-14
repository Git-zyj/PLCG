/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35793
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (var_9)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [8U] [i_0])) >> (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) - (41766)))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_1 - 1]))));
                    var_21 = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_8)) - (((/* implicit */int) arr_5 [i_0] [i_0] [i_2])))) + (2147483647))) << (((/* implicit */int) arr_6 [16ULL] [i_1 - 1] [i_2 + 1] [i_1 - 1]))));
                    var_22 = ((/* implicit */unsigned short) ((((var_7) + (9223372036854775807LL))) << (((((/* implicit */int) arr_2 [i_2 + 1] [i_1 - 1])) - (209)))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-3456150355785353418LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_24 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (_Bool)0)), (-1409322977937269879LL))) <= (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-2)))))))), (15836686768276694871ULL)));
        var_25 = ((/* implicit */unsigned int) arr_5 [i_3] [i_3] [i_3]);
    }
    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_17))));
}
