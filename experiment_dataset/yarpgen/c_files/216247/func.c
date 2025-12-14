/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216247
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
    var_12 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-9223372036854775803LL), (((/* implicit */long long int) 1599744252U))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_7))))) : ((~(((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned int) 2147483647)) : (min((((/* implicit */unsigned int) var_4)), (max((2695223043U), (((/* implicit */unsigned int) var_0))))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)21585), (((/* implicit */short) var_0))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (((var_2) | (var_7))) : (((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) (unsigned short)12249)) : (((/* implicit */int) (short)-32751))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (unsigned short)32768);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) -5918169850520698346LL);
        var_14 = ((/* implicit */int) (!(((arr_5 [i_1] [i_1]) >= (arr_5 [(signed char)8] [i_1])))));
        var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) >= (arr_5 [i_1] [i_1])));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_16 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */short) 1867826685);
                        var_16 = ((/* implicit */short) -18);
                        var_17 = ((/* implicit */int) ((max((arr_8 [i_3] [i_2]), (((/* implicit */long long int) ((18446744073709551611ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30720)))))))) < (((/* implicit */long long int) (-(((((/* implicit */int) (short)31)) << (((2147483647) - (2147483644))))))))));
                        arr_17 [i_2] [i_3] [i_2] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-31390)) ? (((/* implicit */int) arr_12 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_12 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1])))) | (((/* implicit */int) ((((((/* implicit */_Bool) 0)) ? (3016334593U) : (arr_5 [i_4 + 1] [i_3]))) != (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_2]))) * (0U))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            arr_20 [i_2] [i_2] [i_2] = min((0ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))));
            var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [i_2]))));
        }
    }
    /* LoopSeq 2 */
    for (int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (max((((/* implicit */unsigned int) ((signed char) arr_27 [15] [i_8] [i_7]))), (max((((/* implicit */unsigned int) arr_27 [i_7] [i_7] [i_7])), (0U)))))));
                    var_20 = ((/* implicit */_Bool) (-(((((((/* implicit */int) (short)7123)) >> (((/* implicit */int) arr_27 [i_7] [i_8] [i_8])))) | (((((/* implicit */_Bool) arr_21 [i_9] [i_7])) ? (arr_1 [i_7]) : (1542210734)))))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        for (int i_11 = 1; i_11 < 22; i_11 += 3) 
                        {
                            {
                                arr_36 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_29 [i_10] [i_10] [i_10])), (min((8256252017117505391ULL), (((/* implicit */unsigned long long int) arr_28 [i_7] [i_8]))))));
                                arr_37 [i_7] [i_8] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) (+((+((+(arr_31 [(_Bool)1] [i_8] [i_9])))))));
                                arr_38 [i_7] [i_11] [i_10] [i_9] [i_8] [i_7] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((17ULL) * (((/* implicit */unsigned long long int) arr_1 [i_10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_35 [i_7] [i_8] [i_9] [i_9] [i_10] [(unsigned short)1])) >= (arr_33 [i_7] [i_7]))))) : ((+(arr_21 [i_8] [i_10]))))), (((/* implicit */unsigned int) arr_35 [i_11] [i_11] [(_Bool)1] [i_11 + 1] [(unsigned short)12] [i_11]))));
                                arr_39 [i_7] [i_7] [i_8] [i_7] [i_10] [i_10] [i_7] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_22 [i_11 - 1] [i_11 + 1])) || (((/* implicit */_Bool) arr_22 [i_11 + 1] [i_11 - 1])))));
                                arr_40 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) 1599744253U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_41 [i_7] [i_7] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)0)), (arr_24 [i_7] [i_7] [8])))) * (((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */unsigned long long int) arr_29 [13] [i_7] [i_7])) : (2199023239168ULL))))));
    }
    for (int i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_13 = 0; i_13 < 23; i_13 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) arr_43 [(unsigned short)16]);
            var_22 = ((/* implicit */unsigned short) (-(arr_46 [i_12])));
            var_23 = ((/* implicit */int) ((((unsigned int) 11U)) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 16818022433843400311ULL)) && (((/* implicit */_Bool) 1614353335))))))));
            arr_47 [i_12] [i_13] [(signed char)7] = ((/* implicit */long long int) ((arr_1 [i_12]) | (2147483647)));
        }
        arr_48 [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)5))));
    }
    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) min((min(((unsigned short)32779), (((/* implicit */unsigned short) (short)-32742)))), (min((var_9), (var_8)))))) + (((/* implicit */int) (_Bool)0))));
}
