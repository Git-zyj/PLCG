/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217940
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
    var_10 = ((/* implicit */_Bool) ((long long int) ((unsigned long long int) var_7)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-44))));
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)34))));
        arr_4 [(unsigned short)18] [i_0] = ((/* implicit */_Bool) ((signed char) (signed char)-34));
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((unsigned short) arr_1 [i_0] [i_0])))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        for (short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((arr_1 [i_1] [i_2]), (((/* implicit */unsigned short) arr_9 [i_2]))))), (min((arr_5 [i_1]), (((/* implicit */unsigned int) arr_9 [i_1]))))));
                var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) arr_9 [i_1]))))) ? (((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_7 [i_1] [i_2]))) : (((arr_7 [i_1] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-34)))))));
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_6 [i_2]))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_2);
}
