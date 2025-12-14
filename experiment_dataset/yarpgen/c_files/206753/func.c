/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206753
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((-5871407906181766874LL) & (arr_2 [i_0 - 2])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 3] [i_0 - 3]))) - (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (arr_2 [i_0]) : (((/* implicit */long long int) var_11)))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) min((arr_2 [i_0]), (5871407906181766856LL)))))))))));
        arr_3 [i_0 - 1] = ((/* implicit */unsigned int) ((short) ((signed char) arr_1 [i_0 - 2] [i_0 - 1])));
        var_16 = ((/* implicit */_Bool) var_7);
        var_17 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_11)), (var_1)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -5871407906181766877LL)), (11830129462746998351ULL)));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) ((long long int) -5871407906181766874LL));
            var_18 = ((/* implicit */unsigned short) (!(var_5)));
            var_19 = ((/* implicit */int) min((var_19), ((~(((((/* implicit */_Bool) ((arr_5 [i_1] [(signed char)20]) % (((/* implicit */int) arr_7 [i_1] [(_Bool)1] [i_1]))))) ? (((/* implicit */int) arr_9 [i_1] [2U] [(_Bool)1])) : (((/* implicit */int) arr_7 [i_1] [(unsigned char)8] [(short)2]))))))));
        }
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned char) ((5871407906181766876LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)114)))))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        arr_15 [i_3] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_13 [i_3]))));
        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) var_2)))));
    }
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_4))));
}
