/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23686
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_10 = ((/* implicit */unsigned char) ((unsigned long long int) var_1));
            var_11 ^= ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        }
        for (unsigned int i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            arr_11 [(_Bool)1] [i_0] [2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */unsigned int) ((int) arr_10 [i_0]))) : (3674066917U)));
            arr_12 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (+(var_2)));
            arr_13 [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2 - 3] [i_2 + 2])) ? (arr_1 [i_2 + 2] [i_2 - 1]) : (arr_1 [i_2 - 3] [i_2 - 1])));
            arr_14 [i_2] = ((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2]);
        }
        arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) (unsigned char)39)))) : (((/* implicit */int) ((unsigned char) arr_10 [i_0])))));
        var_12 *= ((/* implicit */signed char) ((unsigned char) ((long long int) arr_4 [i_0] [i_0] [i_0])));
        var_13 = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0]);
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
    {
        arr_19 [i_3] = ((/* implicit */signed char) ((unsigned int) 18446744073709551615ULL));
        arr_20 [i_3] [i_3] &= ((/* implicit */unsigned int) ((int) ((unsigned int) arr_7 [i_3])));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_17 [i_3]))));
        arr_21 [i_3] [i_3] = ((/* implicit */signed char) arr_18 [i_3]);
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)101)) ? (arr_7 [i_4]) : (((/* implicit */unsigned long long int) arr_10 [i_4]))));
        var_16 = ((/* implicit */_Bool) ((signed char) arr_4 [i_4] [i_4] [i_4]));
    }
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (+(min((var_1), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)155))))))))))));
    var_18 = ((/* implicit */long long int) ((unsigned long long int) 2533783277U));
}
