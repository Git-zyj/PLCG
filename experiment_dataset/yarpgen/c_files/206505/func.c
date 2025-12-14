/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206505
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
    var_19 = ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) ((signed char) var_6))));
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) || (((((unsigned long long int) var_3)) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5))))))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) ((_Bool) arr_0 [i_0 - 1]))) != (arr_2 [i_0]))));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned int) arr_2 [i_0]);
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((arr_1 [i_0] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        arr_7 [4U] = ((/* implicit */int) ((unsigned int) arr_1 [(unsigned char)10] [i_1]));
        var_22 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1])) < (((/* implicit */int) arr_0 [i_1]))))) != (((((/* implicit */int) arr_6 [i_1] [i_1])) << (((((/* implicit */int) arr_0 [i_1])) + (123))))))) && (((/* implicit */_Bool) arr_6 [i_1] [(_Bool)1]))));
        arr_8 [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((_Bool) ((arr_1 [i_1] [i_1]) & (((/* implicit */unsigned int) arr_2 [i_1]))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */unsigned long long int) arr_11 [(_Bool)1]);
        arr_13 [i_2] = ((/* implicit */_Bool) ((unsigned char) arr_0 [i_2]));
        var_23 = ((/* implicit */unsigned char) arr_6 [i_2] [i_2]);
    }
}
