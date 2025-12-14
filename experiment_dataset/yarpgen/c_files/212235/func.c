/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212235
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_9 [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_8 [i_0] [i_0] [i_2] [i_3] [i_3]))) : (-7102877751904356360LL))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_3])) % (((/* implicit */int) arr_2 [i_3] [i_2])))))))))));
                        var_16 = ((((/* implicit */_Bool) ((unsigned long long int) -3863174010001575296LL))) ? (((((/* implicit */_Bool) var_10)) ? (2ULL) : (((/* implicit */unsigned long long int) var_2)))) : (((unsigned long long int) arr_10 [i_0] [i_0 + 1] [10ULL] [i_0 + 2] [i_0 + 2])));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            arr_15 [i_0] [i_3] [i_0 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (((-9223372036854775807LL - 1LL)) != (-10LL))))))) ? (((((/* implicit */_Bool) min((16383LL), (((/* implicit */long long int) (_Bool)1))))) ? (18446744073709551603ULL) : (((unsigned long long int) -1656407238821243833LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 11774717253420837347ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-8631591028391978158LL))) < (((/* implicit */long long int) ((/* implicit */int) (short)15404)))))))));
                            var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 2])) ? (4398046511100LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0 - 1]))))) * (((var_13) / (arr_7 [i_0 + 2] [i_0 + 1] [i_0 + 2])))));
                        }
                        arr_16 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [14ULL] [i_3]))));
                    }
                    var_18 = (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -7971352759686261804LL)), (arr_0 [i_2])))) ? (((7102877751904356361LL) - (var_12))) : (((var_13) - (((/* implicit */long long int) ((/* implicit */int) arr_11 [(_Bool)1] [i_1] [i_1] [i_1] [18ULL]))))))));
                }
            } 
        } 
    } 
    var_19 = ((var_0) ? (((((/* implicit */unsigned long long int) ((9223372036854775807LL) % (var_3)))) | (18446744073709551614ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (long long int i_6 = 2; i_6 < 12; i_6 += 3) 
        {
            {
                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                arr_24 [2LL] &= ((/* implicit */long long int) (-(((arr_9 [i_6 - 2] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 1]) * (arr_9 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6] [i_6 - 1])))));
                arr_25 [i_6] = ((/* implicit */unsigned long long int) ((short) arr_5 [7ULL] [i_6]));
                var_21 = min((var_2), (var_7));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        for (long long int i_8 = 1; i_8 < 19; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((var_3) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -7171206894157320124LL))))))), (arr_29 [i_7] [i_8 + 1])));
                    /* LoopNest 2 */
                    for (long long int i_10 = 1; i_10 < 19; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_38 [i_7] [i_7] [2ULL] [i_7] [i_10] [i_11] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_35 [i_7] [(short)13] [i_8] [i_9] [i_10] [i_10] [i_11]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4569)))))), (((arr_5 [i_8] [i_8 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (1656407238821243833LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_33 [(_Bool)1] [i_10] [i_10 + 1] [i_10] [i_9] [i_10 - 1])), (min(((short)-14744), (((/* implicit */short) (_Bool)1))))))))));
                                var_23 = 15650302175548139192ULL;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
