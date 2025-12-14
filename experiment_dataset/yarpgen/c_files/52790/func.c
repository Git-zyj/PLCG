/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52790
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((int) min((((/* implicit */long long int) (short)-22841)), (-3997503931182803118LL))))) - (((arr_0 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                    arr_8 [(short)4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) 1830853646);
                    var_13 = ((/* implicit */short) ((((/* implicit */int) (short)-32753)) ^ (((/* implicit */int) (signed char)29))));
                }
            } 
        } 
        var_14 = ((/* implicit */_Bool) var_10);
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            var_15 = ((/* implicit */short) (+(var_7)));
            var_16 = ((/* implicit */signed char) -1830853639);
            arr_11 [19LL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32741)) && (((/* implicit */_Bool) -9223372036854775794LL))));
        }
        for (short i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    arr_21 [i_0] [14] [i_5] [i_0] = ((/* implicit */unsigned int) ((int) ((_Bool) arr_3 [i_4])));
                    arr_22 [i_0] [i_4] [i_5] [i_6] |= ((/* implicit */signed char) ((int) ((((/* implicit */int) arr_5 [i_0] [i_0])) - (((/* implicit */int) arr_5 [i_0] [i_4])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */long long int) var_10)) / (var_8)));
                        arr_25 [(unsigned char)0] [(unsigned char)0] [i_4] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */short) max((((((/* implicit */int) (short)32758)) ^ (((/* implicit */int) var_9)))), (min((((/* implicit */int) arr_2 [i_4] [i_7])), (-387977732)))));
                    }
                    var_18 = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0] [i_0]))));
                }
                for (int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) var_11))))))));
                    var_20 += ((/* implicit */long long int) ((((((/* implicit */int) arr_17 [i_0] [i_5] [8ULL])) * (((/* implicit */int) (unsigned char)114)))) & ((((+(((/* implicit */int) arr_24 [(short)4] [i_0] [(short)4] [i_5] [i_8])))) >> (((((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5])) - (6407)))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) -1830853640);
                            var_21 *= ((/* implicit */unsigned char) var_0);
                            var_22 = arr_18 [i_5];
                            var_23 ^= ((/* implicit */signed char) var_3);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        {
                            arr_41 [i_12] [(signed char)7] [i_12] [i_5] [i_5] [12LL] = ((/* implicit */signed char) ((-1830853639) * (min(((+(((/* implicit */int) (short)-1)))), (((/* implicit */int) arr_5 [i_0] [i_0]))))));
                            var_24 += ((/* implicit */signed char) ((int) arr_31 [i_12] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                            arr_42 [i_12] [i_11] [i_12] [i_0] [i_12] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((long long int) var_2))));
                        }
                    } 
                } 
                arr_43 [i_0] [i_4] [i_5] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_9))))), (arr_35 [i_4] [i_5] [i_4] [i_0]))))));
            }
            arr_44 [i_0] = ((/* implicit */short) arr_26 [i_0] [i_0] [i_0] [i_0]);
            arr_45 [i_0] = ((/* implicit */unsigned long long int) ((int) (short)-23105));
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                for (signed char i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    {
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((long long int) (short)-1)))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((var_10) / (((/* implicit */int) ((unsigned short) -1830853625))))))));
                        var_27 = ((/* implicit */unsigned short) ((unsigned char) 536870911));
                    }
                } 
            } 
            var_28 = ((/* implicit */long long int) ((short) arr_37 [i_13] [i_13] [i_13] [(signed char)11] [i_0] [i_0] [i_0]));
        }
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) var_6))));
    }
    for (int i_16 = 0; i_16 < 20; i_16 += 2) /* same iter space */
    {
        var_30 = arr_40 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16];
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (~(((/* implicit */int) var_9)))))));
    }
    var_32 = ((/* implicit */int) var_0);
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_9))) & (((((/* implicit */long long int) ((/* implicit */int) var_1))) & (var_7)))))));
    var_34 -= ((/* implicit */unsigned char) var_1);
}
