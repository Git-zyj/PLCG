/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195844
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
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_15 -= ((/* implicit */short) arr_5 [i_2]);
                    var_16 = ((/* implicit */int) (-(max((((long long int) arr_3 [i_1] [i_2])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_6 [i_2]) : (((/* implicit */int) (signed char)-11)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3] [i_5] [i_4] [i_3])) || (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)93)), (arr_12 [i_3] [i_3 + 2] [i_3])))))))));
                    var_18 ^= ((/* implicit */long long int) ((int) ((signed char) (-(((/* implicit */int) var_13))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 3) /* same iter space */
                    {
                        var_19 = arr_12 [i_5] [i_4] [i_3 - 2];
                        var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_2)) | (((/* implicit */int) arr_13 [i_6 + 2] [i_5] [i_6 + 2] [i_6]))))));
                        var_21 = ((/* implicit */signed char) (short)-1531);
                        var_22 = ((/* implicit */short) ((arr_5 [i_5]) ? (((((/* implicit */int) arr_3 [i_3] [i_5])) + (((((/* implicit */int) var_0)) + (((/* implicit */int) (short)1531)))))) : (((/* implicit */int) var_2))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 3; i_7 < 11; i_7 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_3 + 1] [i_3 + 1]))));
                        var_24 = ((/* implicit */short) 1701736020186128578ULL);
                        var_25 &= ((/* implicit */unsigned short) var_11);
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_26 = arr_5 [i_5];
                            var_27 ^= ((/* implicit */signed char) (~(arr_6 [i_3 + 1])));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_5] [i_3 + 3] [i_5] [i_4]))));
                            var_29 = ((/* implicit */short) (+(((/* implicit */int) arr_20 [i_8] [i_5] [i_3 - 2]))));
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (+(((/* implicit */int) ((short) arr_9 [i_4] [i_10]))))))));
                            var_31 ^= ((/* implicit */unsigned int) ((signed char) var_2));
                        }
                        for (int i_11 = 0; i_11 < 13; i_11 += 1) 
                        {
                            var_32 = ((var_0) ? (arr_9 [i_3 + 3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [7U] [i_3] [i_3] [i_5] [i_3 + 3] [i_3 + 3]))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3] [i_3] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [11ULL] [i_4] [i_5] [i_8] [11ULL]))) : (arr_2 [i_5])));
                            var_34 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_5])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                        }
                        var_35 = ((/* implicit */signed char) arr_12 [i_3 + 3] [i_3 + 3] [i_3 + 3]);
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 12; i_12 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 13; i_13 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_14 [i_12 + 1] [(signed char)6] [(signed char)6] [i_3 - 2])))))));
                            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_3] [6LL] [i_3 - 1] [i_12])) ? (((/* implicit */int) ((short) arr_14 [i_4] [i_4] [4LL] [i_13]))) : (((/* implicit */int) var_0)))))));
                        }
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3149326391U)) || (((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [i_3] [i_3 - 1] [i_5] [i_3])) / (var_6))))));
                        var_39 -= (~(5752086361269289539ULL));
                    }
                    var_40 = ((/* implicit */unsigned long long int) arr_18 [i_3] [i_4] [i_5] [i_5]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_14 = 2; i_14 < 11; i_14 += 4) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 2) 
        {
            {
                var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (short)-1524))))), (((int) var_10))))) ? (((/* implicit */int) var_14)) : (min((((/* implicit */int) var_8)), (((((/* implicit */int) arr_5 [i_15])) + (((/* implicit */int) arr_5 [i_14]))))))));
                var_42 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) | (((unsigned long long int) (_Bool)1))));
                var_43 = ((/* implicit */unsigned short) var_1);
            }
        } 
    } 
}
