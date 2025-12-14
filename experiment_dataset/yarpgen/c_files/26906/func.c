/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26906
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
    var_10 = (+((-9223372036854775807LL - 1LL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_8 [i_3] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_3 - 1])) ^ (((/* implicit */int) arr_1 [i_3 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_3 - 1]))))) : (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                            arr_9 [(signed char)14] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned short) ((short) arr_0 [i_3 - 1] [i_3 - 1]))), (arr_0 [i_3 - 1] [i_3 - 1])));
                            arr_10 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2] [i_3 - 1])) & (((/* implicit */int) (short)0)))))));
                        }
                    } 
                } 
                arr_11 [i_1] = (-(((/* implicit */int) ((unsigned char) arr_4 [i_1] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) max((((/* implicit */int) var_0)), (min((max((-153517702), (153517699))), (((/* implicit */int) var_1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        arr_21 [i_7] [i_5] [i_4] = ((/* implicit */signed char) ((int) (-(153517707))));
                        arr_22 [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_17 [i_4] [(_Bool)1] [i_4]))) || (((/* implicit */_Bool) arr_12 [i_5 - 1]))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_5 + 3]))));
                        arr_26 [i_8] [i_5] [i_8] [i_8] = ((/* implicit */unsigned long long int) var_8);
                        var_13 = ((/* implicit */unsigned char) ((signed char) arr_3 [i_5 + 2] [i_5]));
                    }
                    for (signed char i_9 = 2; i_9 < 10; i_9 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned int) ((signed char) (unsigned char)244));
                        var_15 = ((/* implicit */short) (~(((/* implicit */int) arr_24 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 - 1] [i_5 - 1]))));
                    }
                    arr_29 [i_4] [i_4] [6LL] = ((/* implicit */signed char) ((((var_3) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))))) + (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_5] [i_6])))));
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4] [i_5])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_31 [i_4]))))) ? (arr_23 [i_5 + 3] [i_5] [i_5 + 3] [i_10]) : (((/* implicit */int) arr_12 [i_4]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
                        {
                            var_17 = ((/* implicit */long long int) ((signed char) arr_14 [i_5 + 3] [i_5 + 1]));
                            arr_37 [i_11] [i_5] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_4] [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [19ULL] [i_11]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1250482682U)))))));
                        }
                        for (signed char i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            arr_41 [i_4] [i_12] [i_4] [i_12] = ((/* implicit */unsigned short) ((long long int) -153517702));
                            arr_42 [i_4] [i_12] [i_5] [i_6] [(signed char)7] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3842999465459991945ULL)) ? (3842999465459991945ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                        }
                    }
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-122))));
    }
    for (unsigned int i_13 = 1; i_13 < 12; i_13 += 2) 
    {
        arr_47 [i_13] [i_13] = ((/* implicit */unsigned int) min((5143884092895148371ULL), (((/* implicit */unsigned long long int) ((int) min((-153517702), (((/* implicit */int) (_Bool)1))))))));
        arr_48 [i_13] [i_13] = ((/* implicit */signed char) max(((-(((unsigned int) var_1)))), (((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)35632)))) / (((/* implicit */int) arr_0 [i_13 + 1] [i_13 - 1])))))));
    }
}
