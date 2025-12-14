/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/366
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_10 |= ((/* implicit */unsigned char) ((arr_2 [i_0] [i_0]) ^ (((/* implicit */long long int) (-(((/* implicit */int) (short)-11547)))))));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_7)))) < (((((/* implicit */unsigned long long int) 9223372036854775801LL)) + (arr_1 [i_0] [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((+(((((/* implicit */long long int) 2724761125U)) + (2305843009213693951LL))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_1] [(unsigned short)10]), (arr_3 [4U] [(short)2]))))) + (2724761144U))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min((var_0), (((/* implicit */long long int) (-((-(1570206171U)))))))))));
            var_14 = ((/* implicit */unsigned char) 2724761100U);
            var_15 = ((/* implicit */unsigned short) max((arr_4 [i_2 - 1] [(short)11]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1])) < (((/* implicit */int) arr_6 [i_1])))))));
        }
        for (short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) arr_3 [i_1] [i_3]);
            /* LoopSeq 1 */
            for (unsigned char i_4 = 2; i_4 < 13; i_4 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_5 = 1; i_5 < 11; i_5 += 4) 
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_5 + 3] [i_5] [i_5] [i_5 + 3])))))));
                    var_18 = ((/* implicit */unsigned int) arr_16 [i_1] [i_1] [i_5] [(unsigned char)2] [i_1] [(unsigned char)2]);
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_9) ? (1570206179U) : (1570206178U)))) && (((/* implicit */_Bool) 1570206171U))));
                }
                arr_18 [i_1] [i_1] = (-(min(((+(2724761105U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_1] [i_1] [i_4] [i_4] [i_4] [i_4]))))))));
                /* LoopNest 2 */
                for (long long int i_6 = 4; i_6 < 11; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) (-(((arr_20 [i_6 - 2] [i_6 + 3] [2] [i_4] [i_3] [i_3]) - (min((arr_20 [7LL] [i_3] [i_4] [i_6] [i_7] [i_7]), (((/* implicit */unsigned int) (unsigned char)167))))))));
                            var_21 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_3] [i_6 - 1]))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_13 [i_3] [i_3] [i_3] [i_7]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((short) (short)-12490))), ((~(1570206166U)))));
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (~((~(arr_20 [i_1] [i_1] [3LL] [(unsigned char)3] [i_4 - 2] [i_3]))))))));
            }
        }
        var_25 ^= ((/* implicit */short) (~((+(arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])))));
    }
    var_26 = ((/* implicit */long long int) (+(min(((-(1664502785U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_4)))))))));
    /* LoopSeq 2 */
    for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_26 [i_8]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_8])))))))) ? ((+(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_25 [i_8])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49749)))));
        var_28 = (~(min((32767U), (1570206149U))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) min(((~(var_0))), (min((((var_0) >> (((((/* implicit */int) (unsigned char)229)) - (200))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1570206171U))))))))))));
        arr_30 [i_9] [i_9] = ((/* implicit */short) (+(1570206186U)));
        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) max(((+(((var_5) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [(short)6] [(unsigned char)16]))))))), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_4))))), (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (short)0))))))))))));
    }
    var_31 = ((/* implicit */short) (-((-((+(((/* implicit */int) var_5))))))));
}
