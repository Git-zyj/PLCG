/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47778
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
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
        var_18 = ((/* implicit */_Bool) (+(((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((short) var_12))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_11)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))) : (((/* implicit */int) ((short) arr_1 [i_0 + 1])))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((int) ((signed char) var_10)));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */short) var_9))))) ? (((/* implicit */int) ((short) min((var_8), (((/* implicit */unsigned int) var_9)))))) : (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_13)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_7 [i_1]), ((signed char)-126)))) % (((/* implicit */int) var_1))))) ^ (var_14)));
        var_20 = ((/* implicit */unsigned int) ((short) ((signed char) var_3)));
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_3 = 3; i_3 < 12; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 12; i_4 += 1) 
            {
                {
                    arr_18 [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) (signed char)9);
                    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (2147483647) : (((/* implicit */int) arr_13 [i_4 + 1] [i_3 - 3]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) - (var_14)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 3; i_5 < 10; i_5 += 2) 
        {
            for (signed char i_6 = 2; i_6 < 11; i_6 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        arr_27 [i_2] [i_5] = ((/* implicit */unsigned char) 2939439349104898352ULL);
                        arr_28 [i_2] [(_Bool)1] [i_6 - 2] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
                        var_22 = ((/* implicit */long long int) ((_Bool) 18446744073709551610ULL));
                    }
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        var_23 = ((/* implicit */int) min((((/* implicit */unsigned short) ((var_14) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), (var_15)));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_16 [i_2] [i_5 + 3] [i_8] [0ULL]), (-2147483625)))) && (((((/* implicit */_Bool) arr_24 [i_2] [i_6] [i_5])) && ((!((_Bool)1)))))));
                        var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) (unsigned char)116)))) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned short)65535))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 10; i_9 += 3) 
                    {
                        for (long long int i_10 = 2; i_10 < 12; i_10 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)18594))));
                                arr_36 [i_2] [i_5] = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) var_1)), (arr_17 [i_5] [i_6 + 2] [i_2] [i_5]))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (signed char)110))))) <= (((var_4) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15)))))))));
                                arr_37 [i_9] [i_5] [5] [i_5] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((var_12), (((/* implicit */unsigned int) arr_23 [i_2] [(unsigned short)9] [i_5]))))), (((((/* implicit */_Bool) var_1)) ? (var_5) : (var_0)))))) ? (min((((/* implicit */int) ((((/* implicit */_Bool) -2147483631)) || (((/* implicit */_Bool) var_0))))), (var_10))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)151)) && (((/* implicit */_Bool) min((arr_26 [i_2] [i_2]), (arr_29 [i_5])))))))));
                            }
                        } 
                    } 
                    arr_38 [2LL] [i_5] [i_5] [i_5] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 2939439349104898354ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6 - 2] [i_5 - 2]))) : (15507304724604653263ULL)))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 3; i_11 < 11; i_11 += 3) 
                    {
                        for (signed char i_12 = 0; i_12 < 13; i_12 += 4) 
                        {
                            {
                                arr_45 [i_2] [2ULL] [2ULL] [i_5] [i_12] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_16)) % (((/* implicit */int) (unsigned char)13)))), (((/* implicit */int) min((((/* implicit */short) (signed char)36)), (var_1))))))) : (((2939439349104898352ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (var_9)))))))));
                                arr_46 [(short)2] [i_6 + 1] [(short)2] [i_5] = var_3;
                                var_27 = ((unsigned short) ((((/* implicit */_Bool) ((-1966380116) | (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 3251102456U)) ? (((/* implicit */int) var_3)) : (var_10))) : (((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) (-(((long long int) var_9))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            for (signed char i_14 = 1; i_14 < 9; i_14 += 3) 
            {
                for (signed char i_15 = 1; i_15 < 10; i_15 += 2) 
                {
                    {
                        var_29 = var_4;
                        var_30 = ((/* implicit */unsigned short) var_2);
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_2] [5LL] [i_15 + 3])) ? (((((/* implicit */_Bool) min((var_6), (var_3)))) ? (((/* implicit */int) max((((/* implicit */short) var_4)), (var_7)))) : (((/* implicit */int) var_15)))) : (((int) ((((/* implicit */_Bool) -1312754090)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))));
                    }
                } 
            } 
        } 
    }
    var_32 = ((/* implicit */unsigned char) var_11);
}
