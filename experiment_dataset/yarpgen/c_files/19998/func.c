/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19998
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_11 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((short) var_3)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_0 [i_0] [i_0]))))))) : (var_7)));
        arr_2 [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [6LL])) ? (((/* implicit */unsigned long long int) var_3)) : (var_9)))) || (((/* implicit */_Bool) (-(var_0)))))) ? (var_0) : (min((((((/* implicit */_Bool) (short)-1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned int) var_6))))));
        var_12 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [(short)15] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) var_7)))));
        var_13 = ((((/* implicit */_Bool) ((unsigned int) (short)-1))) ? ((+(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2]))) : (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)1]))));
        var_14 = ((/* implicit */short) var_3);
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) (short)-13)) + (14)))))) ^ (var_0)));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    {
                        arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) var_9);
                        arr_17 [i_1] [i_3] [i_1] [i_1] = ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_2])) == (var_8)))) * (var_3));
                        var_15 = ((/* implicit */unsigned char) var_9);
                        var_16 -= ((/* implicit */signed char) (+(((var_0) / (var_10)))));
                        var_17 = ((/* implicit */signed char) (short)3);
                    }
                } 
            } 
        } 
        var_18 -= ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_15 [(signed char)20] [14] [i_1 - 1] [i_1])))) ? (((((/* implicit */_Bool) arr_14 [i_1] [i_1] [(short)8] [i_1 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-1)))) : ((-(arr_5 [i_1]))));
        var_19 *= ((/* implicit */unsigned long long int) var_6);
    }
    var_20 = ((/* implicit */unsigned int) max((var_20), (var_2)));
}
