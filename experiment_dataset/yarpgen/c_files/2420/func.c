/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2420
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_17 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2]))))) : (((/* implicit */int) var_12)))), (((/* implicit */int) (_Bool)0)));
        var_18 = (+(((/* implicit */int) (short)-18445)));
        arr_2 [i_0 + 1] = (-(((/* implicit */int) (short)18444)));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */int) (short)18443);
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (+(arr_3 [i_1]))))));
        arr_6 [4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (18446744073709551609ULL) : (var_3))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 3; i_2 < 21; i_2 += 3) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned short) arr_3 [i_2]);
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_2] [i_2 - 1] [i_2 - 3])) + (2147483647))) << (((2147483647) - (2147483647))))))));
        }
        for (int i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            arr_12 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(unsigned char)20])) && (((/* implicit */_Bool) arr_8 [i_3]))))) > (((/* implicit */int) arr_7 [i_3 + 3] [i_3 + 2] [i_3 + 2]))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */int) (short)-18444)) > (((/* implicit */int) (_Bool)1))));
        }
        arr_13 [i_1] [i_1] = ((/* implicit */signed char) 2147483645);
    }
    /* LoopNest 2 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        for (unsigned int i_5 = 2; i_5 < 22; i_5 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned char) -2147483645);
                var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_4 - 1] [i_4 - 1] [i_5 + 3]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_16 [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_16 [i_4 - 1] [i_4 - 1])))))));
                arr_20 [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5 - 2] [i_4 - 1])) ? (((/* implicit */int) arr_15 [i_5 - 2] [i_4 - 1])) : (((/* implicit */int) arr_15 [i_5 + 2] [i_4 - 1])))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) min((var_15), (var_2))))))), (((/* implicit */long long int) var_2))));
    var_26 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), (((unsigned char) (~(((/* implicit */int) (short)18444)))))));
}
