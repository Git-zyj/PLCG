/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193216
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
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_14 = ((((/* implicit */_Bool) ((long long int) ((short) arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))) : (((unsigned long long int) arr_0 [i_0 - 1])));
        var_15 = ((/* implicit */unsigned int) ((int) ((unsigned short) 1349206905U)));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */int) ((long long int) arr_4 [i_1]));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_17 *= ((/* implicit */unsigned char) ((((_Bool) 14395301017273558081ULL)) ? (max((((/* implicit */unsigned int) arr_5 [i_2])), (arr_2 [i_1]))) : (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (arr_2 [i_1])))));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_2])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_2])))) : (((/* implicit */int) ((signed char) 267421288U)))));
        }
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1]))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1]))) : (arr_2 [i_1])))) : (((/* implicit */unsigned long long int) min((arr_7 [i_1] [i_1] [i_3]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_3]) : (((/* implicit */int) arr_1 [i_1] [i_3]))))))))));
            arr_10 [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) arr_6 [i_1] [i_1] [i_3]))), (arr_3 [i_1] [i_3])))), (max((((unsigned long long int) arr_4 [i_1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_5 [i_1]) : (((/* implicit */int) arr_0 [i_1])))))))));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 293877752)), (4051443056435993535ULL)));
                        var_21 -= ((/* implicit */signed char) max(((+(((/* implicit */int) (short)18950)))), (((/* implicit */int) ((signed char) arr_4 [i_1])))));
                    }
                } 
            } 
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((int) ((unsigned long long int) arr_15 [i_1] [i_1]))))));
            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) ((short) arr_16 [i_6]))))));
        }
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        arr_25 [i_1] [i_7] [i_7] [i_7] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_12 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_7]))) : (arr_8 [i_1] [i_7] [i_9])))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_23 [i_1] [i_7] [i_8] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1]))))) : (((/* implicit */unsigned int) arr_5 [i_1]))));
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_23 [i_9] [i_8] [i_1] [i_1]))));
                        arr_26 [i_1] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) ((long long int) ((signed char) arr_8 [i_1] [i_1] [i_8])));
                    }
                    for (unsigned int i_10 = 2; i_10 < 16; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_10 + 3])) ? (arr_14 [i_10 - 1] [i_10 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_10 - 2])))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_8] [i_8])) ? (((int) arr_20 [i_10] [i_8] [i_1])) : (((/* implicit */int) arr_16 [i_8])))) : (((((/* implicit */_Bool) ((unsigned char) arr_5 [i_8]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1]))))) : (arr_5 [i_1])))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-18951)) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) (signed char)-112))));
                        var_27 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1])) ? (arr_4 [i_7]) : (((/* implicit */long long int) arr_5 [i_8])))), (((long long int) arr_4 [i_7])))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_8] [i_7] [i_1])) ? (((/* implicit */int) arr_27 [i_1] [i_1])) : (((/* implicit */int) arr_22 [i_8] [i_8] [i_7] [i_1]))))))));
                        var_28 = ((/* implicit */unsigned int) arr_29 [i_7] [i_7]);
                        var_29 -= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_8] [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_8] [i_7]))) : (arr_14 [i_7] [i_10]))));
                    }
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_20 [i_7] [i_7] [i_7])))) : (((long long int) arr_13 [i_1] [i_8] [i_1] [i_1]))))) ? (((/* implicit */int) ((signed char) arr_27 [i_8] [i_7]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_7] [i_7])) ? (arr_14 [i_1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1])))))) ? (((((/* implicit */_Bool) arr_27 [i_7] [i_7])) ? (((/* implicit */int) arr_15 [i_8] [i_7])) : (((/* implicit */int) arr_22 [i_1] [i_7] [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_7])) ? (((/* implicit */int) arr_20 [i_7] [i_7] [i_1])) : (((/* implicit */int) arr_1 [i_7] [i_8]))))))));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_8] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7]))) : (arr_14 [i_1] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_20 [i_1] [i_7] [i_8]))) ? (((((/* implicit */_Bool) arr_15 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_1] [i_1] [i_7] [i_7] [i_7] [i_1]))) : (arr_2 [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_24 [i_1] [i_7] [i_1] [i_1]))))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_4 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 19; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            {
                                arr_35 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18951)) ? (15512305240110710378ULL) : (((/* implicit */unsigned long long int) -1900384992))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_31 [i_11] [i_11 + 1] [i_11 + 1] [i_11 - 1])), (((short) arr_29 [i_1] [i_1])))))) : (((unsigned int) ((unsigned long long int) arr_11 [i_1] [i_1])))));
                                var_32 = ((/* implicit */long long int) max(((-(arr_34 [i_1] [i_1] [i_8] [i_8] [i_11 + 1] [i_8] [i_1]))), (((/* implicit */unsigned long long int) min((((int) 2945760391U)), (((((/* implicit */_Bool) arr_21 [i_1] [i_7] [i_7])) ? (((/* implicit */int) arr_31 [i_1] [i_7] [i_8] [i_11 - 1])) : (((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1])))))))));
                                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1])) ? (arr_32 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 1] [i_11 + 1])))))) ? (max((((/* implicit */unsigned int) arr_11 [i_7] [i_12])), (((unsigned int) arr_6 [i_12] [i_8] [i_1])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7] [i_8] [i_11 + 1] [i_8])) ? (arr_34 [i_1] [i_7] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_11 + 1] [i_1])))))) ? (((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */int) arr_31 [i_1] [i_7] [i_8] [i_12])) : (((/* implicit */int) arr_30 [i_1] [i_1] [i_7] [i_1] [i_11 + 1] [i_11 + 1])))) : (((/* implicit */int) arr_30 [i_1] [i_8] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 + 1])))))));
                                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_19 [i_11 - 1] [i_11 + 1]))) ? ((+(arr_19 [i_11 + 1] [i_11 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */long long int) 3980005430U)) : (827851515726000472LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_13] [i_13])) ? (arr_18 [i_13] [i_13] [i_13]) : (((/* implicit */long long int) arr_14 [i_13] [i_13]))))) ? (((((_Bool) arr_18 [i_13] [i_13] [i_13])) ? (((((/* implicit */_Bool) arr_3 [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_13] [i_13]))) : (arr_19 [i_13] [i_13]))) : ((~(arr_34 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_13 [i_13] [i_13] [i_13] [i_13]))))))));
        arr_39 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 309517855U)) ? (8559912962775439493LL) : (((/* implicit */long long int) ((/* implicit */int) (short)31878)))))) ? (((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */short) arr_36 [i_13] [i_13])), (arr_24 [i_13] [i_13] [i_13] [i_13])))), ((~(((/* implicit */int) arr_13 [i_13] [i_13] [i_13] [i_13]))))))) : (((long long int) ((_Bool) 0ULL)))));
        /* LoopSeq 1 */
        for (int i_14 = 0; i_14 < 20; i_14 += 3) 
        {
            var_36 = ((/* implicit */_Bool) ((((_Bool) max((((/* implicit */unsigned int) arr_20 [i_14] [i_13] [i_13])), (arr_23 [i_13] [i_14] [i_13] [i_13])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_15 [i_14] [i_13])))) : (max((((/* implicit */unsigned long long int) ((int) arr_41 [i_13] [i_13] [i_13]))), (arr_32 [i_13] [i_13] [i_13] [i_13] [i_13])))));
            arr_42 [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_41 [i_13] [i_13] [i_14])) : (arr_21 [i_13] [i_13] [i_13])))) ? (((/* implicit */int) arr_31 [i_13] [i_13] [i_14] [i_13])) : (((/* implicit */int) min((((/* implicit */short) arr_22 [i_14] [i_14] [i_14] [i_14])), (arr_41 [i_13] [i_13] [i_13])))))));
            arr_43 [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) min((min((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) 270483463U)) ? (((/* implicit */int) (unsigned short)23949)) : (((/* implicit */int) (signed char)-23)))))), (((/* implicit */int) ((signed char) (short)-28005)))));
        }
    }
    var_37 = ((/* implicit */int) var_7);
    var_38 = ((/* implicit */long long int) ((short) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))));
}
