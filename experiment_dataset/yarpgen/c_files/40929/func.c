/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40929
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
    var_19 -= ((/* implicit */_Bool) ((((/* implicit */int) var_15)) >> (((12802014294561917839ULL) - (12802014294561917824ULL)))));
    var_20 = ((/* implicit */unsigned short) var_3);
    var_21 = (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) ((unsigned char) (short)23266))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (signed char)15))))) : ((~(18446744073709551609ULL))))) : (min((((var_7) + (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) & (((unsigned int) (short)-25975))));
        var_23 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) >> (((/* implicit */int) (unsigned short)4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (1152921504606846975ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_24 -= ((/* implicit */signed char) 3487494789U);
                            arr_17 [i_1] [i_4] [i_3] [i_4] [20U] = ((/* implicit */int) (~(895314706U)));
                        }
                        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) max((var_25), (var_12)));
                            arr_20 [i_2] [i_4] [i_6] = ((/* implicit */unsigned short) var_6);
                            var_26 *= ((/* implicit */unsigned short) (+((-((-(((/* implicit */int) (unsigned short)4))))))));
                        }
                        var_27 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_16 [i_4] [i_2 + 2] [i_3] [i_4] [i_2])) ? (arr_16 [i_4] [i_2 + 3] [i_3] [i_4] [(unsigned char)4]) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((signed char) ((unsigned short) (signed char)-119))))));
                        var_28 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23294))) & (min((arr_13 [(signed char)21] [i_4]), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) var_3))));
                        arr_21 [i_4] [i_2] [(short)19] [i_4] = ((/* implicit */short) 5644729779147633776ULL);
                    }
                } 
            } 
        } 
        arr_22 [i_1] = ((/* implicit */signed char) arr_4 [i_1]);
        arr_23 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((33554431U) >> (((((/* implicit */int) (short)-23353)) + (23367)))))) ? (var_18) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)25974)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_17))))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((5644729779147633777ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (arr_15 [i_1] [i_1] [i_1] [(_Bool)1]))))));
    }
    for (short i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned short) max((min((min((17814097815361089385ULL), (((/* implicit */unsigned long long int) (unsigned short)53099)))), (((/* implicit */unsigned long long int) ((short) 14415860929497868758ULL))))), (arr_25 [i_7] [i_7])));
        arr_27 [i_7] [i_7] = ((/* implicit */unsigned short) (~((~(var_11)))));
        var_30 = (i_7 % 2 == zero) ? (((/* implicit */unsigned short) ((unsigned char) ((max((var_14), (((/* implicit */unsigned int) (short)23307)))) << (((arr_13 [i_7] [i_7]) - (13485069191023463126ULL))))))) : (((/* implicit */unsigned short) ((unsigned char) ((max((var_14), (((/* implicit */unsigned int) (short)23307)))) << (((((arr_13 [i_7] [i_7]) - (13485069191023463126ULL))) - (11744390516707843579ULL)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_8 = 3; i_8 < 19; i_8 += 4) /* same iter space */
        {
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */int) (short)-10093)) - (((/* implicit */int) arr_28 [i_8 + 1] [i_8] [i_7])))))));
            arr_30 [i_7] [i_7] = ((/* implicit */signed char) var_18);
        }
        for (unsigned int i_9 = 3; i_9 < 19; i_9 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned short) max((max((arr_13 [i_7] [i_7]), (20ULL))), (((/* implicit */unsigned long long int) arr_14 [i_9] [i_9 - 3] [i_7] [i_9 - 3] [i_9]))));
            arr_34 [i_7] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 8205178405059033206ULL)) ? (((/* implicit */int) ((short) 1434011680U))) : (((/* implicit */int) (short)3008))));
            arr_35 [i_7] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((short) arr_15 [i_7] [i_7] [i_7] [i_7]))))) < (min((3399652599U), (((/* implicit */unsigned int) arr_8 [i_9] [i_9 - 2] [i_9 - 2]))))));
        }
        var_33 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) arr_26 [i_7])))));
    }
    for (short i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
    {
        var_34 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)65534))));
        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_37 [i_10] [i_10]))))) : (2860955604U))))));
    }
}
