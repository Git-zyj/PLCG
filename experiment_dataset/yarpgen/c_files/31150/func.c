/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31150
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_12 [0LL] [i_3] [(short)4] [(short)4] [(short)4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)198))));
                                var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7962)) ? (min((var_7), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)119)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [0LL] [i_2]))))) ? (((((/* implicit */_Bool) (unsigned short)59550)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-9929)))) : ((-(((/* implicit */int) (unsigned short)5985)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5985))) : (arr_1 [i_0] [i_3])))))));
                                var_11 = ((/* implicit */_Bool) (+(((((/* implicit */int) ((-567816938708876469LL) < (1679244444688152720LL)))) & (((/* implicit */int) (short)-3721))))));
                            }
                        } 
                    } 
                } 
                var_12 = ((((arr_2 [i_0 - 1] [i_0 - 1] [i_1]) / (arr_2 [i_0 - 3] [i_1] [i_1]))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_0] [i_0])) != (((/* implicit */int) var_2)))))));
                var_13 = min((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0 - 3] [i_0 + 1] [i_0 - 1]))))), (min((((/* implicit */long long int) max(((short)9928), (((/* implicit */short) arr_6 [i_0] [i_0] [i_0] [i_0]))))), (max((((/* implicit */long long int) (unsigned short)5986)), (-1679244444688152720LL))))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_8 [i_0 - 1] [i_0] [i_1])), (var_2)))) ? (((/* implicit */int) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 3])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4642353516570684762LL)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))))))));
    var_16 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_17 = ((/* implicit */short) max((((/* implicit */long long int) var_6)), (arr_14 [i_5] [i_6])));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    arr_19 [(signed char)0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_5 + 2] [i_5 + 1]))));
                    var_18 = ((/* implicit */signed char) ((3639151390682878001LL) / (((/* implicit */long long int) ((/* implicit */int) (short)9928)))));
                }
                /* vectorizable */
                for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 2]))));
                }
                for (unsigned short i_9 = 2; i_9 < 16; i_9 += 2) 
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((0LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)10)))))) == (((/* implicit */int) ((signed char) (unsigned char)212)))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 2; i_10 < 18; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_22 = 4642353516570684762LL;
                                var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [2LL] [i_10] [3LL])) + (((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) (short)10726)) : (((/* implicit */int) (short)-30307))))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? ((~(var_3))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_10 + 2] [i_10 + 2] [i_10] [i_5])))))));
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7880005024341857643LL)) ? ((-9223372036854775807LL - 1LL)) : (-1679244444688152720LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + (max((var_7), (((/* implicit */long long int) arr_22 [i_5] [(signed char)8] [i_9] [7LL]))))))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */short) var_6)), (arr_29 [(signed char)13])))), (((((/* implicit */_Bool) -1679244444688152720LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_11] [(unsigned short)9]))) : (arr_15 [(signed char)19] [8LL] [i_9])))))));
                                var_26 = ((/* implicit */signed char) (~(((((((/* implicit */int) (short)-5991)) + (2147483647))) >> (((((/* implicit */int) (signed char)48)) - (31)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            {
                                arr_35 [i_5] [(signed char)19] [i_9] [i_5] [8LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 5860050341052926733LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (18446744073709551615ULL)));
                                arr_36 [i_12] [i_6] [i_6] [i_12] [(short)6] = ((/* implicit */unsigned long long int) arr_21 [i_5]);
                            }
                        } 
                    } 
                }
                arr_37 [i_5] = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_5 - 1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_14 = 1; i_14 < 18; i_14 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_15 = 3; i_15 < 19; i_15 += 2) 
                    {
                        for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_15 - 2] [i_14 + 2] [i_14 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_32 [i_15] [i_14] [6LL])) ? (-7880005024341857643LL) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [0LL] [i_15] [16LL])))))));
                                var_28 = ((/* implicit */long long int) (short)-26498);
                                arr_47 [i_5] [i_6] [(signed char)2] [i_15] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_16]))))) & (((/* implicit */int) arr_22 [i_5] [3LL] [i_5] [i_14 + 2]))));
                            }
                        } 
                    } 
                    arr_48 [i_5] [i_6] [12LL] [i_14] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_25 [i_6] [i_14]))))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_8)))))));
}
