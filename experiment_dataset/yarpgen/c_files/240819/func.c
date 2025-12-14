/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240819
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_5 [i_2]))) ? (min((-1), (10))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) & (max((((((/* implicit */_Bool) (unsigned char)11)) ? (-1227184407906681277LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) arr_7 [i_2]))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */int) var_5);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */int) min((var_12), ((((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775805LL))))) : (((int) 7818310561969494775LL))))));
                        arr_15 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 3] [i_2 + 1] [i_2 + 1])) ? (arr_6 [i_2] [i_2 + 1] [i_2 + 3]) : (arr_6 [i_2] [i_2 + 3] [i_2 - 1])));
                        arr_16 [i_2] [12] [i_1] [i_2] = ((/* implicit */long long int) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) arr_7 [(unsigned char)2]))))) ? (((/* implicit */int) var_0)) : (-2031252513))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        arr_19 [(_Bool)1] [i_1] [i_2] [i_4] = ((/* implicit */long long int) arr_14 [i_0]);
                        var_14 = ((/* implicit */unsigned char) max((var_0), (arr_8 [i_1] [i_1] [i_1] [i_1])));
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((arr_11 [8] [8] [i_1] [6LL] [i_2] [8]), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) max((-10), (((/* implicit */int) (_Bool)1)))))))) ? (var_2) : (((/* implicit */long long int) ((arr_17 [(unsigned char)6]) ? (((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [0] [2] [i_0] [i_1] [2] [i_4])))) : ((~(((/* implicit */int) (unsigned char)0))))))))))));
                    }
                    for (int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        arr_23 [0] [0] [i_2] [i_2] [i_2] [0] = ((/* implicit */_Bool) -16LL);
                        arr_24 [i_0] [2] [i_0] [12] |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)173)) : (0)))) ? (max((((/* implicit */long long int) arr_4 [i_2 - 1])), (arr_20 [i_0] [(unsigned char)10] [i_5] [4] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned char)80)))))));
                        arr_25 [i_0] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((_Bool) var_0));
                    }
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_6)))), (var_4)))) ? (((((((/* implicit */int) var_11)) != (var_4))) ? (var_5) : (((((/* implicit */_Bool) 9)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((-1) / (16376))))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_9))));
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            {
                arr_31 [i_7] = ((/* implicit */int) min((((((/* implicit */_Bool) 902662768)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173))) : (-16LL))), (((((/* implicit */_Bool) arr_26 [i_6] [i_7])) ? (6357542917091699610LL) : (((/* implicit */long long int) -2031252513))))));
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((arr_27 [i_6] [i_6]), (((/* implicit */long long int) arr_29 [i_6] [i_6])))))));
                arr_32 [(_Bool)1] [i_7] [(_Bool)1] = arr_29 [i_6] [i_7];
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_8 = 1; i_8 < 16; i_8 += 1) /* same iter space */
    {
        arr_36 [(_Bool)1] |= ((/* implicit */long long int) (_Bool)1);
        var_19 = ((/* implicit */int) max((((/* implicit */long long int) arr_34 [i_8] [i_8])), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_26 [i_8] [i_8])), (-1LL)))) ? (min((var_5), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_34 [i_8] [i_8])))))))));
        arr_37 [8LL] [i_8] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(arr_28 [i_8])))) ? (((-1255060568) / (2147483647))) : (((/* implicit */int) arr_35 [i_8 + 1] [i_8])))), (((/* implicit */int) arr_29 [i_8 - 1] [i_8 + 1]))));
    }
    for (long long int i_9 = 1; i_9 < 16; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (unsigned char)82))))) == (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (var_4) : (((((/* implicit */_Bool) arr_38 [i_11] [i_11])) ? (-43) : (((/* implicit */int) (_Bool)1))))))));
                        var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) 1066194064)) && (((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_29 [i_9] [i_11]))))))) ? (((/* implicit */long long int) arr_40 [i_11])) : (((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_9] [i_12]))) % ((-(var_5)))))));
                    }
                } 
            } 
            arr_49 [i_9] [(unsigned char)0] [i_10] = ((/* implicit */unsigned char) ((var_0) ? (min(((~(28LL))), (arr_48 [i_9] [i_9] [i_9] [i_9] [i_9] [11]))) : (var_2)));
            arr_50 [5] [0LL] [i_10] = ((/* implicit */long long int) arr_33 [14LL]);
            /* LoopNest 2 */
            for (unsigned char i_13 = 1; i_13 < 16; i_13 += 2) 
            {
                for (int i_14 = 2; i_14 < 15; i_14 += 1) 
                {
                    {
                        arr_58 [i_13] = ((((/* implicit */_Bool) var_10)) ? ((((~(arr_30 [i_14]))) & (((/* implicit */long long int) (~(arr_43 [i_13 - 1])))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_53 [i_13]))))));
                        arr_59 [i_9] [i_13] [i_9] [i_14] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (unsigned char)96)))))) ? (((((/* implicit */_Bool) arr_48 [i_9] [i_9] [(_Bool)1] [i_9 + 1] [i_9] [(unsigned char)6])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_53 [i_13]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_9))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1066194075)) ? (1203172758217797326LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_27 [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))));
                        var_22 += ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)244))))) == (((((/* implicit */_Bool) ((arr_38 [i_10] [i_13]) - (17)))) ? (((var_1) ? (17) : (((/* implicit */int) arr_41 [i_9] [(_Bool)1])))) : (max((((/* implicit */int) var_7)), (arr_42 [i_9])))))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((arr_41 [i_9] [i_13]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)202))))))))));
                        arr_60 [i_10] [i_10] [i_13] [i_10] [i_13] [i_13] = ((/* implicit */unsigned char) ((long long int) ((int) ((int) var_4))));
                    }
                } 
            } 
            var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9 - 1])) ? (arr_28 [i_9 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252)))))) ? (((var_8) ? (arr_28 [i_9 + 1]) : (arr_28 [i_9 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_42 [i_9 + 1]) >= (-393247033)))))));
        }
        arr_61 [1LL] [1LL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -567178361)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (unsigned char)62))));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            for (unsigned char i_16 = 0; i_16 < 17; i_16 += 1) 
            {
                for (unsigned char i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) max(((~((~(((/* implicit */int) arr_53 [i_15])))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (unsigned char)193)))))))));
                        arr_69 [i_9] [i_9] [i_15] |= ((/* implicit */unsigned char) max((arr_33 [i_15]), (((arr_33 [i_15]) / (arr_33 [i_15])))));
                        arr_70 [i_16] = ((/* implicit */unsigned char) ((int) (((((~(var_10))) + (9223372036854775807LL))) >> ((((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) - (146))))));
                        arr_71 [i_9] [i_15] [i_16] [i_17] = ((((/* implicit */_Bool) max((arr_67 [i_9] [i_16] [i_9 + 1] [i_9 - 1]), (arr_67 [i_9] [i_16] [i_9 - 1] [i_9 + 1])))) || (((/* implicit */_Bool) max((arr_52 [i_9] [i_16]), (arr_52 [i_9] [i_16])))));
                    }
                } 
            } 
        } 
    }
}
