/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197487
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
    var_12 = ((((/* implicit */int) (unsigned short)19485)) << (((((/* implicit */int) (unsigned short)42885)) - (42877))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)19485)) ? (((/* implicit */int) (unsigned short)46051)) : (((/* implicit */int) (unsigned short)55825))));
        var_14 = ((/* implicit */int) max((var_14), ((+(((/* implicit */int) (unsigned short)55819))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 21; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_1] [i_1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55825))))) : (((/* implicit */int) arr_1 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            for (unsigned char i_3 = 2; i_3 < 20; i_3 += 4) 
            {
                {
                    var_16 ^= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)19485)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551615ULL))) % (1ULL)));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
                    {
                        var_17 |= ((int) ((((/* implicit */int) arr_4 [(unsigned char)21] [(unsigned short)4] [i_4])) % (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1]))));
                        var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) (unsigned short)55825)) ? (((/* implicit */int) arr_7 [14ULL] [i_4 + 1] [i_3 + 1])) : (((/* implicit */int) arr_7 [i_4] [i_4 - 3] [i_3 + 1]))))));
                        /* LoopSeq 3 */
                        for (int i_5 = 1; i_5 < 21; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (unsigned short)25127))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) ((0) / (((/* implicit */int) (unsigned short)40409))))) ? (14716435954469564096ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)40409)))))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_1] [i_3] [i_4] [i_5 + 1])) ? (-1) : (((/* implicit */int) (unsigned short)46050)))) <= (((/* implicit */int) ((arr_14 [i_1] [i_4] [i_3] [i_1] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))))))));
                            arr_17 [i_5] [i_4] [i_3] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_1]))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            arr_21 [i_1 - 1] [i_2] [i_3] [i_2] [i_3] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65519)))))));
                            arr_22 [i_2] [i_3 - 1] [i_4 + 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6] [(unsigned short)4] [5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1313946443)))))) : (arr_18 [6ULL] [i_2 - 1] [i_3 - 1] [i_4 - 2])));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((unsigned short) 320470765464469140ULL)))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1 - 1]))) : (3710820176607022289ULL)));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46022))))) - (((/* implicit */int) arr_2 [i_1 - 3] [i_4 - 1]))));
                        }
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (unsigned char)19))));
                    }
                    var_26 = ((var_5) / (((/* implicit */int) arr_12 [i_2 + 1] [i_2] [i_3 + 2] [i_2])));
                }
            } 
        } 
        arr_27 [(unsigned short)20] |= arr_9 [i_1] [i_1 - 4] [i_1 - 2];
    }
    for (int i_8 = 1; i_8 < 8; i_8 += 1) 
    {
        arr_31 [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_8 + 2] [i_8 + 2] [i_8] [i_8 + 3] [i_8])) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_8] [i_8 + 1] [(unsigned short)14] [i_8]))))))))));
        /* LoopSeq 3 */
        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            var_27 ^= ((((/* implicit */_Bool) max((arr_32 [i_8 + 3]), (((/* implicit */unsigned short) arr_30 [i_9] [i_9]))))) ? (((((/* implicit */_Bool) arr_30 [i_9] [i_9])) ? (((/* implicit */int) arr_5 [i_9])) : (535822336))) : (((/* implicit */int) ((unsigned short) arr_18 [i_8] [i_9] [i_8 - 1] [i_8 + 3]))));
            var_28 |= ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)24752)), (3616529267925715751ULL))))))), (((((/* implicit */_Bool) arr_8 [i_9] [i_8] [i_8])) ? (((/* implicit */int) (unsigned short)25127)) : (((/* implicit */int) arr_8 [i_8] [i_8] [i_8]))))));
        }
        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            arr_38 [i_8] [i_10] [i_10] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 3616529267925715751ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)16)))), ((+(((/* implicit */int) (unsigned short)25144))))))) ? (((/* implicit */int) (unsigned short)50193)) : (max((arr_13 [i_10] [i_8] [i_8 - 1] [i_8 - 1] [i_8]), (arr_23 [i_8 + 3] [i_8 + 3]))));
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) 16))))))))))));
        }
        for (int i_11 = 1; i_11 < 10; i_11 += 4) 
        {
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (-(((((/* implicit */int) ((unsigned short) (unsigned short)40409))) % (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)41564)) : (((/* implicit */int) arr_2 [i_8] [i_8])))))))))));
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) arr_18 [i_8] [(unsigned char)14] [i_8] [i_8 - 1]))))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            arr_44 [i_8] [i_8] = max((max(((~(((/* implicit */int) (unsigned char)51)))), (((/* implicit */int) arr_32 [i_8])))), ((~(((/* implicit */int) arr_40 [i_8] [i_8])))));
            var_32 ^= ((/* implicit */unsigned long long int) ((unsigned char) (-(max((((/* implicit */unsigned long long int) var_5)), (arr_14 [i_8] [12] [i_8] [i_8] [i_8 + 3]))))));
            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [18] [i_12] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_8])) ? (((/* implicit */int) (unsigned short)19485)) : (((/* implicit */int) (unsigned char)51))))) : ((~(arr_18 [i_8] [i_12] [i_12] [i_8]))))) ^ (((/* implicit */unsigned long long int) (~((~(-692002359)))))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 11; i_13 += 1) 
        {
            for (int i_14 = 2; i_14 < 8; i_14 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)65535)))))))));
                    var_35 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(var_6)))), ((~(max((var_4), (((/* implicit */unsigned long long int) var_11))))))));
                    var_36 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((6815112824434956434ULL) * (((/* implicit */unsigned long long int) -399582354))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [(unsigned short)20] [i_13] [15] [i_14] [i_13] [(unsigned short)14] [i_8 + 2]))))) : (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40437))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), ((unsigned short)46051)))))))));
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned short) (~(max(((+(33423360))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)242)))))))));
    }
    /* vectorizable */
    for (unsigned short i_15 = 2; i_15 < 22; i_15 += 4) 
    {
        var_38 = (((-(((/* implicit */int) (unsigned short)45762)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 555658947))))));
        var_39 = ((((/* implicit */_Bool) arr_51 [i_15 - 1])) ? (((/* implicit */int) arr_51 [i_15 + 1])) : (((/* implicit */int) (unsigned short)25126)));
        var_40 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_52 [i_15])) == (((/* implicit */int) (unsigned short)1022)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1461)))));
        arr_53 [i_15] = ((/* implicit */unsigned short) ((int) 2147483647));
    }
}
