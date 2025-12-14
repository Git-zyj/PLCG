/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229618
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
    var_10 ^= ((/* implicit */int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_4)) ? (878474690819309486LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)122))))) : (((long long int) var_5))))));
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) (short)0)) - (-1242609426))) : (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_2)))))))) ? (((((/* implicit */int) var_2)) - (0))) : (((/* implicit */int) var_7)));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)-2642)))) : (((long long int) arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)46617)) == (((/* implicit */int) (short)2663)))))))) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_4)))), (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) min((arr_0 [i_0]), (var_5))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (int i_3 = 4; i_3 < 9; i_3 += 3) 
            {
                {
                    var_13 *= ((/* implicit */short) min((var_3), (max((var_3), (((/* implicit */unsigned short) var_7))))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((0), (var_0)))) ? (2147483647) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)116)))))))));
                    arr_11 [i_1] [(signed char)3] [i_1] = ((/* implicit */unsigned char) (~((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_1] [i_2]))))))));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)5))))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)(-32767 - 1))))))) >= ((-(((/* implicit */int) var_5))))));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) 1073610752))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_16 -= ((short) var_3);
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            arr_19 [i_4] = ((/* implicit */short) ((unsigned char) arr_18 [i_4] [i_4] [i_4]));
            arr_20 [i_4] [i_4] [(short)4] &= ((/* implicit */int) ((((/* implicit */int) (unsigned char)4)) != (8128)));
            /* LoopSeq 2 */
            for (unsigned char i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
            {
                var_17 = (-(((/* implicit */int) arr_15 [i_6 + 2] [i_5] [i_6])));
                var_18 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)0))));
                arr_23 [i_4] [i_5] [(unsigned short)12] = ((/* implicit */short) ((long long int) arr_21 [i_4] [i_4]));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((-1LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)32766)) - (32713)))))) ? (arr_21 [i_4] [i_6 + 2]) : (((/* implicit */unsigned long long int) ((0) / (1032192))))));
            }
            for (unsigned char i_7 = 1; i_7 < 22; i_7 += 3) /* same iter space */
            {
                var_20 = var_0;
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-28018)))) : (((/* implicit */int) var_2))));
                arr_26 [i_5] [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((int) arr_16 [i_4] [i_4] [i_7]));
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    arr_29 [i_4] = ((/* implicit */int) ((unsigned char) -1073610748));
                    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)59567)) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)28018)) << (((-1LL) + (12LL)))))) : (((((/* implicit */_Bool) arr_22 [i_4] [i_5])) ? (127LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_22 [i_4] [i_4]))))) && (((/* implicit */_Bool) ((short) -1073610766)))));
                }
                /* LoopSeq 2 */
                for (short i_9 = 4; i_9 < 22; i_9 += 2) 
                {
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_9 - 3] [i_9 - 3] [i_9] [i_9 - 2])) ? (((/* implicit */int) (short)-28018)) : (((/* implicit */int) (unsigned short)5972))));
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_2))));
                }
                for (int i_10 = 1; i_10 < 23; i_10 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */long long int) -2147483639)) < (arr_27 [i_4] [i_4]))))));
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_3)))))));
                        arr_36 [i_4] [i_4] [i_4] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) ((short) arr_16 [i_4] [i_4] [i_4]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1048574)))))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-1073610767)))) || (((/* implicit */_Bool) arr_17 [i_4]))));
                    }
                    for (int i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                    {
                        var_29 -= ((/* implicit */int) ((unsigned short) var_8));
                        var_30 = ((((/* implicit */int) (unsigned short)32788)) | (2097152));
                        arr_41 [i_4] [i_4] = ((/* implicit */unsigned short) (!(((arr_34 [i_4] [i_5] [i_5] [i_7 + 1] [i_7 + 1] [i_12]) == (2147483639)))));
                    }
                    arr_42 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)124)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_28 [i_4] [i_5] [i_7 + 1] [i_10 + 1]))));
                    arr_43 [i_4] [i_7] [i_5] [i_4] = ((/* implicit */unsigned short) arr_30 [3ULL] [i_10 - 1] [i_10 + 1] [i_10 + 1]);
                }
            }
        }
        for (signed char i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            var_31 -= ((signed char) arr_44 [4]);
            arr_46 [i_4] [i_4] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (2147483638) : (((/* implicit */int) var_1))));
            arr_47 [i_4] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)235))));
        }
    }
    for (int i_14 = 0; i_14 < 23; i_14 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            for (int i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                {
                    arr_56 [i_14] [i_16] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_37 [i_15] [i_16])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -418702214)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)21497))))))) ? (min((((/* implicit */int) ((unsigned short) (unsigned short)42554))), (2147483647))) : ((-2147483647 - 1))));
                    var_32 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)6)))))));
                }
            } 
        } 
        arr_57 [i_14] = ((/* implicit */int) (unsigned short)59567);
        arr_58 [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) - (((/* implicit */int) var_9))));
    }
    var_33 *= ((/* implicit */unsigned short) ((long long int) var_2));
}
