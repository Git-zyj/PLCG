/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51790
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
    var_16 = ((((((/* implicit */int) var_1)) != (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)16384), (((/* implicit */short) var_0)))))) : (((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43))) : (arr_0 [i_1]))) >> (min((arr_2 [i_0] [i_0 - 1] [i_1]), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                var_17 = ((/* implicit */short) (((+(((/* implicit */int) (unsigned char)4)))) - (((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned char) (unsigned char)0)))))));
                /* LoopSeq 3 */
                for (short i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    var_18 &= ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_13)), (((5754257330716645241ULL) | (arr_0 [i_0]))))));
                    arr_10 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((2305843009213693936ULL), (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((1351902265787425558ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))) : ((~(1351902265787425573ULL)))));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 22; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((((arr_13 [(short)13] [i_1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1]))))) < (arr_0 [i_0])));
                        arr_17 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_10))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 2; i_6 < 20; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */short) min((var_20), ((short)32767)));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1351902265787425567ULL)) ? (var_15) : (arr_19 [10ULL] [i_3] [(_Bool)1] [i_3] [i_3 - 1] [(_Bool)1])))) ? (arr_13 [i_0 + 2] [i_1 - 1] [i_6 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            arr_22 [i_0] [i_1] [i_1] [i_5 - 1] [i_5 - 1] = ((/* implicit */short) arr_20 [i_0 - 2] [i_1] [(unsigned char)8] [i_5] [i_6 - 1] [i_1] [i_0]);
                            var_22 = ((/* implicit */_Bool) arr_4 [i_0]);
                        }
                        var_23 |= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_14)))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(_Bool)1]))))))))));
                            var_25 = ((/* implicit */short) var_5);
                            arr_25 [i_1] [i_3] [i_1] = ((/* implicit */_Bool) var_3);
                        }
                    }
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_14))));
                }
                for (unsigned char i_8 = 1; i_8 < 22; i_8 += 3) 
                {
                    var_27 = arr_26 [i_1] [i_1] [i_1 - 1] [i_1];
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1])) & (((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_1] [i_1 - 1] [i_8] [i_8]))));
                }
                arr_28 [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (-(((/* implicit */int) max(((unsigned char)0), ((unsigned char)136))))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
}
