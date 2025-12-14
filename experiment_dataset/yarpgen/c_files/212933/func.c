/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212933
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
    var_20 = ((/* implicit */long long int) max((((var_6) ? ((+(((/* implicit */int) var_6)))) : (((int) var_8)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10699)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) && (((var_5) != (((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 |= ((/* implicit */short) (-((+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [4LL])) && (((/* implicit */_Bool) var_5)))))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_4 [i_0] [i_1]);
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_8)))) ? (((/* implicit */int) ((short) arr_4 [i_0] [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 33554431)) ? (arr_0 [i_0]) : (((/* implicit */int) (unsigned char)13)))) & (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (short)-10699)) : (arr_0 [i_0]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_12)) ? (var_15) : (var_0)))));
                    var_23 ^= ((/* implicit */long long int) ((arr_1 [i_2] [i_2]) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))) : (((((/* implicit */_Bool) var_9)) ? (arr_11 [i_3] [i_3]) : (((/* implicit */unsigned int) arr_10 [i_3]))))));
        var_25 -= ((/* implicit */int) ((((/* implicit */_Bool) (~(var_3)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10699))) : (arr_11 [(_Bool)1] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18)))));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_14))));
    }
}
