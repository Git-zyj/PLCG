/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21499
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
    var_12 *= ((/* implicit */unsigned long long int) ((unsigned char) ((max((var_9), (807151119U))) / (var_1))));
    var_13 -= ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [(unsigned char)16] [i_2] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                    var_14 = ((/* implicit */long long int) max((var_14), (((((/* implicit */_Bool) (((+(((/* implicit */int) var_6)))) * ((+(((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) (+(arr_0 [(unsigned char)10] [i_2])))) : (((((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_5))))) + (((long long int) var_4))))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) max((var_0), (((/* implicit */int) arr_2 [i_0]))))) % (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (var_1)))));
                        arr_12 [i_0] [i_1 - 3] [i_2] [(unsigned char)0] |= ((/* implicit */unsigned char) (+((((((~(((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_2] [1U])))) + (2147483647))) >> (min((((/* implicit */int) arr_9 [i_2])), (808446672)))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (min((1344715232867508283LL), (((/* implicit */long long int) (short)-30310))))));
                        arr_15 [i_0] [i_0] [(unsigned char)14] [(unsigned char)14] &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_11 [i_0] [i_0] [17U] [i_0])) <= (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-3)), (arr_1 [i_0])))))) ? (((/* implicit */unsigned int) ((max((-808446672), (((/* implicit */int) var_4)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) (short)30953)) / (((/* implicit */int) (short)-30301))))), (max((var_1), (((/* implicit */unsigned int) arr_10 [(_Bool)1] [i_1 + 2] [i_1] [i_1 + 1]))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */int) arr_6 [i_5] [i_2] [(unsigned short)11]);
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_17 [i_0] [i_1 - 3] [14] [(short)6] [(short)6]))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((arr_18 [i_0] [i_2] [i_2]), (((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))))))))));
                        var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_16 [i_0] [6LL] [12] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)36))))) : (7867702504216066164ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)30316)))))));
                    }
                    var_21 = ((/* implicit */int) 1761760864U);
                }
                /* vectorizable */
                for (unsigned short i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_22 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)17])) ? (((/* implicit */int) arr_19 [i_0] [i_1] [(_Bool)0] [(unsigned char)6])) : (arr_0 [i_0] [(_Bool)1]))))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (arr_1 [i_0])));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned short) arr_18 [i_1 + 1] [i_0] [i_0])))));
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            arr_25 [i_0] [(short)4] |= ((/* implicit */unsigned char) (-(arr_14 [2U] [i_7] [i_1 + 1] [2U])));
                            var_25 -= ((/* implicit */unsigned char) ((short) ((arr_21 [i_8] [(short)2] [i_6] [i_7]) / (arr_20 [13U] [i_1 - 1] [i_8]))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */int) arr_13 [5U] [i_6 + 2] [i_6 + 2])) / (((((/* implicit */int) arr_16 [i_0] [(signed char)12] [i_6 + 2] [0] [16ULL])) * (((/* implicit */int) arr_6 [i_7] [i_7] [i_7])))))))));
                        }
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_7] [i_6 + 2] [i_1] [i_0])) / (((/* implicit */int) (unsigned char)234))))) ? (((((/* implicit */_Bool) 1884452988034463809LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)238)) ? (-199511270) : (-1284512022)))))))));
                    }
                    arr_26 [(short)0] [(short)0] |= ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_1 + 1] [16] [i_6] [16] [i_6 + 2])) / (((/* implicit */int) arr_18 [i_1 + 1] [5LL] [i_1 - 1]))));
                    var_28 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) 808446672))));
                }
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) arr_7 [i_1 + 1] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_30 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (808446672)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_0)) : (1884452988034463788LL))) : (max((((/* implicit */long long int) 3488667587U)), (4247550954245301737LL))))), (((/* implicit */long long int) (~(((/* implicit */int) max((var_10), (((/* implicit */short) var_4))))))))));
}
