/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25098
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
    var_11 |= var_10;
    var_12 &= (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)45231))))));
    var_13 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_7)) > (arr_12 [i_0] [(unsigned short)8] [(unsigned short)8] [i_0 + 1] [i_0] [i_0] [i_4 + 1])))), (min((-5565863503950404398LL), (((/* implicit */long long int) (_Bool)0))))));
                            var_14 = ((/* implicit */_Bool) arr_11 [i_0] [4ULL] [i_2] [i_3] [i_4]);
                            var_15 = ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned short)65535)), (353287606U)));
                        }
                    } 
                } 
            } 
            var_16 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0 + 2]) >= (arr_0 [i_0] [i_0 + 2]))))) | (((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2])) ? (arr_0 [i_0 + 2] [i_0 - 1]) : (arr_0 [i_0 + 1] [i_0 + 2])))));
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [i_5 + 1] [i_5 + 1] [i_5 + 1]))))) * (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (3430445180U))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) : (arr_13 [(_Bool)1] [i_0] [i_0 + 1] [i_0 - 1] [i_5 + 1])))));
            var_18 = ((/* implicit */unsigned char) arr_12 [i_5] [i_5] [i_5] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
            arr_18 [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((int) 353287606U));
        }
        var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) 4294967282U)), (6985394594994064023ULL)));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 12; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(((arr_10 [i_0 + 1] [i_0 + 1] [(signed char)3] [i_6] [(signed char)3] [i_7]) ^ (arr_10 [i_0] [i_0] [i_0] [8] [i_7] [10LL]))))))));
                    var_21 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_15 [i_6 - 1] [i_6] [i_6 - 1]))))));
                }
            } 
        } 
        var_22 &= ((/* implicit */_Bool) min(((-((-(((/* implicit */int) var_9)))))), (((((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])) >> (((((/* implicit */int) ((unsigned short) var_3))) - (55860)))))));
    }
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 14; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
        {
            for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        var_23 &= ((/* implicit */unsigned long long int) arr_26 [i_10]);
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((signed char) arr_26 [(unsigned short)0])))));
                        var_25 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)35689))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        var_26 = ((/* implicit */short) arr_36 [(unsigned char)12] [(unsigned short)4] [(unsigned short)3] [(unsigned short)6]);
                        arr_37 [i_8] [i_8] = ((/* implicit */short) ((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8 + 1] [i_8 - 1])))));
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 3; i_13 < 14; i_13 += 1) 
                        {
                            var_27 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_28 [i_12]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((arr_39 [i_8 + 1] [i_13 - 3] [i_10] [i_12] [i_9] [i_9] [i_10]) != (arr_39 [i_8] [i_13 - 2] [i_8] [i_12] [i_12] [i_8] [i_13]))))));
                            var_29 += ((/* implicit */unsigned char) (((~(arr_33 [(unsigned char)4] [i_12] [(short)10] [i_13]))) + (((/* implicit */long long int) (~(((/* implicit */int) arr_32 [i_12] [i_12])))))));
                            arr_40 [i_8] = ((/* implicit */unsigned char) ((-1LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_26 [i_8]))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((arr_27 [i_9]) & (arr_27 [i_12]))))));
                            var_32 |= ((/* implicit */unsigned char) arr_24 [i_8 - 1]);
                        }
                    }
                    var_33 = ((arr_23 [i_8 + 1]) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */unsigned long long int) arr_33 [i_8] [i_8] [i_9] [i_8])) | (arr_38 [i_8]))));
                }
            } 
        } 
        var_34 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1473876678)) / (var_4)))) <= (arr_28 [i_8])));
        var_35 = ((/* implicit */unsigned long long int) 1LL);
        arr_43 [i_8] = ((/* implicit */unsigned char) (~(var_2)));
        arr_44 [i_8] [i_8] = ((/* implicit */unsigned char) arr_36 [i_8] [i_8] [i_8 - 1] [i_8]);
    }
    /* vectorizable */
    for (unsigned int i_15 = 2; i_15 < 21; i_15 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_16 = 4; i_16 < 20; i_16 += 1) 
        {
            for (int i_17 = 1; i_17 < 21; i_17 += 1) 
            {
                {
                    var_36 = ((/* implicit */unsigned char) max((var_36), (arr_50 [i_16 - 3] [i_16 + 2])));
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (long long int i_19 = 0; i_19 < 22; i_19 += 1) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_19])) ? (arr_46 [i_15 + 1] [i_15 - 1]) : (((/* implicit */long long int) arr_45 [i_19]))));
                                var_38 = ((/* implicit */unsigned char) arr_45 [i_15]);
                                var_39 = ((/* implicit */_Bool) max((var_39), ((!(((/* implicit */_Bool) ((int) var_8)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_40 = ((_Bool) ((var_1) * (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    }
}
