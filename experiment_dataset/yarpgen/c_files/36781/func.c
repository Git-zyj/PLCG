/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36781
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
    var_10 = ((/* implicit */long long int) ((((((((/* implicit */int) (signed char)-105)) + (2147483647))) << (((1760748255) - (1760748255))))) % (((/* implicit */int) var_8))));
    var_11 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_5)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
            var_13 = ((/* implicit */long long int) (signed char)-78);
            arr_4 [i_0] [i_0 - 2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_14 = ((/* implicit */unsigned char) (unsigned short)65523);
            var_15 = ((/* implicit */_Bool) var_2);
        }
        /* LoopNest 2 */
        for (unsigned short i_3 = 3; i_3 < 16; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_4] [i_3] [i_0])) - (((/* implicit */int) (signed char)-61))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) arr_16 [i_0] [i_3 - 1] [i_3 - 1] [i_3 - 1]);
                        var_18 = ((/* implicit */signed char) ((((((/* implicit */int) (short)-29869)) ^ (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])))) + (((/* implicit */int) arr_0 [(signed char)14] [i_3 - 3]))));
                        arr_18 [i_0] [i_0] [15LL] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_8 [(unsigned short)3] [i_3] [i_5]);
                    }
                    /* LoopSeq 4 */
                    for (long long int i_6 = 4; i_6 < 15; i_6 += 4) 
                    {
                        arr_21 [i_3] [i_4] = ((/* implicit */_Bool) arr_20 [i_0] [i_3 - 2] [7LL] [i_6] [i_6]);
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(signed char)1] [i_4] [i_6 - 4]))))) <= (((((/* implicit */_Bool) arr_2 [i_3 - 3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_0 [i_3] [i_3]))))));
                        arr_22 [i_0] [i_4] [i_4] [i_3 - 3] = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_3] [i_6]))));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */int) arr_1 [11LL] [i_7 - 1])) ^ (((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) (signed char)-59))))))));
                        arr_27 [10] [10] [i_0] = ((/* implicit */unsigned char) arr_7 [i_0 - 2]);
                    }
                    for (int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) var_6);
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            var_22 = ((/* implicit */int) arr_9 [i_0]);
                            var_23 = ((/* implicit */unsigned long long int) var_8);
                        }
                        for (unsigned short i_10 = 2; i_10 < 13; i_10 += 3) 
                        {
                            arr_35 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (14366205685525633608ULL))))) % (arr_34 [i_8] [i_3] [i_3] [i_3] [(unsigned short)10] [i_3])));
                            arr_36 [i_8] [i_0] [(unsigned short)9] [(signed char)1] [i_10] = 14366205685525633585ULL;
                            var_24 += ((/* implicit */long long int) arr_6 [i_3] [i_3] [i_10 + 1]);
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_20 [5U] [i_8] [i_3 - 1] [i_3 - 1] [i_0]))));
                        }
                        var_26 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_3]))) != (arr_6 [i_0] [i_3] [i_3]))))) ^ (((var_4) | (var_2)))));
                    }
                    for (signed char i_11 = 1; i_11 < 15; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((arr_16 [i_0 - 2] [i_3] [i_4] [i_11]) % (arr_37 [i_3] [i_3] [i_3] [i_3]))) + (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_11] [i_0] [i_3 + 1] [i_0] [(unsigned short)2])))));
                        var_28 = (!((!(((/* implicit */_Bool) arr_33 [i_0])))));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_20 [i_0 + 1] [i_0 + 1] [(signed char)15] [i_0] [i_0]))));
                        var_30 = ((arr_37 [i_0] [i_3] [i_3] [(signed char)12]) > (((/* implicit */long long int) ((/* implicit */int) arr_13 [(_Bool)1] [i_3] [i_3]))));
                    }
                    var_31 = ((((/* implicit */_Bool) arr_1 [i_3 - 3] [i_4])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_4]))))) : (var_2));
                }
            } 
        } 
        var_32 = var_2;
    }
    var_33 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + (-8788213438626767568LL)));
    /* LoopNest 3 */
    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 2) 
    {
        for (long long int i_13 = 1; i_13 < 24; i_13 += 2) 
        {
            for (unsigned short i_14 = 1; i_14 < 24; i_14 += 4) 
            {
                {
                    var_34 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_46 [i_12] [i_14])) && (((/* implicit */_Bool) (+(arr_45 [i_12] [i_12])))))) ? (((((/* implicit */unsigned long long int) arr_47 [i_12] [(short)6] [24LL])) | (min((((/* implicit */unsigned long long int) arr_40 [i_13])), (arr_39 [i_14 - 1]))))) : (((/* implicit */unsigned long long int) arr_46 [11LL] [(unsigned short)4]))));
                    var_35 = ((/* implicit */long long int) arr_47 [i_12] [i_13] [i_12]);
                    var_36 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) var_0)) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_12] [i_12])) && (((/* implicit */_Bool) var_2)))))) : (((arr_46 [i_12] [i_12]) | (arr_42 [i_12])))))));
                }
            } 
        } 
    } 
}
