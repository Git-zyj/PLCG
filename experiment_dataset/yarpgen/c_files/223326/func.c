/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223326
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
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_2 - 2] [i_3]))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_2]))) : (arr_9 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))))))));
                        var_13 += ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((short) arr_7 [i_0] [i_1] [i_1] [i_1]))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_2 [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0])))))))));
                        var_14 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((arr_7 [i_0] [i_0] [i_0] [i_3]) ? (((/* implicit */int) arr_7 [i_3] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0]))))) : (arr_9 [i_2] [i_2 + 1] [i_0 - 2] [i_0] [i_0]))));
                        arr_10 [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_0 [i_0] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_2 + 1]))) : (arr_1 [i_2 - 2]))));
                        var_15 = ((/* implicit */_Bool) min((var_15), (arr_3 [9] [(_Bool)1] [(unsigned short)7])));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0 - 3] [i_0 + 1] [i_0 + 1]))))) ? ((+(((/* implicit */int) ((short) arr_4 [7U] [i_0] [i_0 - 1]))))) : (((arr_6 [i_0] [i_0 + 1] [i_0 - 3] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : ((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 2; i_4 < 16; i_4 += 4) 
    {
        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4 - 2])) ? ((~(arr_14 [i_4] [(unsigned char)9] [i_4 - 2]))) : ((~(arr_14 [i_4] [1ULL] [i_4])))));
                var_18 = ((/* implicit */int) arr_14 [i_4] [i_5] [i_5]);
                /* LoopNest 3 */
                for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    for (unsigned char i_7 = 1; i_7 < 16; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_24 [i_4] [0LL] [i_4] [i_8] [i_4] = ((unsigned int) (-(((((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_8])) ? (arr_21 [i_8] [i_7 + 1] [i_4] [i_5] [i_5] [i_4] [i_4]) : (arr_21 [(unsigned char)5] [(unsigned short)17] [i_6] [16U] [i_8] [i_8] [i_6])))));
                                var_19 = ((/* implicit */_Bool) (+((+((+(((/* implicit */int) arr_16 [0LL]))))))));
                                var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_21 [i_4 - 2] [13LL] [i_4 - 1] [i_7] [i_7] [i_7 - 1] [i_8]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) arr_17 [4LL] [i_6] [i_5] [i_4])))))) : (((((/* implicit */_Bool) (+(arr_20 [i_4] [i_5] [i_5] [2U] [i_6] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) (~(arr_22 [(unsigned char)11] [i_6] [i_5] [i_4])))) : (((unsigned long long int) arr_15 [i_4 + 1] [i_5] [i_7] [i_8]))))));
                            }
                        } 
                    } 
                } 
                var_21 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4] [(signed char)15] [i_4] [i_5])) ? (arr_17 [(unsigned char)15] [i_4] [(unsigned char)0] [i_4 - 1]) : (arr_17 [i_5] [i_5] [i_4 + 1] [i_4 + 1]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 4; i_9 < 17; i_9 += 1) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_15 [i_4 + 1] [i_4 - 2] [i_4 - 2] [i_4 + 1])))) ? (((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4] [i_4 - 1] [i_4])) ? (arr_15 [i_4 + 2] [i_4 - 2] [i_4 - 1] [i_4 - 2]) : (arr_15 [i_4 - 1] [8LL] [i_4 - 2] [i_4 - 2]))) : (((((/* implicit */_Bool) arr_15 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4])) ? (arr_15 [i_4 - 2] [i_4 - 2] [i_4 + 2] [(unsigned short)17]) : (arr_15 [i_4 + 1] [i_4] [i_4 - 2] [i_4])))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 3; i_10 < 17; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) arr_23 [i_4 - 2] [i_10] [i_9 - 1] [i_10 - 2] [i_11] [i_4 - 2]);
                                var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4 - 1] [6ULL] [(signed char)8] [i_9 - 4] [i_5] [8ULL] [i_11])) ? (((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [i_4 + 2])) : (((/* implicit */int) arr_16 [i_9]))));
                                var_25 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_31 [i_4 + 1] [i_5] [i_5] [i_9 - 3] [i_10 - 3]))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_4 - 2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_9 - 3] [i_5] [i_5] [i_5] [i_4]))))) : (((((/* implicit */_Bool) ((signed char) arr_31 [(unsigned char)1] [i_5] [9ULL] [i_5] [14LL]))) ? (arr_17 [i_4 - 1] [(unsigned char)12] [i_9 - 2] [i_5]) : ((~(((/* implicit */int) arr_26 [i_4]))))))));
                    var_27 = ((/* implicit */long long int) ((((_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_5] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [(_Bool)1]))) : (arr_22 [11] [i_5] [i_9] [i_4 + 1])))) ? (((((/* implicit */_Bool) ((signed char) arr_25 [i_4 + 2] [i_4 - 1] [i_4] [i_4]))) ? (((/* implicit */int) ((signed char) arr_19 [(_Bool)1] [14LL] [i_9] [i_9] [i_9] [i_4]))) : (((/* implicit */int) arr_18 [i_4 + 1] [(_Bool)1] [i_9 - 1] [(_Bool)1])))) : (((/* implicit */int) arr_27 [(short)10] [i_5] [12] [i_4]))));
                }
            }
        } 
    } 
    var_28 -= ((/* implicit */_Bool) ((unsigned char) (!((!(var_6))))));
}
