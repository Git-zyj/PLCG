/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40014
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
    var_19 = var_16;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_20 ^= ((/* implicit */unsigned short) max(((+(min((((/* implicit */long long int) var_15)), (var_7))))), (((/* implicit */long long int) (_Bool)0))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_1] [i_0] = ((/* implicit */signed char) min((((((int) var_8)) < (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_13)))))), ((((~(2092054705U))) >= (((/* implicit */unsigned int) ((/* implicit */int) max((var_18), (((/* implicit */unsigned char) arr_1 [i_0]))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */unsigned short) max((max((((unsigned long long int) arr_10 [i_4 + 3] [i_3] [i_2])), (((/* implicit */unsigned long long int) ((int) var_18))))), (((/* implicit */unsigned long long int) max((max((arr_3 [i_0] [i_2] [i_0]), (((/* implicit */short) arr_12 [i_4] [i_0] [i_2] [i_0] [i_0])))), (((/* implicit */short) ((signed char) arr_12 [i_2] [i_2] [i_2] [i_0] [i_2]))))))));
                                var_21 = ((/* implicit */_Bool) ((unsigned short) ((signed char) var_12)));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_1 - 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((min((var_5), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((short) arr_4 [i_6] [i_5] [i_6])))))))))));
                                var_24 = ((/* implicit */unsigned short) ((signed char) var_17));
                                var_25 += ((/* implicit */unsigned short) ((unsigned char) (short)11961));
                            }
                        } 
                    } 
                    var_26 += ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)14])) ? (arr_5 [i_0] [i_0] [i_2]) : (((/* implicit */int) arr_18 [(signed char)4] [i_1]))))), (((((/* implicit */_Bool) arr_22 [i_0] [12ULL])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                    var_27 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) (-(((/* implicit */int) var_4))))))));
                }
            } 
        } 
        var_28 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) & (arr_0 [i_0])))) ? ((~(var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_0] [i_0] [i_0]), (arr_22 [i_0] [i_0]))))))));
        arr_23 [(_Bool)1] [i_0] |= ((/* implicit */signed char) arr_12 [i_0] [(unsigned short)4] [(short)14] [(_Bool)1] [i_0]);
    }
    /* LoopSeq 4 */
    for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    {
                        var_29 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_24 [i_7] [i_10])) : (((/* implicit */int) arr_24 [i_7] [i_7])))));
                        var_30 = (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                    }
                } 
            } 
        } 
        var_31 -= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) max((var_3), (var_3))))) << ((((~(arr_30 [i_7] [i_7] [i_7]))) - (1315978584U)))));
        var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-11938)) ? (((/* implicit */int) (_Bool)1)) : (8191)));
    }
    for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
    {
        arr_38 [i_11] = ((((/* implicit */long long int) var_15)) - ((+(arr_36 [i_11]))));
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 18; i_12 += 3) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    var_33 ^= max((arr_33 [(unsigned short)0] [i_12] [i_12 - 2] [5LL] [i_13]), (max((arr_33 [i_12] [(unsigned short)18] [i_12 - 1] [i_12 + 1] [i_13 - 1]), (((/* implicit */unsigned short) arr_42 [i_12 + 1] [i_13 - 1] [i_13] [i_13 - 1])))));
                    var_34 *= ((/* implicit */unsigned char) ((((_Bool) (signed char)116)) ? (((/* implicit */int) ((_Bool) arr_28 [i_12 + 1]))) : (((/* implicit */int) ((_Bool) arr_42 [i_12 - 1] [i_12 + 1] [i_12 - 2] [i_13 - 1])))));
                }
            } 
        } 
    }
    for (signed char i_14 = 4; i_14 < 17; i_14 += 2) 
    {
        var_35 = ((/* implicit */unsigned long long int) arr_35 [(unsigned short)9]);
        var_36 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_14 - 4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_35 [i_14 - 4])))))));
        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_25 [i_14 - 1] [i_14]))) ? (((((/* implicit */_Bool) arr_42 [i_14 - 4] [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_25 [i_14 - 3] [i_14])) : (((/* implicit */int) arr_25 [i_14 + 1] [i_14 - 2])))) : (-8190)));
    }
    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) 
    {
        var_38 += ((((/* implicit */_Bool) ((long long int) arr_35 [i_15]))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11961))) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))));
        arr_49 [i_15] = ((/* implicit */long long int) min((((/* implicit */short) (signed char)-52)), ((short)-11944)));
        arr_50 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_15] [i_15])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_15] [12LL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) : (((unsigned int) arr_29 [i_15] [i_15]))));
        var_39 ^= ((/* implicit */int) max((13883167271960313417ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_15] [i_15] [i_15])))))));
    }
}
