/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34922
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65174)) ? (2736344599U) : (((/* implicit */unsigned int) -1970162219))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_17 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((var_7), (((/* implicit */signed char) var_14))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 2] [(short)14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)4] [(unsigned short)12]))) : (arr_2 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)19))))), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : (((arr_2 [i_0 + 3]) - (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (((+(((/* implicit */int) (short)20702)))) > (((/* implicit */int) ((short) arr_0 [i_0]))))))));
    }
    for (signed char i_1 = 2; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (3151556224U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 3]))) : (((((/* implicit */_Bool) 6498120145433811220ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_2 [i_1]))))) >> (((/* implicit */int) arr_3 [i_1 + 3]))));
        arr_5 [i_1] = ((/* implicit */_Bool) arr_0 [i_1]);
        var_20 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((-302268448175423103LL), (((/* implicit */long long int) (signed char)79)))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_1]), (arr_1 [i_1] [i_1 + 1]))))) & (-2894604643426001589LL))))))));
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 14; i_2 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (-(arr_2 [i_2 - 2]))))));
        arr_9 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_2 - 1]))));
    }
}
