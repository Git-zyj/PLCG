/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230114
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
    var_12 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (min((((/* implicit */unsigned int) 1132752903)), (((((/* implicit */unsigned int) 1016376002)) & (1670305740U))))) : (2140886494U)));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(1073741696U)))))) ? (((long long int) ((((/* implicit */int) (unsigned char)145)) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483643)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        var_13 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (18446744073709551612ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_3))))))) : (((((unsigned int) (unsigned char)111)) / (((/* implicit */unsigned int) min((2147483643), (arr_0 [i_0] [i_0]))))))));
        arr_4 [6LL] [(unsigned char)10] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)190))))) | (((var_3) >> (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            var_14 = ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)14533)))) / (((/* implicit */int) (unsigned char)38))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                var_15 = ((/* implicit */short) min((min((arr_0 [i_1] [i_1 - 1]), (arr_0 [i_1 - 1] [i_1 + 1]))), (((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1])) ? (((/* implicit */int) var_2)) : (arr_0 [i_0] [i_1 + 1])))));
                var_16 = ((/* implicit */signed char) arr_1 [i_2] [i_1]);
                arr_12 [i_0] [i_0] [i_2] [(signed char)18] = ((/* implicit */int) arr_1 [i_1] [i_1]);
            }
        }
        /* LoopSeq 1 */
        for (signed char i_3 = 1; i_3 < 15; i_3 += 2) 
        {
            arr_16 [(signed char)4] |= var_5;
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_3 + 2])), (arr_14 [i_0] [i_0] [i_0])));
            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3 - 1] [i_3 + 1])) ? (((/* implicit */unsigned long long int) arr_15 [i_3 + 1] [i_0] [i_3 + 1])) : (var_7))))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            var_18 = ((/* implicit */_Bool) ((unsigned int) ((max((((/* implicit */unsigned long long int) 2827912968U)), (arr_14 [i_5] [i_4] [i_5]))) > (((/* implicit */unsigned long long int) ((var_1) ? (arr_1 [i_5] [i_5]) : (931448773U)))))));
            var_19 = ((/* implicit */_Bool) (+((+(arr_19 [i_5])))));
            arr_22 [i_4] = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_0)))) + (((/* implicit */int) arr_2 [i_4] [(signed char)17]))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_3))));
        }
        for (short i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
        {
            arr_26 [i_4] [i_6] [i_6] = (+(arr_1 [(_Bool)1] [i_6]));
            arr_27 [i_4] [i_4] = arr_19 [3];
            var_21 = ((/* implicit */_Bool) ((unsigned long long int) max((arr_15 [i_6] [i_4] [i_4]), (((/* implicit */unsigned int) arr_13 [i_4] [i_4])))));
            var_22 = ((/* implicit */unsigned short) arr_8 [i_4] [i_4] [i_4] [i_6]);
        }
        for (short i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_11 [i_7] [14LL] [i_4])))) ? ((~(arr_9 [(signed char)14]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)136)) >> (((((/* implicit */int) (short)-17044)) + (17061)))))))))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    {
                        arr_34 [i_4] [i_4] = ((/* implicit */unsigned short) (_Bool)1);
                        var_24 = ((/* implicit */unsigned short) var_11);
                    }
                } 
            } 
            arr_35 [i_4] = var_8;
            arr_36 [i_4] [i_4] = ((/* implicit */unsigned short) max((var_5), (((/* implicit */unsigned int) var_8))));
            var_25 = (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)13))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 4095)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (short)2)))))));
        }
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((591478661U) == (2140886511U))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_39 [i_10] [i_10] = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [12ULL] [8ULL] [i_10])))))) ^ (3029058606U)))));
        var_27 = (i_10 % 2 == zero) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) arr_20 [(short)16] [i_10])) - (165)))))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (_Bool)0)) << (((((((/* implicit */int) arr_20 [(short)16] [i_10])) - (165))) + (58))))))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) arr_31 [i_11] [(short)15])), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_11] [i_11]))) - (3374510935U))))));
        var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)4095)))), ((+(((/* implicit */int) arr_8 [i_11] [i_11] [i_11] [i_11]))))))) ? (((/* implicit */int) ((var_9) != (arr_38 [i_11] [i_11])))) : (min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)42)) && (((/* implicit */_Bool) 8080114321342574551LL))))), (((((/* implicit */_Bool) arr_11 [i_11] [i_11] [i_11])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_42 [i_11] [(unsigned char)2]))))))));
    }
    var_30 &= ((/* implicit */_Bool) var_4);
}
