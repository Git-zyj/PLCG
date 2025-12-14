/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223117
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
    var_19 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) var_18)))), ((((!((_Bool)0))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)16)), (var_14))))))));
    var_20 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned char)84))));
        var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))));
    }
    for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)78))));
        var_23 ^= ((/* implicit */unsigned int) max((4582044445346373413ULL), (((/* implicit */unsigned long long int) var_13))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        var_24 ^= ((/* implicit */unsigned char) ((signed char) var_18));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    {
                        arr_19 [i_3] [i_5] = 3932160U;
                        arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] = 3857218181U;
                        arr_21 [i_2] [i_3] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) ((signed char) (~(4294967285U))));
                        arr_22 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((unsigned int) (signed char)-13));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            arr_29 [i_2] [9U] [i_3] [i_8] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 3540719249U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (2U))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16383))) == (2U))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) var_8);
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) 2244303458U))));
                var_28 *= ((/* implicit */unsigned short) var_13);
                /* LoopSeq 4 */
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    arr_32 [i_3] [11U] [i_3] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84))) : (var_7)))));
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53975))) : (3068664875U)))))));
                    var_30 = ((/* implicit */unsigned short) ((((unsigned int) 13U)) & (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25135))) & (1226302421U)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 2; i_10 < 11; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24703))) : (((9223372036854775807LL) >> (((17163421690424839899ULL) - (17163421690424839880ULL)))))));
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))));
                    }
                }
                for (unsigned int i_11 = 1; i_11 < 11; i_11 += 4) /* same iter space */
                {
                    var_33 = ((/* implicit */long long int) 2068763345U);
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 2; i_12 < 12; i_12 += 3) 
                    {
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((unsigned short) (~(var_14)))))));
                        var_35 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_6)))) ? (((unsigned int) 4294967287U)) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
                        var_36 &= (-(var_3));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_42 [i_13] [i_3] [i_6] [8U] [i_3] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) 3940222805U));
                        var_37 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_2)))) ? (8263550847818265799LL) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_2)))));
                        var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967283U))));
                        var_39 = ((/* implicit */unsigned int) (signed char)120);
                    }
                }
                for (unsigned int i_14 = 1; i_14 < 11; i_14 += 4) /* same iter space */
                {
                    var_40 = ((/* implicit */unsigned int) max((var_40), (var_1)));
                    var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (!(((/* implicit */_Bool) 22ULL)))))));
                }
                for (unsigned int i_15 = 1; i_15 < 11; i_15 += 4) /* same iter space */
                {
                    var_42 |= ((/* implicit */long long int) 14784840078742011851ULL);
                    var_43 = ((/* implicit */unsigned int) min((var_43), (((unsigned int) (_Bool)1))));
                    arr_49 [i_2] [i_2] [i_2] [i_3] = (~(var_6));
                }
            }
            var_44 = var_12;
            var_45 = ((/* implicit */unsigned int) (((+(var_17))) >> (((/* implicit */int) (_Bool)1))));
        }
        var_46 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10662)) ^ (((/* implicit */int) (unsigned short)26225))));
    }
    var_47 &= 3084168468U;
    var_48 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((min((17ULL), (((/* implicit */unsigned long long int) var_16)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2603889800U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))))));
}
