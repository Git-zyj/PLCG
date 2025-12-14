/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244289
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                /* LoopSeq 1 */
                for (long long int i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    arr_10 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))));
                    var_12 = ((/* implicit */_Bool) ((unsigned int) ((unsigned char) var_2)));
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_13 = ((/* implicit */signed char) ((long long int) arr_5 [i_0 + 3] [i_0 + 3] [i_0 + 3]));
                        arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_2] [i_2] [i_2]))));
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0 + 1])))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        arr_21 [i_3] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((short) (+(((/* implicit */int) var_4)))));
                        arr_22 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */signed char) arr_15 [i_3] [i_3]);
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [i_3 - 2])) ? (((((/* implicit */_Bool) var_8)) ? (var_7) : (arr_4 [i_1] [i_1]))) : (((/* implicit */long long int) arr_15 [i_1] [i_1])))))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_7))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_14 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2]))));
                    }
                }
                /* LoopNest 2 */
                for (signed char i_7 = 3; i_7 < 15; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_6 [i_0] [i_0] [i_0] [i_0])))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_7))) ? (((unsigned int) arr_15 [i_1] [i_1])) : (((unsigned int) arr_25 [i_0]))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]);
                /* LoopSeq 1 */
                for (unsigned char i_9 = 3; i_9 < 15; i_9 += 1) 
                {
                    var_19 = ((/* implicit */long long int) (+(arr_34 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3])));
                    arr_35 [i_0] [i_9] [i_0] = ((/* implicit */unsigned short) (+(arr_2 [i_1])));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_9] [i_9]))))) ? (((/* implicit */int) var_6)) : ((-(var_3)))));
                    arr_36 [i_0] [i_0] [i_9] [i_0] = (-(((/* implicit */int) var_8)));
                }
            }
            /* LoopSeq 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
                arr_40 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */_Bool) arr_25 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_1 [i_0])))))));
                arr_41 [i_0] = ((/* implicit */long long int) (-(arr_37 [i_0] [i_0] [i_0] [i_0])));
                arr_42 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_1] [i_0] [i_1] [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 + 3] [i_1] [i_1] [i_1] [i_0])))));
            }
            for (int i_11 = 1; i_11 < 15; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        {
                            arr_51 [i_1] [i_11] [i_1] = ((/* implicit */unsigned short) (+(var_2)));
                            arr_52 [i_0] [i_0] [i_0] [i_0] [i_11] = ((/* implicit */long long int) (+(arr_11 [i_0 + 2] [i_0 + 2] [i_11] [i_0 + 2] [i_11])));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_1 [i_11]))));
            }
            for (long long int i_14 = 3; i_14 < 16; i_14 += 1) 
            {
                arr_56 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) arr_3 [i_14] [i_14] [i_14]);
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (-(arr_14 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_14 + 1]))))));
                arr_57 [i_14] [i_14] = ((/* implicit */short) var_9);
            }
        }
        for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 1) 
        {
            arr_60 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((long long int) arr_31 [i_15])));
            var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_48 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0 - 1] [0LL]))));
            arr_61 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((unsigned long long int) arr_46 [i_0]))));
            var_26 = ((/* implicit */unsigned long long int) var_2);
        }
        var_27 &= ((/* implicit */unsigned int) (+(((long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (short i_16 = 3; i_16 < 16; i_16 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned long long int) var_6);
            /* LoopSeq 1 */
            for (unsigned int i_17 = 0; i_17 < 17; i_17 += 1) 
            {
                var_29 -= ((_Bool) ((unsigned int) arr_11 [i_0] [i_0] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0]));
                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_6)))))))));
                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_33 [12U])) ? (var_7) : (var_7))))))));
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_43 [i_0 + 4] [i_0 + 4] [i_16 + 1] [i_16 - 1])))))));
            }
            /* LoopNest 3 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (long long int i_19 = 0; i_19 < 17; i_19 += 1) 
                {
                    for (int i_20 = 0; i_20 < 17; i_20 += 2) 
                    {
                        {
                            arr_77 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_16] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_3)))));
                            arr_78 [i_0] [i_0] [i_0] [i_0] [i_16] = ((/* implicit */unsigned short) ((_Bool) (~(11768803134729534068ULL))));
                        }
                    } 
                } 
            } 
        }
        for (short i_21 = 3; i_21 < 16; i_21 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_4 [i_21] [i_21 - 3]) : (((/* implicit */long long int) var_3)))))));
            arr_81 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) arr_62 [i_21])))));
        }
        for (short i_22 = 3; i_22 < 16; i_22 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */int) ((unsigned int) ((long long int) 5U)));
            /* LoopSeq 1 */
            for (long long int i_23 = 4; i_23 < 16; i_23 += 2) 
            {
                arr_88 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((long long int) var_1))));
                arr_89 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) (~(var_9))));
                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((~(6677940938980017547ULL)))))));
                arr_90 [i_0] [i_0] [i_0] = ((/* implicit */short) var_6);
            }
        }
        var_36 *= ((/* implicit */unsigned long long int) (!(var_6)));
    }
    var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
    var_38 = ((/* implicit */unsigned char) ((short) ((unsigned int) (-(var_2)))));
}
