/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47166
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) var_9)))) : (((((/* implicit */int) (unsigned short)65533)) - (((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) (~(arr_7 [i_0 - 3] [i_0 + 2] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_9 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                                arr_15 [i_4 - 4] [i_0] [i_0 - 1] [i_2] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((unsigned char) var_10));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (long long int i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_9 [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 2] [i_0 + 1] [i_0] [i_5] [i_7 - 1])))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_14))));
                    }
                } 
            } 
        } 
        arr_23 [i_0] [i_0] = ((/* implicit */int) var_16);
        var_24 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
    }
    for (int i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            for (unsigned char i_10 = 3; i_10 < 23; i_10 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((arr_25 [i_8]), (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) arr_27 [i_10 + 2]))));
                    arr_31 [i_8] [(_Bool)1] [i_10 - 1] = ((/* implicit */long long int) (~(((var_19) ? (((((/* implicit */int) (unsigned short)65531)) & (((/* implicit */int) (unsigned short)4)))) : ((~(((/* implicit */int) var_17))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 24; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) (((((-(var_13))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_33 [i_8] [i_9] [i_10] [i_11] [21] [i_11 - 1])) : (((/* implicit */int) arr_30 [i_8] [i_8] [i_8]))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_26 [i_10 + 1])))))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)4)) % ((~((-(((/* implicit */int) var_16))))))));
                        arr_35 [i_8] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65530))) : (var_13))))) ? ((-(((unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)65531)), ((+(((/* implicit */int) var_2)))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) (+(1713112929U)));
                        arr_38 [i_9] [i_9] [i_9] [i_9] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33888))) : (arr_36 [i_8] [i_8] [i_8] [i_8])))) ? (((/* implicit */int) ((((/* implicit */long long int) 752193533U)) > (arr_32 [i_8] [i_8] [15] [15] [i_12])))) : (((/* implicit */int) var_18)));
                    }
                }
            } 
        } 
        arr_39 [i_8] = ((((/* implicit */_Bool) ((long long int) var_14))) ? (((((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) ((signed char) arr_36 [i_8] [i_8] [i_8] [i_8]))));
        /* LoopNest 3 */
        for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            for (signed char i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                for (unsigned short i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    {
                        arr_51 [i_14] = arr_27 [i_14];
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (((+(arr_46 [(unsigned char)22] [i_8]))) == (((/* implicit */long long int) ((/* implicit */int) var_18))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_16 = 2; i_16 < 14; i_16 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_17 = 3; i_17 < 15; i_17 += 4) 
        {
            for (int i_18 = 0; i_18 < 17; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_20 = 0; i_20 < 17; i_20 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_52 [i_19]))));
                            arr_64 [i_17] [i_17] [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */long long int) ((((((int) arr_57 [6U] [6U] [i_18] [6U])) + (2147483647))) << (((((/* implicit */int) ((unsigned char) var_5))) - (181)))));
                        }
                        arr_65 [(_Bool)1] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) -4945561003995641794LL)) && (((_Bool) arr_52 [i_16]))));
                        arr_66 [i_19] [i_18] [i_17] [i_17] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_18] [i_16 + 3] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_17] [i_16 + 3] [i_16]))) : (var_3)));
                        var_31 = ((/* implicit */unsigned char) ((var_19) ? (arr_36 [i_16 - 2] [i_16 + 3] [i_17 + 1] [i_17 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                    }
                } 
            } 
        } 
        arr_67 [i_16] [i_16] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_8)))) > (((/* implicit */int) ((((/* implicit */int) var_17)) >= (((/* implicit */int) var_9)))))));
        var_32 = ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_50 [i_16] [i_16] [i_16] [i_16])))) : (arr_46 [i_16 + 2] [i_16]));
        var_33 = ((/* implicit */signed char) (-(var_1)));
    }
}
