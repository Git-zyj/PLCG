/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212917
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [(signed char)2] [i_1] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) (signed char)89)))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 -= ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) arr_2 [i_3])))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) min((2158476566U), (((/* implicit */unsigned int) (signed char)-80))))) : (((((3316065567U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-4621963655236200859LL))) : (((/* implicit */long long int) min((978901743U), (((/* implicit */unsigned int) (_Bool)1))))))))))));
                        arr_13 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_10 [i_3] [i_2] [i_1] [i_1] [i_0]), (((/* implicit */unsigned char) var_12)))))) : (max((((/* implicit */long long int) (_Bool)1)), (2679297991573892420LL)))))) ? (((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (unsigned short)993)))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)1672)))))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3316065567U)) ? (3112052208U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16808))))))));
                        var_21 &= ((/* implicit */signed char) (short)-1662);
                        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */int) min(((!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_2])))), (arr_14 [i_4 + 3])))) % ((~(((/* implicit */int) var_0))))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_1] [i_4]))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4 + 2] [i_4 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4 + 1] [i_4 + 4]))) : (3316065555U)))) ? (((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4])) == (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_0] [i_4]))))) : (((/* implicit */int) var_16))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_25 ^= ((((/* implicit */unsigned int) (-(min((-545973450), (arr_12 [i_0] [i_1] [i_2] [i_5])))))) ^ (min((4294967295U), (3239119331U))));
                        var_26 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))), (3239119331U)))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned int) (unsigned short)14336)), (3461882488U)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((var_5) >= (((/* implicit */unsigned long long int) 833084808U))))))) : ((~(((/* implicit */int) (_Bool)1))))));
                        arr_22 [i_1] [i_2] [i_6] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (var_1)))) ? ((+(((/* implicit */int) var_0)))) : (min((((/* implicit */int) var_12)), (((int) (_Bool)1)))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_7 = 1; i_7 < 13; i_7 += 3) 
    {
        var_28 *= ((/* implicit */signed char) max(((+(((/* implicit */int) min((((/* implicit */short) var_11)), ((short)19323)))))), (((arr_12 [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 - 1]) / (arr_12 [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 2])))));
        var_29 ^= ((/* implicit */unsigned short) (-((-(((((/* implicit */long long int) ((/* implicit */int) (signed char)112))) & (-754414414997825478LL)))))));
        var_30 ^= ((/* implicit */short) min((min((((/* implicit */int) (unsigned char)15)), (arr_8 [i_7] [i_7] [i_7] [i_7 + 2]))), (((/* implicit */int) arr_3 [i_7 - 1]))));
        var_31 = ((((/* implicit */_Bool) 3142313895U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 545973450)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7]))) : (var_15)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (-754414414997825478LL) : (((/* implicit */long long int) var_15))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) -545973450)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)49887), (var_8)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
        var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_3)))) ? ((~(((/* implicit */int) arr_23 [i_7 + 1] [i_7 - 1])))) : (((((/* implicit */int) (signed char)11)) >> (((/* implicit */int) var_10))))));
    }
    var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((unsigned int) (signed char)16)), (((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned short) var_10))))))))));
    var_34 = ((/* implicit */unsigned short) ((short) var_3));
    var_35 = var_7;
}
