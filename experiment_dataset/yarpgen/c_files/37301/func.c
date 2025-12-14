/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37301
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
    var_20 |= ((/* implicit */signed char) (~(min((((/* implicit */long long int) min(((unsigned char)198), (((/* implicit */unsigned char) (signed char)-105))))), (((var_10) / (((/* implicit */long long int) ((/* implicit */int) (short)-27997)))))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-52)) == (((/* implicit */int) (short)-27997))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) 0)) ? (arr_0 [i_0]) : (arr_0 [19ULL]))) >> (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12456))) : (181213059U))) - (4294954789U))))), (((/* implicit */long long int) ((((unsigned int) arr_1 [i_0])) * (((/* implicit */unsigned int) arr_1 [i_0])))))));
        var_22 *= ((/* implicit */unsigned short) ((((min((((/* implicit */long long int) -654287629)), (arr_0 [i_0]))) / (arr_0 [i_0]))) * (((/* implicit */long long int) min((((((/* implicit */int) (short)12455)) / (((/* implicit */int) (short)-12456)))), (arr_1 [5]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1]))))), (min((((/* implicit */unsigned short) var_16)), (arr_6 [i_0] [i_4])))))), (((max((arr_7 [(_Bool)1] [(short)5] [(_Bool)1] [i_3]), (arr_12 [i_0] [(signed char)15] [i_0] [i_0] [i_4] [i_0]))) + (((/* implicit */unsigned long long int) (-(var_6))))))));
                                var_24 = max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [(signed char)16] [i_3] [i_0])), (var_12));
                                var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) ((arr_1 [(_Bool)1]) + (((/* implicit */int) (unsigned char)198)))))), ((+(((/* implicit */int) arr_10 [i_3 + 1] [i_2] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((arr_7 [i_0] [i_1] [i_2] [i_0]) * (((/* implicit */unsigned long long int) ((min((arr_5 [i_2] [i_1] [i_1] [i_0]), (((/* implicit */long long int) 0U)))) % (arr_5 [i_0] [i_1] [i_1] [i_2])))))))));
                }
            } 
        } 
    }
    for (long long int i_5 = 3; i_5 < 13; i_5 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_6 = 1; i_6 < 14; i_6 += 2) 
        {
            var_27 = ((/* implicit */int) min((var_27), ((-(((/* implicit */int) ((signed char) var_16)))))));
            var_28 = ((/* implicit */unsigned short) ((7205691578974504137ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58)))));
            /* LoopSeq 3 */
            for (signed char i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-12456)) * (((/* implicit */int) (signed char)-23))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    for (unsigned char i_9 = 2; i_9 < 13; i_9 += 2) 
                    {
                        {
                            arr_30 [i_5] [i_5] [i_9] [i_8] [i_6] = ((/* implicit */unsigned long long int) 4294967295U);
                            var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_5 [i_5] [i_5] [i_5] [i_5 - 2]) - (arr_14 [i_8]))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_10 = 2; i_10 < 13; i_10 += 1) 
            {
                arr_34 [i_5] [(_Bool)1] [i_10 - 2] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)127))));
                arr_35 [i_5] [i_6] [10] = ((/* implicit */unsigned short) (-2147483647 - 1));
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_10] [i_10] [i_5 - 1] [i_5 + 2] [i_5 - 1])) ? ((-(arr_31 [i_10 - 1] [i_6 + 1] [i_5]))) : (((/* implicit */unsigned int) ((arr_8 [i_5] [i_6 - 1] [i_10 + 2] [i_11]) / (((/* implicit */int) arr_28 [i_5] [i_5] [i_6 + 1] [i_10 + 2] [i_11])))))));
                    arr_38 [4LL] &= ((/* implicit */unsigned int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)22757)) - (22740)))));
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_10 + 2])) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) arr_9 [i_5 - 2] [i_6] [i_10 + 1]))));
                }
            }
            for (signed char i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                arr_43 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_4)) ? (arr_0 [i_6]) : (arr_13 [i_5 + 2] [i_6])))));
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) 1601583123))));
                /* LoopSeq 1 */
                for (signed char i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_5] [i_6] [9ULL] [i_6 + 1] [i_5 - 2] [5] [i_6])) || (((/* implicit */_Bool) (signed char)127))));
                    var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_20 [i_5] [i_6] [i_6] [(short)6]) - (((/* implicit */unsigned long long int) var_14)))))));
                }
            }
        }
        for (unsigned int i_14 = 2; i_14 < 14; i_14 += 2) 
        {
            arr_48 [i_14] [10ULL] = ((/* implicit */signed char) (short)-27997);
            var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_46 [i_14 - 2] [6U] [i_5]))));
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_5 + 2] [i_5 + 2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_27 [i_5] [i_14] [i_5] [(unsigned short)12] [i_5]))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) : (var_10)));
            var_38 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (signed char)-44)))), (((/* implicit */int) var_16))));
        }
        var_39 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_39 [i_5] [i_5] [i_5 - 1] [i_5 - 1])) <= (((/* implicit */int) arr_39 [i_5] [i_5] [i_5 - 3] [i_5 - 3]))))), (max((((/* implicit */unsigned long long int) (~(arr_29 [i_5] [13] [i_5] [i_5])))), (arr_7 [i_5 - 2] [i_5] [i_5 - 2] [i_5 - 2])))));
        arr_49 [(signed char)0] = arr_28 [i_5] [i_5] [i_5 - 3] [i_5] [7ULL];
    }
}
