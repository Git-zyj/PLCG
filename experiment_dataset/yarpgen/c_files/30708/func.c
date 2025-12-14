/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30708
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_20 &= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [(signed char)7])))))));
            /* LoopSeq 1 */
            for (int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                arr_8 [(unsigned short)9] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((min((((/* implicit */int) var_16)), (var_11))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 + 2]))))))))));
                var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) & (((((/* implicit */_Bool) var_0)) ? (arr_3 [1U] [15] [i_2]) : (((/* implicit */unsigned long long int) arr_7 [i_1 - 1] [i_1 - 1]))))));
                /* LoopNest 2 */
                for (long long int i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        {
                            var_23 ^= ((/* implicit */long long int) arr_5 [i_0] [i_0]);
                            var_24 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2047ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_11 [i_0] [i_1] [i_1] [i_0] [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3] [i_3] [i_3 + 2])))))) : (2047ULL)));
                        }
                    } 
                } 
            }
        }
        for (signed char i_5 = 3; i_5 < 22; i_5 += 3) 
        {
            var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((((-1) + (2147483647))) << (((var_11) - (646204450)))))) ? (((/* implicit */unsigned long long int) ((int) var_11))) : (((((/* implicit */unsigned long long int) var_5)) & (arr_10 [i_0] [i_0] [i_0] [i_5] [(signed char)10] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_5 - 3]))) + (arr_10 [11] [i_5] [i_5] [(short)6] [i_5] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)39152)) && (((/* implicit */_Bool) var_8)))))) : (arr_13 [i_0] [18LL] [i_0] [20U]))))));
            arr_16 [i_0] [i_5] = ((/* implicit */signed char) ((var_16) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */int) (_Bool)1)), (var_5))), (((/* implicit */int) ((var_19) < (1))))))) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])));
        }
        for (long long int i_6 = 1; i_6 < 22; i_6 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */int) (!(((((/* implicit */int) ((var_2) <= (arr_13 [i_0] [i_6] [i_6] [i_6])))) < (((/* implicit */int) var_7))))));
            var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_11 [i_6 - 1] [i_0] [i_6] [i_0] [i_0]))))));
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned short) arr_15 [22ULL] [i_6])), (var_10))))) ? (((/* implicit */unsigned long long int) ((1482631096U) >> (((arr_9 [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1] [i_6]) - (17353434751131309525ULL)))))) : (((((/* implicit */_Bool) (signed char)-97)) ? (1ULL) : (((/* implicit */unsigned long long int) 1429735978959892543LL))))));
        }
        for (long long int i_7 = 1; i_7 < 22; i_7 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((arr_7 [i_0] [i_0]) - (arr_7 [i_0] [i_0]))))));
            var_30 ^= ((/* implicit */signed char) var_0);
            var_31 &= ((/* implicit */unsigned char) 1429735978959892536LL);
        }
        var_32 = ((/* implicit */int) ((((min((18446744073709551614ULL), (((/* implicit */unsigned long long int) var_18)))) & (((/* implicit */unsigned long long int) (-(arr_14 [i_0])))))) << (((var_15) + (466055484386516750LL)))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_8 = 4; i_8 < 23; i_8 += 2) 
    {
        var_33 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) min((var_12), (((/* implicit */int) var_18))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_22 [i_8 - 2])) : (131071)))) : ((+(var_15))))), (min((((((/* implicit */_Bool) arr_22 [i_8])) ? (-1429735978959892529LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8 + 2]))))), (((/* implicit */long long int) arr_24 [i_8 - 1]))))));
        var_34 += ((/* implicit */unsigned short) min((max((var_11), (arr_23 [i_8 - 1]))), (((/* implicit */int) ((arr_23 [i_8 + 2]) > (arr_23 [i_8 - 4]))))));
        arr_25 [i_8] [i_8 - 4] = ((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_24 [i_8 - 2])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))));
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_22 [i_8 + 2])) : (((/* implicit */int) arr_22 [i_8 - 4]))))) ? (((/* implicit */int) arr_24 [i_8])) : (((/* implicit */int) ((((/* implicit */int) arr_22 [i_8 - 4])) > (((/* implicit */int) arr_22 [i_8 - 1])))))));
    }
    for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
    {
        var_36 -= ((/* implicit */signed char) -1);
        var_37 ^= ((/* implicit */long long int) ((int) (+(((/* implicit */int) ((var_3) == (((/* implicit */long long int) arr_14 [i_9]))))))));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 16; i_10 += 4) 
        {
            for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                {
                    var_38 = ((/* implicit */_Bool) var_0);
                    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (~(arr_13 [i_9] [i_10 - 2] [i_9] [i_9]))))));
                }
            } 
        } 
    }
    var_40 = ((/* implicit */unsigned int) var_14);
}
