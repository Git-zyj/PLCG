/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31771
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
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((long long int) (unsigned short)65535)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1])))))))) ? (((/* implicit */unsigned int) min((((int) arr_1 [i_0 + 1])), (((/* implicit */int) arr_0 [i_0 + 1]))))) : (((unsigned int) arr_0 [i_0 + 1]))));
        var_17 *= ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0 + 1])) ^ (((/* implicit */int) arr_1 [i_0 - 1])))) >> (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) (signed char)68)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (arr_4 [i_1]))) : (((/* implicit */int) arr_1 [i_1]))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (var_6)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((min((arr_5 [i_2] [i_2]), (arr_5 [8LL] [i_2]))), (((/* implicit */long long int) ((int) var_10))))))));
        var_21 += ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [(signed char)20] [i_2]))))) / (562949886312448ULL)));
        arr_8 [i_2] [i_2] = arr_6 [i_2] [i_2];
    }
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_14) : (var_1))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
    var_23 = ((/* implicit */unsigned long long int) (-(var_1)));
}
