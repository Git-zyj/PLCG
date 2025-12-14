/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239163
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
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6919192794572730268LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57492))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)52))) : (9772128445523555720ULL)))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_19 += ((/* implicit */_Bool) (unsigned char)203);
                        var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-12))))));
                        var_21 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)3646)))) % (((/* implicit */int) (unsigned char)192))));
                    }
                } 
            } 
            arr_12 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_17))));
            var_22 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0] [i_0 + 1] [i_0]))));
        }
        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9114164537914438247LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [16LL] [i_0])) : (((/* implicit */int) (unsigned short)4))))));
            var_23 = ((/* implicit */long long int) (short)8577);
            var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
        }
    }
    for (short i_5 = 1; i_5 < 18; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))))), (1325100180904911393LL))))));
        /* LoopNest 2 */
        for (long long int i_6 = 3; i_6 < 18; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */long long int) min((var_25), (min((((((/* implicit */long long int) ((/* implicit */int) (short)32767))) ^ (var_5))), (((/* implicit */long long int) (~(((/* implicit */int) var_13)))))))));
                        arr_28 [i_5] [(short)11] [(unsigned short)7] [i_6] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_16)))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)51)) >> (((3072LL) - (3069LL))))))))))));
                    }
                    for (int i_9 = 3; i_9 < 15; i_9 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_10 = 1; i_10 < 17; i_10 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((!(((/* implicit */_Bool) var_0)))), (((((/* implicit */int) (signed char)-1)) <= (var_17))))))));
                            var_27 |= ((/* implicit */short) ((int) ((((/* implicit */_Bool) max((3322384116741861616ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))) && (((/* implicit */_Bool) (-(-1886582607058236603LL)))))));
                            arr_35 [i_5] [i_6] [i_7] [i_5] [i_10] = (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_5]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9));
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 1; i_11 < 16; i_11 += 1) 
                        {
                            arr_40 [i_5] [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned char) var_1);
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_6 - 3] [i_6 - 3] [i_6] [i_6 + 1])) ? (((/* implicit */int) arr_24 [i_6] [i_6 - 1] [i_11] [i_6])) : ((~(((/* implicit */int) (unsigned char)9))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            var_29 = ((/* implicit */long long int) (+(arr_34 [i_6])));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32754)) ? ((~(((((/* implicit */int) (unsigned char)5)) << (((((/* implicit */int) var_15)) - (34051))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)78)))))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */int) var_16)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - (var_5))))))))))));
                            var_32 = ((/* implicit */long long int) ((unsigned long long int) 7177282590117315807LL));
                            arr_45 [i_5] [i_7] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_5 - 1] [i_5 + 1])))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned short)27359)))), (((arr_44 [(unsigned char)10] [i_9 + 1] [(unsigned char)10] [(unsigned char)10] [i_7]) - (arr_44 [i_9] [i_9 + 1] [i_7] [i_6] [i_6])))));
                            var_34 = ((/* implicit */long long int) max((6982078380959152868ULL), (((/* implicit */unsigned long long int) (unsigned short)17))));
                            var_35 = ((/* implicit */int) max((var_35), (min(((-(((/* implicit */int) var_12)))), (((/* implicit */int) ((unsigned char) min(((signed char)28), (var_8)))))))));
                        }
                    }
                    var_36 = min((((/* implicit */int) max((min((((/* implicit */unsigned short) var_10)), (var_4))), (((/* implicit */unsigned short) (short)-8578))))), (((((/* implicit */_Bool) ((919502804227858495ULL) | (((/* implicit */unsigned long long int) 621276153))))) ? (max((-1), (656334737))) : (((/* implicit */int) var_16)))));
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)125)))))));
    }
    /* vectorizable */
    for (unsigned short i_15 = 2; i_15 < 20; i_15 += 1) 
    {
        var_38 = (~(((unsigned long long int) arr_15 [12LL] [22LL] [22LL])));
        arr_52 [7LL] [(unsigned short)1] = ((/* implicit */_Bool) ((int) (unsigned char)163));
    }
    for (long long int i_16 = 2; i_16 < 10; i_16 += 4) 
    {
        var_39 = min((((/* implicit */long long int) (((!(((/* implicit */_Bool) -621276154)))) ? (((/* implicit */int) (unsigned short)42741)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_26 [(unsigned short)2] [i_16] [(unsigned char)18] [i_16]))))))), (min(((~(9223372036854775807LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))))));
        var_40 -= ((/* implicit */int) (-9223372036854775807LL - 1LL));
    }
    var_41 = ((/* implicit */long long int) min((var_41), (var_1)));
    var_42 ^= (+(((int) ((((/* implicit */int) (unsigned short)36217)) / (((/* implicit */int) (unsigned short)39970))))));
    var_43 = ((/* implicit */unsigned short) ((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
}
