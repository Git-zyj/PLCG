/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238166
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
    var_13 = ((/* implicit */_Bool) (-(max((max((var_9), (((/* implicit */int) (signed char)(-127 - 1))))), ((+(((/* implicit */int) (signed char)(-127 - 1)))))))));
    var_14 = ((/* implicit */long long int) ((unsigned short) max((var_4), (((/* implicit */long long int) max((var_12), (((/* implicit */short) (signed char)-105))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) min(((unsigned char)244), (((/* implicit */unsigned char) arr_5 [i_0] [i_0])))))))) ? (min((((arr_1 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (short)-2132))))), (((/* implicit */long long int) arr_0 [i_0 - 1] [i_0])))) : (min((max((-2922623217086138752LL), (((/* implicit */long long int) arr_0 [i_1] [i_0])))), (((/* implicit */long long int) (~(var_3))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0 - 1] [(unsigned char)13] [i_0] [i_3] = (-(min((((/* implicit */unsigned long long int) max((arr_5 [i_0] [i_0]), ((signed char)-105)))), (max((((/* implicit */unsigned long long int) arr_0 [i_2] [i_0])), (0ULL))))));
                            var_15 = ((/* implicit */short) var_9);
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-93)))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (11169608615475377317ULL)));
                                var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (7277135458234174297ULL)));
                                arr_17 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 14091644896391206405ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0]))) : (2040550862487063803LL)))))))) >= (((((/* implicit */_Bool) ((unsigned long long int) (signed char)110))) ? (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (3877924585923960430ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */short) (((!(((/* implicit */_Bool) 905353714217625802ULL)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (3978746239U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44315)))));
                                var_19 = ((/* implicit */short) arr_20 [9ULL] [i_3] [9ULL]);
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                var_20 = ((/* implicit */unsigned char) arr_7 [i_1]);
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1]))) : (7ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1900814937U)))))) : (max((11169608615475377319ULL), (((/* implicit */unsigned long long int) -1LL))))))) ? (max((((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_1] [i_0])), (arr_20 [i_2] [i_3] [i_6])))), ((~(((/* implicit */int) (short)-29487)))))) : (((/* implicit */int) arr_20 [(unsigned short)11] [2LL] [i_6]))));
                                var_22 &= ((/* implicit */long long int) ((unsigned long long int) ((max((2040550862487063803LL), (((/* implicit */long long int) (short)3584)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) var_8))))))));
                                var_23 = ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_0 [i_1] [i_0])));
                                var_24 = ((/* implicit */long long int) arr_3 [i_1]);
                            }
                            /* LoopSeq 2 */
                            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                            {
                                var_25 = ((/* implicit */short) arr_24 [i_0] [i_0] [i_7 - 1] [i_3] [i_0]);
                                arr_28 [i_0] [i_0] [i_7 - 1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((17541390359491925813ULL), (((/* implicit */unsigned long long int) (short)13660))))) ? (((var_0) ? (((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_5 [i_0] [i_1])))) : (((/* implicit */int) arr_8 [i_0] [i_0]))))));
                                arr_29 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = (_Bool)0;
                            }
                            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                            {
                                var_26 = ((/* implicit */short) var_3);
                                var_27 *= ((/* implicit */unsigned long long int) var_7);
                                var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((-782292821691371858LL), (((/* implicit */long long int) max((var_9), (((/* implicit */int) var_11)))))))), (max((((/* implicit */unsigned long long int) (!((_Bool)0)))), (((((/* implicit */_Bool) 7885153109069212984LL)) ? (((/* implicit */unsigned long long int) arr_7 [i_0])) : (905353714217625802ULL)))))));
                            }
                            arr_32 [i_0 + 1] [i_0] [i_2] [(short)3] = max((min((((((/* implicit */_Bool) var_8)) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))))), (((/* implicit */long long int) (unsigned short)56351)))), (((long long int) (signed char)-93)));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned long long int) (+((-(((((/* implicit */_Bool) (short)17499)) ? (((/* implicit */long long int) 178202391U)) : (arr_23 [i_9])))))));
                    arr_36 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~((+(var_9)))));
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */signed char) 11742291448634153221ULL);
                    arr_40 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) 5724653407876099603LL));
                    arr_41 [i_0] [i_10] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) >= (((((/* implicit */_Bool) 3029555992U)) ? (17541390359491925814ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                }
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_46 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                        arr_47 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_11);
                    }
                    arr_48 [i_0] [i_0] [i_11] = (~(arr_45 [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_0 - 4] [i_0 - 3] [i_0]));
                }
            }
        } 
    } 
}
