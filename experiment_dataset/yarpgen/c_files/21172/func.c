/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21172
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
    var_19 = ((unsigned char) var_18);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) var_10)), (524287)))) - (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)1023))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned short) -1005805764);
            arr_7 [i_1] = ((/* implicit */unsigned long long int) var_5);
            var_21 = ((/* implicit */signed char) ((unsigned short) (_Bool)1));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((short) 2719456552778736252LL));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 4294967273U)) < (2719456552778736227LL)));
                    }
                } 
            } 
        }
        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 2) 
        {
            arr_19 [i_0] [i_0] = ((/* implicit */long long int) (-(var_15)));
            var_24 = ((/* implicit */unsigned short) ((unsigned int) 2719456552778736255LL));
        }
        var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                {
                    arr_25 [15] [(short)7] [i_5] [15] = ((/* implicit */unsigned int) (~(var_4)));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2719456552778736252LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [3] [i_5] [i_0]))) : (-2719456552778736252LL)));
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 20; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 20; i_8 += 1) 
                        {
                            {
                                var_27 = (-(((/* implicit */int) (_Bool)1)));
                                var_28 = ((/* implicit */short) (((((~(((/* implicit */int) (unsigned short)35339)))) + (2147483647))) >> (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_17))))));
                                arr_31 [i_0] [i_5] [i_6] [i_7] [i_8] [i_6] [7LL] = ((/* implicit */short) (+(arr_22 [i_0] [i_5] [i_5])));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned short)30197))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_9 = 1; i_9 < 12; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (short i_10 = 1; i_10 < 13; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                for (short i_12 = 1; i_12 < 13; i_12 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_13 = 0; i_13 < 14; i_13 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned int) min((var_8), (((/* implicit */long long int) (((~(((/* implicit */int) arr_41 [i_9] [i_9] [i_9] [i_9])))) >= (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (short)0)))))))));
                            arr_47 [i_10] [i_10] [i_11] [i_12] [i_12] [i_11] = ((/* implicit */unsigned int) var_4);
                        }
                        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 1) 
                        {
                            arr_50 [10U] [i_10] [i_10] [i_12] [i_11] = ((/* implicit */unsigned short) ((long long int) max((min((-7944601345727300415LL), (((/* implicit */long long int) 8384512)))), (-2719456552778736252LL))));
                            var_31 = ((/* implicit */int) ((unsigned int) 18446744073709551615ULL));
                        }
                        for (short i_15 = 2; i_15 < 12; i_15 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_34 [i_11])))) ? (((var_17) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) arr_33 [i_12 + 1] [i_12 + 1])))))));
                            var_33 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)30173)) > (((/* implicit */int) (_Bool)1))))), ((unsigned short)3371))), (((/* implicit */unsigned short) (short)9714))));
                        }
                        var_34 = ((/* implicit */unsigned int) 11755118638079478693ULL);
                        arr_53 [i_9] [i_9] [i_10] [i_10] = ((/* implicit */unsigned int) var_18);
                        var_35 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) < (var_13)));
                        arr_54 [i_10] [i_10] [i_11] = ((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) arr_13 [(unsigned char)17] [i_10] [i_11] [i_10])), (var_4))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_57 [i_16] [i_16] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)32767)), (2719456552778736276LL)))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_16] [i_9 + 1] [i_16] [i_9 + 1] [i_16] [(signed char)21] [i_9 + 1])))))));
            arr_58 [i_16] [i_16] = ((/* implicit */long long int) ((((((/* implicit */int) var_1)) + (((((/* implicit */int) (short)(-32767 - 1))) + (-8384512))))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (-5) : (((/* implicit */int) (unsigned short)35321))))) == (4294967285U))))));
            arr_59 [i_9] [(unsigned char)12] [i_16] = ((/* implicit */unsigned short) (+(max((((((/* implicit */int) (short)32763)) << (((((/* implicit */int) (short)(-32767 - 1))) + (32780))))), (max((((/* implicit */int) var_1)), (var_5)))))));
        }
        var_36 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) -1794052906))))), (((((/* implicit */_Bool) ((unsigned short) (unsigned short)0))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_0 [i_9])) : (-2719456552778736252LL))) : (-2719456552778736252LL)))));
    }
    var_37 = ((/* implicit */unsigned short) var_16);
    var_38 = ((/* implicit */unsigned int) var_1);
}
