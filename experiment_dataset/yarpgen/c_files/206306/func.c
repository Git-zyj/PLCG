/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206306
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(unsigned char)4] [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_2 [i_0] [i_1])))) ? (((var_15) << (((arr_2 [i_0] [i_1]) - (644086993))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1]))))));
                var_19 -= ((/* implicit */_Bool) (+(var_11)));
                arr_6 [i_0] [i_1] [0] = ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? ((-(((/* implicit */int) arr_4 [i_0] [i_1])))) : (((arr_0 [i_1]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2 + 1])) ^ (((/* implicit */int) var_3))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_2 - 2]), (arr_1 [i_2 - 2])))))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            arr_14 [i_3] = ((/* implicit */unsigned long long int) var_7);
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(-400833594))))));
        }
        for (unsigned char i_4 = 4; i_4 < 14; i_4 += 1) 
        {
            var_22 = ((/* implicit */int) max((((arr_11 [i_2 - 1]) | (arr_11 [i_2 - 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */int) var_1)) - (-1539398344))) : (((((/* implicit */_Bool) 2393612116882674568LL)) ? (((/* implicit */int) arr_16 [i_4] [i_2])) : (((/* implicit */int) var_6)))))))));
            arr_18 [i_2] [i_2] = ((((_Bool) arr_17 [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (arr_17 [i_2 - 1]))))) : (((arr_17 [i_2 + 1]) ? (8052643682654433738ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2 - 2]))))));
            var_23 = (+((-(((/* implicit */int) (short)-19813)))));
            var_24 = ((/* implicit */int) arr_1 [i_2 - 1]);
        }
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_10 [i_2 - 1])))))))));
    }
    var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_16)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_5 = 2; i_5 < 10; i_5 += 4) 
    {
        var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
        var_28 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                {
                    var_29 = ((/* implicit */unsigned int) (unsigned char)20);
                    var_30 = ((/* implicit */unsigned long long int) (!(arr_17 [i_5 + 1])));
                    var_31 = ((/* implicit */signed char) (~(((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_6)) - (17213)))))));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_32 -= ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                        arr_32 [i_7] = ((/* implicit */unsigned char) ((arr_28 [i_5 - 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_5] [i_5 - 2] [i_5 - 2] [i_5] [i_7])))));
                        arr_33 [i_7] [i_7] [i_7] [i_8] = (~(arr_19 [i_5 + 1]));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_37 [i_7] [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_7] [i_5 + 1] [i_5 - 2])) ? (((arr_3 [i_7] [i_7]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) var_14))));
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (-(((/* implicit */int) var_12)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((unsigned short) var_4)))));
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_5 + 1] [i_5 - 1] [i_5 - 2] [i_5] [i_7])) ? (((/* implicit */int) (unsigned char)60)) : (((int) arr_16 [i_6] [i_7]))));
                        }
                        for (short i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            arr_44 [i_7] [i_5] [i_7] [i_6] [i_7] = ((/* implicit */short) (((!(var_8))) ? (((((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_5])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_5])) <= (((/* implicit */int) (short)-6884))))))));
                            arr_45 [i_11] [i_7] [i_7] [i_7] [1ULL] = ((/* implicit */int) ((((/* implicit */int) arr_10 [i_5 - 2])) <= (((/* implicit */int) arr_10 [i_5 - 2]))));
                            arr_46 [6ULL] [i_7] [2] [i_7] [i_6] [i_7] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_5 - 2] [i_6]))));
                            arr_47 [i_5 + 1] [i_6] [i_7] [i_7] [i_11] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_5] [i_5 - 1] [i_9] [i_9] [i_9] [i_9] [i_5])) ? (arr_21 [i_5]) : (arr_21 [i_5])));
                        }
                    }
                    arr_48 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_5 + 1] [i_5 - 2] [i_5 - 2])) ? (var_14) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)28230)) >= (((/* implicit */int) (unsigned char)204)))))));
                }
            } 
        } 
        arr_49 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) (unsigned short)16388)) : (((/* implicit */int) var_3))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
    {
        arr_54 [i_12] [i_12] = ((((var_7) != (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_12] [i_12]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_12] [i_12])) ? (((/* implicit */int) arr_4 [i_12] [i_12])) : (((/* implicit */int) var_12))))));
        arr_55 [i_12] [i_12] = ((((arr_1 [i_12]) ? (((/* implicit */int) arr_1 [i_12])) : (((/* implicit */int) arr_1 [i_12])))) <= ((-(((/* implicit */int) (short)12582)))));
    }
}
