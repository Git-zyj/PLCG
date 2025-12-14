/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211371
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
    var_14 *= ((/* implicit */_Bool) (unsigned char)0);
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (13283300191188420145ULL))) >> (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (var_9)))));
    var_16 = ((/* implicit */unsigned char) min((-5844882076390323411LL), (5844882076390323411LL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_13)))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16109817772490731591ULL)))))) + (var_10))))))));
                    var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (short)-2160))));
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))));
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [(_Bool)1] [i_1] [i_0])), (max((((/* implicit */unsigned long long int) 5844882076390323427LL)), (var_9))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 4164197726320843997ULL);
                        var_20 = ((/* implicit */unsigned long long int) ((4164197726320843997ULL) < (((/* implicit */unsigned long long int) 3793848939U))));
                    }
                    for (unsigned short i_4 = 4; i_4 < 23; i_4 += 4) 
                    {
                        var_21 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)68)) / (((/* implicit */int) arr_6 [i_4])))) << (((/* implicit */int) ((_Bool) arr_6 [i_2])))));
                        var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_11)), (700942946056173449ULL)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_1 - 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32963))) / (4026531840U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 2])))));
                            arr_19 [i_4] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 5844882076390323405LL))) << (((var_7) - (6630934293541705339LL)))));
                        }
                        arr_20 [i_0] [i_1 + 2] [i_2] [i_4] = ((/* implicit */long long int) ((((arr_0 [i_0 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2]))))) >> (((((/* implicit */int) ((short) arr_0 [i_0 - 1]))) + (15899)))));
                    }
                    for (unsigned int i_6 = 2; i_6 < 22; i_6 += 4) 
                    {
                        var_24 ^= ((/* implicit */long long int) arr_23 [i_6] [i_1] [i_2]);
                        var_25 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((549755813887LL), (((/* implicit */long long int) arr_11 [i_0 - 1] [i_1 + 1] [i_6] [i_6 - 1]))))), (4164197726320843997ULL)));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */short) var_3);
                        var_27 *= ((/* implicit */unsigned short) ((short) (signed char)0));
                        arr_27 [4LL] [i_1] [i_7] [i_7] [i_7] &= ((/* implicit */signed char) ((unsigned char) var_4));
                        var_28 = ((/* implicit */_Bool) (short)(-32767 - 1));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 - 1])) <= (var_10)));
                    }
                }
                for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) 3793848959U);
                        arr_32 [i_0] [i_8 + 2] [(unsigned short)17] [i_0] = ((/* implicit */short) ((((/* implicit */int) min(((unsigned short)4118), ((unsigned short)27424)))) | (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (arr_14 [i_0 - 1]))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        arr_35 [i_0] = max(((unsigned char)251), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_0 [i_8 + 1])) >= (arr_3 [i_0] [i_0])))));
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (_Bool)0))));
                    }
                    arr_36 [i_1] [i_0] [i_0] [(short)5] = ((/* implicit */short) arr_33 [i_0] [i_0] [i_0] [i_1] [i_8]);
                    var_32 = ((/* implicit */long long int) arr_21 [i_0 + 1] [i_1] [i_1] [i_8 - 2]);
                }
                arr_37 [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) (unsigned short)12288)) << (((14580828838800446623ULL) - (14580828838800446614ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) 501118356U)))))))));
                var_33 = ((/* implicit */long long int) max((6905920793688406825ULL), (((/* implicit */unsigned long long int) -5844882076390323411LL))));
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    arr_41 [(unsigned short)7] [(unsigned short)7] [6LL] [i_0] = ((/* implicit */unsigned short) arr_10 [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        arr_44 [i_0] [i_0 - 1] [21LL] [i_0] [i_0] [(unsigned short)22] = ((/* implicit */unsigned short) 501118364U);
                        arr_45 [i_0] [i_1 + 2] [(unsigned short)21] [i_0] [i_1 + 2] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (short)-10384)), (5844882076390323393LL))), (((/* implicit */long long int) arr_34 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 1]))));
                    }
                    var_34 = ((/* implicit */unsigned short) arr_0 [i_0]);
                }
            }
        } 
    } 
}
