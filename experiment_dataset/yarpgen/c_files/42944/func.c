/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42944
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned char) 345885454));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((arr_10 [i_0] [(unsigned short)6] [i_2]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_2] [0LL] [i_2])))))));
                            arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_3] [i_1] [i_3] [i_1])) ? (((((/* implicit */_Bool) -345885484)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))) : (-345885455)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (int i_5 = 1; i_5 < 8; i_5 += 3) 
            {
                arr_18 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((int) 345885454));
                var_14 = ((/* implicit */signed char) ((arr_10 [i_0] [i_1] [i_5 - 1]) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) (_Bool)1))))));
                var_15 = ((/* implicit */int) (((+(arr_16 [i_0] [i_5] [i_5]))) / (((/* implicit */long long int) ((/* implicit */int) (short)-11783)))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))) & (((/* implicit */int) (short)-11783))));
                arr_23 [i_1] [i_1] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_6] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_6]))) + (var_5)))));
                arr_24 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_1] [i_1])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            }
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        {
                            arr_33 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_19 [i_7] [i_1]))))) ? (((/* implicit */int) (signed char)95)) : (((((/* implicit */int) var_6)) + (((/* implicit */int) (signed char)0))))));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_28 [i_0] [i_1] [i_7] [i_8] [i_9])) + (2147483647))) << (((((arr_16 [i_1] [i_7] [i_8]) + (3776804307770794280LL))) - (16LL))))))));
                            var_18 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */int) var_0)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 0)))))));
                            var_19 = ((/* implicit */unsigned char) arr_6 [i_9] [i_8]);
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) (unsigned char)221);
            }
            var_21 = (+(var_12));
            var_22 = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned char)144)))) | ((+(var_12)))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((arr_10 [i_0] [(unsigned char)2] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (5735987694970468203ULL)))));
        }
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_0] [7LL] [7LL] [i_11] [i_11])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_12 [i_0] [i_0] [(unsigned short)5] [i_10] [i_11]) : (((/* implicit */int) arr_34 [i_0])))))));
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    for (int i_13 = 1; i_13 < 6; i_13 += 1) 
                    {
                        {
                            var_25 = ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) arr_26 [i_12] [i_10] [i_0])))) : (((((/* implicit */int) var_1)) * (((/* implicit */int) arr_21 [i_13] [i_12] [i_10] [i_10])))));
                            arr_42 [i_0] [i_0] [i_11] [i_10] [(signed char)3] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-105))))) ? (((/* implicit */int) arr_10 [i_11] [i_10] [i_0])) : (((/* implicit */int) (signed char)-35))));
            }
            for (signed char i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_15 = 4; i_15 < 8; i_15 += 1) 
                {
                    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        {
                            arr_52 [(unsigned char)8] [i_10] [i_14] [(_Bool)1] [i_10] [(_Bool)1] &= ((/* implicit */int) var_10);
                            arr_53 [i_10] [i_10] [i_14] [i_10] [i_0] = ((/* implicit */int) arr_48 [i_0] [i_10] [i_16] [i_10] [i_10] [i_0]);
                        }
                    } 
                } 
                arr_54 [i_10] [i_10] [i_14] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) arr_1 [(signed char)5] [i_10]))))));
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 10; i_17 += 4) 
                {
                    for (unsigned char i_18 = 2; i_18 < 7; i_18 += 2) 
                    {
                        {
                            arr_59 [i_10] [i_10] [i_14] [i_10] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_18 + 2] [i_18 + 2])) : (((/* implicit */int) var_10))));
                            var_27 = ((/* implicit */signed char) arr_12 [i_18] [i_10] [(unsigned char)7] [i_10] [i_0]);
                            var_28 = ((/* implicit */long long int) (signed char)-120);
                        }
                    } 
                } 
            }
            for (signed char i_19 = 0; i_19 < 10; i_19 += 1) /* same iter space */
            {
                arr_62 [i_10] [i_0] [i_10] [i_10] = ((/* implicit */short) (+(((((/* implicit */int) var_2)) + (((/* implicit */int) arr_5 [i_0] [i_10] [i_19]))))));
                var_29 = ((/* implicit */int) (signed char)-96);
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((signed char) arr_29 [i_10] [i_10] [i_19] [i_19] [i_0])))));
                arr_63 [i_10] [i_10] [i_19] = ((/* implicit */int) (_Bool)1);
                var_31 = ((/* implicit */unsigned char) ((arr_60 [i_10] [i_19]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
            }
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_56 [i_10] [i_0] [i_0] [i_10])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_10])) || (((/* implicit */_Bool) arr_11 [(signed char)1] [i_10] [i_0] [i_10] [i_10] [i_10] [i_10])))))));
            arr_64 [i_10] [i_10] = ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_10] [i_10])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_10])) : (((/* implicit */int) (signed char)-95)));
        }
        var_33 *= ((/* implicit */_Bool) ((((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])) + (66))) - (21)))));
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) var_2))));
    }
    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (short)-11783))));
}
