/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39359
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
    var_15 = (!(((/* implicit */_Bool) var_3)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    arr_8 [i_2] [i_2] [i_0 + 4] [i_0 + 4] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) ((unsigned short) (unsigned short)63))) % ((~(((/* implicit */int) (unsigned short)63)))))));
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [i_0 - 2] [i_0 + 1] [i_0 + 3] [i_0 + 1]);
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
                {
                    var_16 = (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0] [i_0 - 2])) : (arr_2 [i_0 + 4] [i_3]))));
                    arr_13 [i_3] [i_3] [(unsigned short)13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */long long int) arr_2 [i_0 - 1] [i_0 - 1])) : (4920730729512690556LL)));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_0 - 2] [i_3] [i_3] [i_1] [i_0 - 2] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_11 [i_4] [6U] [(_Bool)1] [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (var_14)))));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((int) arr_5 [i_0 - 2] [i_0 - 1] [i_0 + 3])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((unsigned int) arr_3 [i_0 + 3]));
                            arr_19 [(signed char)8] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_0] [i_1] [i_4] [i_1]))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) arr_12 [i_0]);
                        }
                    }
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(3707321159U)))) ? (((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) var_3))));
                        arr_24 [i_0] [0LL] [i_0] [i_3] [(signed char)5] [i_3] = ((/* implicit */_Bool) (unsigned short)52515);
                        var_20 = ((/* implicit */unsigned char) ((var_13) / (((/* implicit */long long int) ((/* implicit */int) (signed char)31)))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                    {
                        arr_29 [i_0] [i_3] = ((/* implicit */unsigned char) ((long long int) var_10));
                        arr_30 [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (4920730729512690556LL)))));
                        arr_31 [i_7] [i_7] [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0 + 3] [i_0])) ? (((/* implicit */int) arr_27 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_27 [i_0] [(_Bool)1] [i_3] [i_7]))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [i_0])))))));
                    }
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                    {
                        var_22 += ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 587646136U)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(arr_23 [i_0 + 3] [i_0 + 3]))))));
                            var_24 = ((/* implicit */unsigned short) var_3);
                            arr_37 [i_3] [i_3] [i_1] [i_3] = ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_3])) || (((/* implicit */_Bool) arr_35 [19ULL] [19ULL] [(signed char)4] [19ULL] [i_0 - 2] [i_3])));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 + 2] [i_0 - 3] [i_0 - 3])) ? (arr_7 [i_0 - 2] [i_0 + 2] [i_0] [i_0]) : (arr_7 [i_0 - 2] [i_0 + 2] [i_0] [i_0 + 3]))))));
                        }
                        /* LoopSeq 3 */
                        for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            arr_40 [19LL] [i_1] [i_3] [i_3] [i_3] = (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) <= (var_4)))));
                            arr_41 [i_3] [i_3] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (short)4247)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))));
                            arr_42 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 4] [i_3] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_0] [i_3] [i_0])) ? (arr_12 [i_0]) : (((/* implicit */int) arr_15 [i_0] [(unsigned short)0] [i_0 + 2] [i_0]))));
                            var_26 = ((_Bool) arr_27 [i_0 + 4] [i_0 + 1] [i_0] [i_0 - 1]);
                        }
                        for (signed char i_11 = 2; i_11 < 19; i_11 += 4) /* same iter space */
                        {
                            var_27 |= ((/* implicit */long long int) (_Bool)1);
                            arr_45 [i_11 - 2] [i_3] [i_3] [i_1] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_14 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11] [i_11])) : (((/* implicit */int) arr_14 [i_11 - 1] [i_11 - 2] [i_11 + 1] [i_11 - 1] [i_11]))));
                            var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [(unsigned char)19] [i_1] [i_11 + 1] [i_11])) ? (((/* implicit */int) arr_27 [i_0] [i_0] [i_11 - 2] [i_11])) : (((/* implicit */int) arr_32 [i_0] [i_1]))));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_11 - 1] [i_0 + 3] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) var_7)) ? (4920730729512690578LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                        }
                        for (signed char i_12 = 2; i_12 < 19; i_12 += 4) /* same iter space */
                        {
                            var_30 *= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_8] [i_12 + 1])) : ((-(((/* implicit */int) var_0))))));
                            arr_48 [i_3] [i_1] [i_12 + 1] [i_3] [i_12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_25 [i_0 - 2] [i_1] [i_0 - 2] [i_8] [i_12] [i_12 - 1])))));
                        }
                    }
                }
                var_31 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_21 [(signed char)4] [i_1] [(unsigned char)18] [i_0 - 1] [i_0] [i_0 + 3]))) ? ((+(arr_21 [i_0] [i_1] [(unsigned char)10] [i_0 + 1] [i_0] [i_0 + 4]))) : (min((var_10), (arr_21 [i_0] [i_1] [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 3])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 4) 
    {
        for (long long int i_14 = 0; i_14 < 15; i_14 += 1) 
        {
            {
                arr_53 [i_13] [i_13] = ((/* implicit */short) (_Bool)1);
                var_32 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (((_Bool)1) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_13] [i_13] [i_13] [i_14])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) (short)4247)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_13]))) : (var_2)))))));
                arr_54 [i_14] [i_14] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) 2499524178U)))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 15; i_15 += 4) 
                {
                    for (int i_16 = 1; i_16 < 14; i_16 += 1) 
                    {
                        {
                            var_33 ^= ((/* implicit */unsigned short) max((min((arr_22 [i_16 - 1] [i_16] [i_16] [i_16 + 1]), (arr_22 [i_16 + 1] [i_16 + 1] [i_16] [i_16 - 1]))), (arr_22 [i_16 - 1] [i_16] [i_16] [i_16 - 1])));
                            arr_62 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_14] [(signed char)7])) ? (((/* implicit */int) arr_44 [i_13] [i_14] [i_15] [i_14] [i_15] [i_14] [11U])) : (var_8)))) ? (arr_56 [i_13] [i_16 - 1] [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25275))))) : (((((((/* implicit */long long int) ((/* implicit */int) var_12))) - (4920730729512690578LL))) / (((/* implicit */long long int) arr_7 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16]))))));
                            arr_63 [i_13] = ((/* implicit */long long int) ((max(((!(((/* implicit */_Bool) var_14)))), ((!(((/* implicit */_Bool) arr_32 [12] [i_15])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27676))) : (arr_28 [i_16] [i_13] [i_14] [i_14] [i_13])))) ? (arr_28 [i_13] [i_13] [i_14] [i_15] [i_16]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_39 [i_13] [i_15] [i_13])) : (((/* implicit */int) arr_32 [i_13] [i_13]))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_14] [i_13] [i_14])) && (((/* implicit */_Bool) 7830629534056508871ULL))))))))));
                            arr_64 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) 9573268137817864727ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
    var_35 = (!(((/* implicit */_Bool) (+(max((var_13), (((/* implicit */long long int) var_3))))))));
}
