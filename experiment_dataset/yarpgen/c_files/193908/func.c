/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193908
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) ((unsigned int) var_3)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14)))), (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [(unsigned char)2] [i_0]))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)120)) / (1880149431))), (min((var_17), (((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((/* implicit */int) var_4))))) % (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) (+(var_15)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) var_0)))) : ((+(((/* implicit */int) var_16)))))));
    }
    for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        arr_5 [i_1 + 2] = ((/* implicit */_Bool) arr_1 [i_1]);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                arr_12 [i_1] [(_Bool)1] [i_1] [10U] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_1 [i_1 + 1]))));
                arr_13 [i_2] [(unsigned char)10] [i_2] [i_1 - 1] = ((/* implicit */signed char) ((var_13) == (var_8)));
            }
            arr_14 [(short)3] [(short)3] [i_2 - 1] = ((/* implicit */_Bool) ((((_Bool) -1343799281)) ? (min((((/* implicit */unsigned int) var_7)), (((unsigned int) var_7)))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_11)), (min((-1880149426), (((/* implicit */int) (signed char)126)))))))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2 - 2] [i_2 + 2] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_9 [i_1] [i_2])))), (((var_12) > (((/* implicit */unsigned long long int) var_2)))))))) : (arr_4 [0U])));
            arr_15 [(unsigned char)8] [i_2] [9] |= ((/* implicit */int) var_6);
        }
        arr_16 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_10 [0] [0] [10] [i_1])), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (arr_11 [i_1] [i_1] [i_1]))))))));
    }
    for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        arr_20 [i_4] [i_4] = var_2;
        /* LoopSeq 1 */
        for (short i_5 = 3; i_5 < 24; i_5 += 4) 
        {
            var_23 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_5 + 1] [i_5 - 1])) ? (((/* implicit */int) ((var_19) >= (((/* implicit */int) var_7))))) : (((int) ((signed char) arr_18 [i_4])))));
            var_24 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_22 [i_4] [(unsigned char)13])))) >= (((/* implicit */int) min((var_9), (((/* implicit */short) var_14))))))));
            /* LoopSeq 3 */
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (unsigned char)196)))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_18 [i_4])) - (((/* implicit */int) var_18)))))) : (max(((~(((/* implicit */int) var_11)))), (min((var_2), (((/* implicit */int) var_0))))))))));
                var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_11)), (min((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned short) var_18))))), (((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                arr_25 [i_4] [i_5 - 2] [i_6] = var_14;
                var_27 = ((/* implicit */unsigned char) var_3);
            }
            for (short i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    var_28 = var_2;
                    var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)104))))))) ? (((/* implicit */int) ((short) var_7))) : (((/* implicit */int) ((unsigned char) ((_Bool) var_14))))));
                }
                var_30 *= ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_18 [24LL])) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_16)))), ((+(((/* implicit */int) var_16))))));
                var_31 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                arr_33 [i_4] [i_5] [i_7] [i_7] = ((/* implicit */unsigned char) 1343799278);
                var_32 = ((/* implicit */int) max((var_32), (min((min((((/* implicit */int) var_4)), (var_10))), (var_13)))));
            }
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 4) 
            {
                arr_38 [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */unsigned int) var_7)), (arr_23 [i_5 - 3] [i_5 - 1] [i_5 - 2]))));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 3; i_10 < 24; i_10 += 3) 
                {
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((unsigned char) var_2)))))) || (((/* implicit */_Bool) min((((/* implicit */int) var_7)), (max((var_17), (((/* implicit */int) arr_32 [i_4] [i_4]))))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 1; i_11 < 24; i_11 += 2) 
                    {
                        arr_45 [i_4] [i_5] [i_9] [i_9] [i_10] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_4] [i_11 + 1] [i_10 - 2] [(unsigned char)8]))))) ? (((arr_44 [i_5 - 3] [i_10 + 1] [i_11] [i_11 - 1]) + (((/* implicit */unsigned int) var_13)))) : (((/* implicit */unsigned int) ((((var_19) + (2147483647))) << (((((((/* implicit */int) var_9)) + (17114))) - (27))))))));
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (((~(var_12))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_4))))))))) : (((unsigned int) max((var_10), (((/* implicit */int) var_5)))))));
                        var_35 ^= ((/* implicit */unsigned short) var_9);
                    }
                    arr_46 [i_4] [i_5] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((var_19) | (((/* implicit */int) var_5))))), (((arr_41 [i_4] [i_5] [i_9] [i_10 - 3]) & (((/* implicit */long long int) ((/* implicit */int) ((short) var_9))))))));
                }
            }
            var_36 = ((/* implicit */short) min(((~(((/* implicit */int) (signed char)-105)))), (var_2)));
            var_37 = ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (arr_29 [i_5] [i_5 - 2] [i_5] [i_5 + 1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (var_8)))))));
        }
        var_38 ^= ((/* implicit */unsigned char) arr_35 [i_4] [i_4] [(unsigned short)1] [i_4]);
    }
    var_39 = ((/* implicit */_Bool) var_7);
}
