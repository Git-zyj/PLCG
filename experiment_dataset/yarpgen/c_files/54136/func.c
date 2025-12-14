/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54136
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0])))))));
        var_18 &= (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 2108082854)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (18446744073709551615ULL))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
            {
                {
                    var_19 = ((unsigned char) var_5);
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_3 - 2] [i_3 - 1]))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((var_14) ? (((/* implicit */int) (unsigned char)0)) : (var_11))) + (arr_11 [i_1] [i_1]))))));
                    }
                    for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_21 = ((((/* implicit */_Bool) arr_5 [i_1])) || ((_Bool)1));
                        arr_20 [i_1] [i_3 + 2] [i_1] [i_1] [i_1] = arr_3 [i_5];
                    }
                }
            } 
        } 
        arr_21 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) ((int) var_13)))));
    }
    for (unsigned char i_6 = 2; i_6 < 9; i_6 += 1) 
    {
        var_22 = ((/* implicit */int) min((((/* implicit */short) (unsigned char)43)), (min((((/* implicit */short) var_12)), (var_6)))));
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_6 + 1])) ? (arr_0 [i_6 + 1]) : (arr_0 [i_6 - 1])))));
                        var_24 = ((int) ((((/* implicit */_Bool) max(((unsigned short)64989), (((/* implicit */unsigned short) var_12))))) ? (((var_12) ? (-1954077166373198939LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (268173312) : (((/* implicit */int) (unsigned char)35)))))));
                        var_25 = ((/* implicit */long long int) (unsigned char)43);
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)63331)))), ((+(((/* implicit */int) var_14))))))) ? (((/* implicit */int) ((unsigned char) var_10))) : (((/* implicit */int) (unsigned char)137))));
                        var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? ((+(var_10))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                {
                    arr_40 [i_6] [i_10] [9] [9] = ((/* implicit */_Bool) 935777023);
                    /* LoopSeq 2 */
                    for (int i_12 = 2; i_12 < 9; i_12 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_19 [i_6] [16] [10] [i_11] [i_12 - 2] [(short)12])) : (((/* implicit */int) var_2)))) / (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)55433)))))))));
                            arr_47 [i_6] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */int) arr_38 [i_6] [i_11] [(_Bool)1] [(_Bool)1]);
                            var_29 -= ((/* implicit */long long int) (-(((int) arr_24 [i_6] [i_12]))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_14 = 2; i_14 < 9; i_14 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_18 [4ULL]))));
                            var_31 = ((/* implicit */unsigned short) var_11);
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)255))) ? (((((/* implicit */int) (unsigned short)64968)) / (((/* implicit */int) (unsigned char)237)))) : (((/* implicit */int) (unsigned char)0)))))));
                            var_33 -= ((/* implicit */unsigned char) var_16);
                        }
                        for (unsigned char i_15 = 4; i_15 < 9; i_15 += 4) 
                        {
                            var_34 = var_7;
                            var_35 -= max((((/* implicit */int) arr_39 [i_6] [i_6 - 1] [i_6 - 2])), (((var_13) ? (((((/* implicit */int) var_12)) - (((/* implicit */int) (unsigned char)42)))) : ((-(((/* implicit */int) var_14)))))));
                            var_36 = (+(((unsigned long long int) (!(((/* implicit */_Bool) var_16))))));
                            var_37 = max((((((/* implicit */_Bool) arr_10 [i_6 - 1] [i_10])) ? (arr_10 [i_6 + 1] [i_10]) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) arr_27 [i_6] [(unsigned char)9] [i_11])) ? (var_3) : (268173312))));
                        }
                        /* vectorizable */
                        for (unsigned short i_16 = 0; i_16 < 10; i_16 += 3) 
                        {
                            var_38 = ((/* implicit */int) min((var_38), ((~(((/* implicit */int) ((((/* implicit */int) arr_34 [i_16] [i_10])) < (((/* implicit */int) (_Bool)1)))))))));
                            var_39 = ((((((/* implicit */_Bool) arr_48 [i_6] [i_6] [i_6] [i_6] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_3 [i_6])) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) (unsigned short)30677)));
                        }
                        var_40 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_36 [i_12] [i_10] [i_10])), (var_8)))), (((((/* implicit */_Bool) var_5)) ? (arr_24 [i_10] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)557)))))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_1 [i_10] [(_Bool)1])) ? (arr_33 [(unsigned char)5] [i_11] [i_6] [i_6] [i_6]) : (((/* implicit */int) arr_12 [i_12] [i_11] [i_10])))));
                        var_41 = ((/* implicit */int) min((var_41), (max((((((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))) | (arr_28 [i_6] [(_Bool)1] [i_6]))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_55 [(short)4])) >> (((((/* implicit */int) (unsigned char)51)) - (26)))))) && ((!(((/* implicit */_Bool) var_11)))))))))));
                        var_42 = ((/* implicit */int) min((var_42), (((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned char)0))))) ^ (((/* implicit */int) var_8))))) ? ((+(var_15))) : (((/* implicit */int) var_4))))));
                        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) (short)8889)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (((_Bool)1) && ((!(((/* implicit */_Bool) -241799267)))))))));
                    }
                    for (short i_17 = 1; i_17 < 6; i_17 += 2) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) arr_41 [i_17] [i_11] [4] [i_6] [4]);
                        arr_59 [i_6] [i_17] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 6603457242390621122ULL)))))));
                    }
                }
            } 
        } 
        var_45 -= ((/* implicit */unsigned short) arr_13 [i_6 - 2] [i_6] [i_6 - 1] [(short)18]);
        var_46 = min((var_2), (((/* implicit */unsigned short) (signed char)(-127 - 1))));
    }
    for (int i_18 = 0; i_18 < 25; i_18 += 3) 
    {
        var_47 = ((/* implicit */unsigned char) arr_60 [i_18] [i_18]);
        arr_62 [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_60 [i_18] [i_18])))))));
        var_48 = ((/* implicit */int) min((var_48), (var_16)));
    }
    var_49 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((int) (_Bool)1)))));
    var_50 = ((/* implicit */unsigned char) min((var_50), (((unsigned char) -268173299))));
}
