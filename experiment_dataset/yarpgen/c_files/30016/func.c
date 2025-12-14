/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30016
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0])))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_14))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) ((((8713735202746526872LL) & (((/* implicit */long long int) arr_2 [10LL])))) <= (((/* implicit */long long int) (+(((/* implicit */int) (short)-8897)))))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) & (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))))))))));
                        arr_12 [(_Bool)1] [i_3] [(short)1] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_3] [i_3 + 1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_3 + 1])))));
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) arr_1 [i_3 + 1] [i_3 + 1]);
                            var_24 = ((/* implicit */unsigned int) var_19);
                        }
                        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 4) 
                        {
                            arr_17 [i_1] [i_3] [i_3] [(signed char)14] [i_1] [i_1] &= ((/* implicit */signed char) (+(((/* implicit */int) var_19))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned short)32196))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((arr_10 [i_0] [i_0] [2LL] [(unsigned char)4] [i_5] [i_3]) - (5932210711178129845LL))))))));
                            arr_18 [i_3] = ((/* implicit */long long int) (+(((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                        }
                        for (long long int i_6 = 4; i_6 < 12; i_6 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */_Bool) 9223372036854775807LL);
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [(_Bool)1] [7U] [i_1] [(_Bool)1] [(_Bool)1] [i_6]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_17)))))));
                            arr_21 [i_3] [i_3] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((arr_8 [i_6 + 1] [i_6 + 1] [i_6] [i_6]) <= (arr_8 [i_6 + 2] [i_6] [i_6] [(_Bool)1])));
                            arr_22 [i_0] [i_3] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_19))));
                        }
                        for (long long int i_7 = 4; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((unsigned short) 4294967294U));
                            arr_26 [i_3] = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_7]);
                            var_28 ^= var_7;
                            var_29 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))) <= (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (var_3)))));
                            arr_27 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_6 [3LL] [i_3 - 1] [i_7]))));
                        }
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((var_9) - (468117414U)))));
    var_31 = ((/* implicit */unsigned int) (short)3021);
    var_32 = ((/* implicit */int) ((signed char) var_2));
}
