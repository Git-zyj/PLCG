/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53066
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_5)))) && ((!((_Bool)1))))))) == (var_9)));
    var_12 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_2)) : (var_10))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)8634)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min(((short)8634), (((/* implicit */short) (_Bool)0)))))) + (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) (~(arr_6 [i_0] [i_1])))) : (min((((/* implicit */long long int) (_Bool)1)), (var_9)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) ((signed char) 4169675734U))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [10U] [i_1])))))))));
                                var_15 = (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_2] [i_1] [i_3 + 1] [i_4])) >= (var_6))) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_3 + 1] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_3] [i_2] [i_3 + 1] [i_2] [i_3] [i_2]))))));
                                var_16 -= ((/* implicit */long long int) ((int) ((int) (short)8634)));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_2] [i_2] [i_2] [4ULL] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_1] [i_2])) : (((/* implicit */int) var_4)))) : ((-(((/* implicit */int) var_7))))));
                        arr_18 [i_2] [i_5] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_12 [i_0] [i_0] [i_1] [i_2] [i_5]) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_2] [i_0] [i_0 - 1] [i_5] [(unsigned char)3])) : (var_10))))));
                        var_17 = ((/* implicit */long long int) arr_15 [i_5] [i_5] [i_1] [i_1] [i_0] [i_0]);
                    }
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) var_9)) ? (arr_21 [(unsigned char)2] [i_1] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) arr_8 [i_2] [(unsigned char)11] [i_6 + 1] [i_6 - 1])) ? (var_10) : (((/* implicit */unsigned long long int) var_2))))));
                        var_19 = ((/* implicit */unsigned short) (((_Bool)1) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 256341486)) ? (var_9) : (((/* implicit */long long int) 256341486))))) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (_Bool)1)))))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0 + 2] [i_2])) ? (var_0) : (((/* implicit */unsigned long long int) arr_2 [i_2] [(unsigned char)16]))))))) ? (((max((((/* implicit */long long int) arr_2 [i_2] [i_1])), (var_3))) ^ (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_8 = 1; i_8 < 19; i_8 += 1) 
                        {
                            arr_27 [i_2] [i_1] [i_7] [(_Bool)1] [i_8] [i_1] = ((/* implicit */unsigned short) min((var_8), (((/* implicit */int) ((((/* implicit */_Bool) 256341486)) || (((/* implicit */_Bool) 256341486)))))));
                            var_21 = ((/* implicit */long long int) arr_14 [i_8] [i_2] [i_7] [i_2] [i_2] [i_0]);
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned long long int) var_3)), (arr_0 [i_8] [i_7]))) : (((/* implicit */unsigned long long int) arr_19 [i_1] [i_8 + 2] [(unsigned char)20] [i_8] [(unsigned short)8] [i_8]))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_24 [i_8] [i_7] [(unsigned char)17] [i_1])), (var_10)))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1092822836960740524LL)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) : (0U))))));
                            var_23 = ((/* implicit */unsigned char) min((arr_2 [i_0] [i_7]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)175)))))));
                        }
                        arr_28 [i_2] [i_2] [i_1] [i_1] [i_0] [i_2] = ((min((((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) : (0U))), (((/* implicit */unsigned int) arr_10 [i_0] [18LL] [i_1] [i_2] [i_7] [i_7])))) == (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_1] [i_2])) : (((/* implicit */int) arr_22 [i_2] [i_2] [i_0]))))))));
                    }
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        var_24 ^= ((/* implicit */short) var_9);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)8634)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0))))));
                            var_26 = ((/* implicit */int) arr_16 [i_2] [i_2]);
                            arr_34 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                        }
                        var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 117440512U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2097151U))) : (arr_25 [i_0] [i_0 - 1] [i_1] [i_1] [i_2])));
                        arr_35 [i_2] [i_2] [i_2] [(unsigned short)5] [i_2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                        var_28 = (~(((((/* implicit */_Bool) arr_19 [(unsigned char)4] [i_1] [(unsigned char)4] [i_2] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_30 [i_9] [i_2] [i_1] [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_29 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (var_5) : (var_5))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_2)) == (var_1)))))))));
}
