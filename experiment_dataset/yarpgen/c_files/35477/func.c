/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35477
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
    var_15 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)31))))));
    var_16 += ((/* implicit */short) var_4);
    var_17 -= ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_1 + 1]))))), (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_4] [(unsigned char)15] [i_2] [i_4] = ((/* implicit */unsigned int) var_0);
                                var_19 = ((/* implicit */unsigned char) ((_Bool) (short)14136));
                            }
                        } 
                    } 
                    var_20 = var_0;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) arr_14 [i_6] [i_5])) ? ((~(var_10))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12703))) : (75007411U))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    for (unsigned char i_8 = 1; i_8 < 15; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 15; i_9 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (unsigned short)23894)), (75007398U)))))))))));
                                var_23 -= ((/* implicit */signed char) 4219959884U);
                                var_24 += ((/* implicit */unsigned int) (short)8259);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_10 = 2; i_10 < 15; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3913)))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (4219959876U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5] [i_5] [i_5]))))))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)5451)) ? (((/* implicit */int) arr_19 [i_10 + 1] [i_10 - 2])) : (((/* implicit */int) var_1)))))));
                        arr_34 [i_5] [i_6] [i_6] [i_10] [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (15127868634783162507ULL)))) ? (((/* implicit */unsigned long long int) 4219959898U)) : (7672774357118371991ULL)));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned int) var_1);
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [(unsigned char)2] [3U]))) : (var_3)));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
                        {
                            var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) arr_13 [i_10 - 1]))));
                            var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5] [i_14] [i_10] [i_10 - 1] [4LL] [(unsigned char)10])))));
                            arr_44 [i_13] [i_13] = ((/* implicit */unsigned int) var_0);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) arr_16 [i_5] [(_Bool)1]))));
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_8))));
                        }
                    }
                    arr_47 [(unsigned char)3] [i_5] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) -1756441900))) ? (((((/* implicit */_Bool) var_5)) ? (7758890205962487473ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_5] [i_6] [i_6] [i_10]))))) : (((/* implicit */unsigned long long int) var_4))));
                }
            }
        } 
    } 
}
