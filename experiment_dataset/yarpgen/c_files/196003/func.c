/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196003
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
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (var_16))))) : (var_16))) << (((var_14) - (8940178254665423622ULL)))));
    var_20 = ((/* implicit */unsigned int) var_2);
    var_21 = ((var_6) ^ (((/* implicit */int) var_18)));
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_18))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_23 = ((/* implicit */int) (_Bool)0);
        var_24 = ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) - ((+(12692679829290362876ULL))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_1 + 2] [i_1 + 2])) ? (arr_5 [i_2 - 1] [i_1] [i_1 + 2]) : (arr_5 [i_2 + 1] [i_1 + 1] [i_1 + 1])))) < (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), (max((((/* implicit */unsigned long long int) 4294967295U)), (8ULL))))));
                    arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((int) (unsigned char)4)))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(max((((/* implicit */long long int) min((arr_8 [i_0] [i_0] [i_0] [i_0]), ((short)-2155)))), (arr_6 [i_2 - 2] [i_2] [i_1 + 1] [i_2 + 2]))))))));
                    arr_11 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (short)0))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6108463575101594850LL)))) ? (var_10) : ((-(((/* implicit */int) (short)28819)))))) : ((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [(_Bool)1])) : (((/* implicit */int) (unsigned char)48))))))));
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((unsigned long long int) var_16)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    var_27 &= ((/* implicit */short) (((-(((((/* implicit */_Bool) arr_8 [i_0] [i_4] [i_0] [i_0])) ? (67108864U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) / (var_17)));
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_15 [i_0] [i_0] [i_3] [i_3])))) ? (((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */int) arr_3 [i_3] [i_3] [i_0])) + (((/* implicit */int) arr_15 [i_0] [i_0] [i_3] [i_4]))))))) > (((((((/* implicit */unsigned long long int) var_12)) == (var_8))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_3]))) : (max((arr_2 [i_4]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    var_28 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) 2839354623U)) ? (arr_5 [i_4] [i_3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))))), (((((/* implicit */_Bool) 2957070537666775930LL)) ? (arr_5 [i_0] [i_3] [i_4]) : (arr_5 [i_4] [i_3] [i_4])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_23 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */_Bool) (unsigned char)1);
                    var_29 = ((/* implicit */unsigned char) arr_22 [i_6]);
                }
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        var_30 += ((/* implicit */unsigned long long int) (unsigned char)255);
        arr_26 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [8ULL])) ? (((long long int) arr_22 [i_7])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48)))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 4; i_8 < 14; i_8 += 1) 
        {
            for (unsigned char i_9 = 4; i_9 < 11; i_9 += 2) 
            {
                {
                    var_31 &= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_8 [i_7] [i_8] [i_9] [i_9])), ((-(7775378651618883728ULL))))), (((/* implicit */unsigned long long int) var_18))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 14; i_11 += 3) 
                        {
                            {
                                arr_39 [i_10 + 3] [i_10] [i_7] [i_10] [i_10] [i_10 + 3] [i_10 + 3] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_33 [i_11] [i_10] [i_7])) ? (((/* implicit */unsigned long long int) (+(0LL)))) : (((unsigned long long int) var_18))))));
                                arr_40 [i_9] [0ULL] [i_7] [i_10] [i_9] [i_9] [i_11] = arr_18 [i_9 - 4] [i_10 + 3] [i_11 + 1];
                                var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((arr_17 [i_8] [i_9 + 1] [12LL]) ? (((/* implicit */long long int) 2147483647)) : (-9223372036854775803LL)))))) < ((((_Bool)1) ? (((((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_8] [i_9 + 2] [11LL] [i_11])) ? (14479704577903897279ULL) : (((/* implicit */unsigned long long int) arr_37 [i_7] [i_7] [i_9] [i_10] [i_11])))) : (var_4))))))));
                                var_33 = ((/* implicit */_Bool) (short)-20);
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned long long int) (~((+(2516060589U)))));
                }
            } 
        } 
        var_35 = min(((-(arr_29 [i_7]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-3))))));
    }
}
