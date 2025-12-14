/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19266
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 = ((((/* implicit */_Bool) 3688827184999426660LL)) ? (((/* implicit */long long int) 990476968U)) : (4630115003619868549LL));
        var_17 = ((/* implicit */unsigned short) 433570309);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_18 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned char)4]))));
            var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 7705081094186670155LL)) ? (4630115003619868549LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)114)))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (unsigned char i_3 = 2; i_3 < 13; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) min((var_20), (((arr_12 [i_2] [i_2] [i_3 + 2] [i_5]) ? (((/* implicit */int) var_9)) : (var_6)))));
                                arr_16 [i_0] [i_2] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */short) var_4);
                                arr_17 [i_0] [(signed char)13] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (-4630115003619868540LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184)))));
                            }
                        } 
                    } 
                    var_21 += ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (-4630115003619868549LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [(unsigned short)0] [i_0] [i_2] [i_3] [i_3 - 2]))) : (var_1));
                }
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_22 = var_12;
        /* LoopSeq 3 */
        for (int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
        {
            var_23 = (~((~(((/* implicit */int) arr_5 [i_6] [i_6] [i_7])))));
            arr_23 [i_6] [i_7] = ((/* implicit */unsigned short) var_7);
            var_24 = ((/* implicit */unsigned char) var_8);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                arr_29 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (+(((int) var_6))));
                var_25 = ((/* implicit */long long int) arr_0 [i_6]);
                arr_30 [i_6] [i_8] [i_8] = ((/* implicit */_Bool) ((unsigned short) var_2));
            }
            for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                arr_33 [15LL] [i_6] [13LL] [i_8] = ((/* implicit */unsigned char) (_Bool)1);
                var_26 = ((/* implicit */signed char) ((var_6) | (((/* implicit */int) arr_12 [i_6] [i_6] [i_10] [i_6]))));
            }
            arr_34 [i_6] [i_6] = ((/* implicit */unsigned long long int) -2696148260023532854LL);
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                var_27 = ((/* implicit */int) 3070532946U);
                var_28 &= ((/* implicit */unsigned short) ((arr_8 [i_8]) << (((4024146084U) - (4024146053U)))));
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 16; i_12 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */_Bool) arr_8 [i_6]);
            /* LoopNest 3 */
            for (unsigned int i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                for (int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 16; i_15 += 4) 
                    {
                        {
                            arr_50 [i_6] = ((/* implicit */unsigned long long int) (unsigned short)44636);
                            arr_51 [i_6] = ((/* implicit */long long int) ((unsigned short) -344246677));
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_46 [i_12]) + (4630115003619868548LL)))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)14321))) - (0U)))))))));
                            var_31 = ((/* implicit */int) 3304490327U);
                            var_32 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 630533238)) ? (var_4) : (((/* implicit */unsigned long long int) var_10))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */short) 67108864U);
            var_34 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_6]))));
        }
    }
    var_35 -= ((/* implicit */int) var_15);
    var_36 = ((/* implicit */unsigned int) ((var_10) - (((/* implicit */int) (unsigned short)13426))));
    var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (-883870934)))) ? (min((52358574697158635LL), (((/* implicit */long long int) -630533242)))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) 630533238)) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) * (((((/* implicit */_Bool) 3304490336U)) ? (((/* implicit */long long int) 1976995906)) : (7964931756109125448LL))))));
    var_38 = max((((((/* implicit */_Bool) ((int) 1714686459))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) -630533245)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32749))) : (3304490357U))))), (((/* implicit */unsigned int) var_8)));
}
