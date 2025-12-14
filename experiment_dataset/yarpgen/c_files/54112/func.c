/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54112
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [6]))) : (arr_1 [i_0] [i_0])))));
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(unsigned short)12])))))));
    }
    for (int i_1 = 4; i_1 < 11; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_0 [i_1 - 1])) / (((/* implicit */int) arr_0 [i_1 - 2]))))));
        arr_5 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_1]))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_7 [i_2] [i_2]) : (arr_7 [i_2] [i_2]))) / ((-(arr_7 [(unsigned char)9] [i_2])))))) ? (min((((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_7 [i_2] [i_2]) : (arr_6 [15LL]))), (((/* implicit */long long int) ((arr_7 [i_2] [i_2]) >= (arr_6 [i_2])))))) : (arr_7 [i_2] [i_2])));
        arr_8 [i_2] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_7 [i_2] [(signed char)0]) : (arr_7 [i_2] [i_2])))));
        arr_9 [(_Bool)1] = ((/* implicit */unsigned char) arr_6 [i_2]);
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [(unsigned char)2]) : (arr_6 [i_2])))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_6 [i_2]) : (arr_7 [i_2] [i_2]))) : ((+(arr_7 [i_2] [i_2])))));
    }
    var_22 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_3 = 2; i_3 < 6; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) (~((-(arr_1 [i_5] [i_4])))));
                    var_24 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_13 [i_3 - 1] [i_5] [i_5])))), (((((/* implicit */_Bool) arr_18 [i_3 + 3] [i_3 + 2] [i_3 - 1])) ? (arr_2 [i_3 + 2]) : (((/* implicit */int) arr_18 [i_3 - 2] [i_3 - 2] [i_3 - 2]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        arr_21 [(unsigned char)7] [(unsigned char)7] [i_5] [i_6] = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) arr_14 [i_3] [i_4] [i_5])) ? (arr_7 [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_4] [i_4]))))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [10U] [i_3]) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6])))))))))));
                        arr_22 [8U] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_16 [i_3] [i_3 - 1] [i_3 + 2] [i_6])) ? (min((((/* implicit */long long int) arr_0 [i_3])), (arr_12 [7U]))) : (((((/* implicit */_Bool) arr_14 [i_3] [i_4] [(unsigned short)6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [4LL]))) : (arr_1 [i_3] [i_6]))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [(unsigned short)3] [i_6]))))) ? (arr_12 [i_3 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [5U] [(unsigned short)7] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_4] [i_4] [(signed char)9]))) : (arr_20 [i_3] [(signed char)6] [i_5] [i_6] [i_6]))))))));
                        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [i_5] [i_5] [(signed char)4] [i_5])) && (((/* implicit */_Bool) arr_18 [i_3] [6U] [i_3])))) ? ((~(((/* implicit */int) arr_15 [(unsigned char)6])))) : (((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */int) arr_17 [i_3] [i_4] [7U] [i_5])) : (arr_2 [(unsigned short)10]))))))));
                        arr_23 [9] [i_3 + 2] [i_4] [(unsigned short)5] [9] [i_6] = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) arr_12 [(unsigned short)3]))))))));
                    }
                    arr_24 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) arr_12 [i_4]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            {
                arr_30 [i_8] [8U] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_2 [(_Bool)1])), (arr_1 [i_7] [i_7]))), (((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */long long int) arr_2 [(unsigned char)11])) : (arr_27 [i_8] [i_7])))))) ? ((+((-(arr_26 [(signed char)5]))))) : (((((/* implicit */_Bool) min((arr_26 [i_8]), (arr_26 [(unsigned short)2])))) ? (arr_25 [i_7] [i_7]) : (arr_2 [i_7])))));
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_9])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [7LL])) ? (arr_1 [i_7] [i_8]) : (((/* implicit */long long int) arr_25 [(unsigned short)8] [i_7]))))) ? (((/* implicit */long long int) arr_26 [(signed char)11])) : (max((arr_29 [i_8] [i_9]), (((/* implicit */long long int) arr_0 [i_7])))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_7] [i_8]))))))));
                    var_27 = ((/* implicit */int) arr_3 [i_9]);
                    arr_34 [i_7] [(signed char)8] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7]))) : (arr_33 [(unsigned short)6] [i_8] [(unsigned short)6] [(unsigned short)6])))))) ? (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9]))) == (arr_29 [i_7] [i_8])))))) : (((/* implicit */int) min((arr_0 [i_7]), (arr_0 [i_8]))))));
                }
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    arr_39 [i_7] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_35 [i_7] [10LL] [i_8])))) ? (((arr_6 [i_8]) ^ (((/* implicit */long long int) arr_36 [i_10])))) : (min((((/* implicit */long long int) arr_25 [i_7] [i_10])), (arr_6 [i_7])))))) ? (arr_33 [i_7] [i_8] [i_10] [i_7]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_8] [i_7])) ? (arr_27 [i_8] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_10])))))) ? ((-(((/* implicit */int) arr_28 [0])))) : ((~(((/* implicit */int) arr_31 [5] [i_7] [i_8] [i_10])))))))));
                    arr_40 [i_8] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_7] [i_8] [(short)2])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_10]))))) : (((((/* implicit */_Bool) ((arr_6 [i_8]) + (arr_6 [i_7])))) ? (arr_27 [i_8] [i_10]) : ((-(arr_27 [i_10] [i_8])))))));
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_25 [i_10] [i_7])))) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_36 [i_10])))) ? (arr_26 [i_10]) : (((/* implicit */int) arr_3 [i_10]))))) : (min((((/* implicit */long long int) (-(arr_25 [i_10] [i_7])))), (((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_7] [i_10] [i_10] [3U]))) : (arr_32 [i_7] [i_8] [i_8] [i_10])))))));
                    var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_32 [i_7] [i_7] [(_Bool)1] [i_10]) / (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_7] [i_8] [i_10])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_10]))) : (((((/* implicit */_Bool) arr_32 [i_7] [i_7] [(signed char)7] [6U])) ? (((/* implicit */unsigned long long int) arr_2 [i_10])) : (arr_38 [i_7] [i_8] [i_8]))))))));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_8]))))), ((+(((/* implicit */int) arr_35 [i_7] [i_7] [i_10]))))))) ? (((/* implicit */long long int) arr_36 [i_10])) : (((min((arr_6 [i_7]), (arr_32 [(unsigned short)8] [1U] [(unsigned char)1] [i_10]))) / (((/* implicit */long long int) arr_2 [i_10]))))));
                }
                var_31 = arr_26 [(unsigned char)3];
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_17)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_9))))))));
}
