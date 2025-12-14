/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47036
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) ((short) arr_2 [i_0 + 2]));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_18 = ((unsigned char) ((unsigned int) var_3));
            arr_6 [i_0 + 2] [i_1] [i_1] = ((arr_4 [i_0 + 1] [i_1]) < (((/* implicit */int) ((((/* implicit */unsigned long long int) -5256013247053141469LL)) >= (var_10)))));
        }
        arr_7 [i_0] [(_Bool)1] = ((/* implicit */long long int) (-(arr_4 [i_0 + 2] [i_0 + 1])));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) arr_3 [i_0 - 1])) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)240)) || (((/* implicit */_Bool) (unsigned char)0))))))))));
        var_20 = ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [2]))) : (arr_8 [i_2]))))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((((/* implicit */int) arr_9 [(unsigned char)0])) >> (((9855502972515093220ULL) - (9855502972515093220ULL))))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) == (((/* implicit */int) arr_9 [(_Bool)0]))))))))));
    }
    var_23 = ((/* implicit */_Bool) var_11);
}
