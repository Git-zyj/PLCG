/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190412
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) (unsigned short)61440)) : (var_12)))) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
            arr_4 [i_1] [13LL] [4U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)45))))) : (1993930417907694919LL)));
            arr_5 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))) : (arr_2 [i_0] [i_1]));
            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]))));
        }
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 747016991U)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (signed char)45))))) ? (((/* implicit */int) (unsigned short)29236)) : (((/* implicit */int) (signed char)43))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [(short)9] [(short)9])) : (((/* implicit */int) var_1))))) : (((long long int) 15373318281001390596ULL)))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    arr_12 [i_2] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-32746)) ? (((/* implicit */int) (unsigned short)48899)) : (((/* implicit */int) (signed char)19))))))) ? (((((/* implicit */_Bool) arr_2 [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36300))) : (747016986U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [23ULL] [i_0] [i_0]))))))));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (min((((/* implicit */unsigned short) (unsigned char)68)), ((unsigned short)29247)))));
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 2; i_5 < 24; i_5 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) var_7);
                            var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_14 [i_0] [i_3] [i_3] [i_5 - 1] [i_5] [i_3])) / (arr_17 [i_5 + 1] [(_Bool)1] [i_5] [i_5] [i_5] [i_5 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_13 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))) : (-8326107527256647242LL)))) : (((((/* implicit */_Bool) arr_9 [i_2])) ? (max((var_8), (arr_15 [i_0] [i_2] [i_0] [i_4] [i_4] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (1152921504606322688LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36305))))))))));
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) (signed char)-40);
                        }
                        for (unsigned char i_6 = 2; i_6 < 24; i_6 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (unsigned char)69)), (2803772062U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)48991)) ? (((/* implicit */int) (unsigned short)29231)) : (var_6)))))))));
                            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_3] [i_6 + 1] [(unsigned short)23] [i_0]))));
                            var_21 = ((/* implicit */long long int) 747016985U);
                            var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7991)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57559))) : (2803772062U))))));
                        }
                        for (unsigned char i_7 = 2; i_7 < 24; i_7 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) arr_7 [i_0] [i_2] [i_3]);
                            arr_23 [i_3] [(signed char)6] [(signed char)6] [(_Bool)1] [i_7] [(signed char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -96739314)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned long long int) (unsigned char)62)), (((unsigned long long int) arr_14 [i_3] [i_2] [i_3] [i_4] [i_7] [i_3]))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_20 [(short)7] [(short)7] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) -1593877110)) : (var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59301)) ? (((/* implicit */int) (unsigned short)29247)) : (((/* implicit */int) (unsigned char)51))))) : (((((/* implicit */_Bool) var_0)) ? (arr_17 [i_0] [i_7 - 2] [i_3] [i_4] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 2; i_8 < 24; i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_3] [(unsigned short)22] [i_4] [i_4] [i_4] [i_8] = ((((/* implicit */_Bool) arr_15 [i_0] [i_8 + 1] [i_3] [24] [i_3] [8LL])) ? (((/* implicit */int) (unsigned short)26131)) : (((/* implicit */int) (unsigned char)229)));
                            arr_27 [i_3] [i_3] [i_3] [i_4] [i_8 - 2] [i_3] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_8 + 1] [i_8 + 1]))));
                        }
                    }
                    var_25 = ((/* implicit */_Bool) var_1);
                    arr_28 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) (unsigned short)18272);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
    {
        arr_31 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) arr_1 [8ULL]))))) ? (((((/* implicit */_Bool) (unsigned char)205)) ? (144115188071661568LL) : (arr_24 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) : (((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214))) : (144115188071661568LL)))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                {
                    var_26 |= ((/* implicit */unsigned long long int) (~(var_12)));
                    var_27 = ((/* implicit */long long int) ((var_8) / (var_4)));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (144115188071661568LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [10LL] [i_9])))))) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_9] [i_9] [i_9] [i_9] [(_Bool)1] [i_9])))))));
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_9] [i_9])) ? (var_6) : (((/* implicit */int) arr_29 [i_9] [i_9])))))));
        arr_36 [i_9] = ((/* implicit */unsigned short) arr_20 [(unsigned short)17] [i_9] [i_9] [i_9] [i_9]);
    }
    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((+(((/* implicit */int) (unsigned short)59301))))))))));
}
