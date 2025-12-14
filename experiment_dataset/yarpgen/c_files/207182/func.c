/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207182
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
    var_19 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_12))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2650646532892325286LL))))));
                    arr_8 [i_0] [i_2] [i_2] [2ULL] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | ((-(var_8)))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) ((var_8) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_17)) : (var_0))) - (1422306952U)))));
        arr_9 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 4) 
            {
                for (unsigned char i_6 = 3; i_6 < 22; i_6 += 2) 
                {
                    {
                        arr_24 [i_6] [i_4] [i_4] [i_6] [i_4] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4)));
                        var_23 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? ((-(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_15) > (((/* implicit */unsigned long long int) var_1))))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_14)))))));
        arr_25 [11U] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_5)));
    }
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_8 = 1; i_8 < 11; i_8 += 1) 
        {
            var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_18) : (((/* implicit */unsigned long long int) var_8))))) ? (var_17) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))))) ? ((((!(((/* implicit */_Bool) var_11)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))) : (((/* implicit */long long int) (+((-(var_10))))))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 1; i_9 < 13; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) | (((unsigned int) ((var_17) > (((/* implicit */int) var_2)))))));
                        var_28 -= ((/* implicit */unsigned long long int) var_14);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_11 = 4; i_11 < 12; i_11 += 3) 
        {
            var_29 = ((/* implicit */signed char) (+((~(var_10)))));
            /* LoopSeq 2 */
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_43 [i_11] = ((/* implicit */short) (+(((long long int) var_11))));
                    var_30 -= ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_5));
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_2))))))));
                    var_32 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 2195991407U)))))));
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (-2147483631))))));
                }
                for (unsigned char i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        var_34 = ((/* implicit */int) min((var_34), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((+(var_17)))))));
                        arr_50 [i_11] [i_15] = ((/* implicit */long long int) (~(((((/* implicit */int) var_2)) % (((/* implicit */int) var_14))))));
                        var_35 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (var_16) : (var_0)));
                        arr_51 [i_7] [i_7] [i_11] [i_7] [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */unsigned int) var_1)));
                        var_36 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
                    }
                    for (long long int i_16 = 1; i_16 < 13; i_16 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (var_8)))));
                    }
                    for (unsigned int i_17 = 1; i_17 < 12; i_17 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_16)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : ((-(((/* implicit */int) var_11))))));
                        arr_57 [i_7] [i_11] [i_12] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (var_0)));
                        arr_58 [i_7] [i_11 - 1] [i_12] [i_17] [i_17] [i_11] [i_11 - 2] = ((/* implicit */long long int) (!(((((/* implicit */unsigned int) var_1)) != (var_16)))));
                    }
                    for (short i_18 = 1; i_18 < 10; i_18 += 3) 
                    {
                        var_40 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_4))))));
                        var_41 = ((/* implicit */long long int) var_15);
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_19 = 3; i_19 < 12; i_19 += 2) 
                    {
                        arr_66 [i_7] [i_11 + 2] [i_12] [i_11 + 2] [i_11 + 2] [i_11] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
                        var_42 = ((/* implicit */unsigned short) ((var_8) << (((var_1) + (65879579)))));
                        var_43 = (!(((/* implicit */_Bool) (+(var_0)))));
                    }
                    for (unsigned int i_20 = 1; i_20 < 11; i_20 += 3) 
                    {
                        var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
                        var_45 -= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_10))))));
                        var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                        var_47 = ((/* implicit */int) (((-(var_13))) + (((/* implicit */unsigned long long int) var_17))));
                        var_48 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (var_5))))));
                    }
                }
                arr_69 [i_7] [i_7] [i_7] [i_11] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_6))))));
                /* LoopSeq 1 */
                for (unsigned int i_21 = 1; i_21 < 13; i_21 += 2) 
                {
                    var_49 ^= (-(var_13));
                    /* LoopSeq 2 */
                    for (long long int i_22 = 0; i_22 < 14; i_22 += 4) 
                    {
                        var_50 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && ((!(((/* implicit */_Bool) var_17))))));
                        var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
                    }
                    for (short i_23 = 0; i_23 < 14; i_23 += 4) 
                    {
                        var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_4))) : (((/* implicit */long long int) var_1))));
                        var_53 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        var_54 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (var_18) : (((/* implicit */unsigned long long int) var_0)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    }
                }
            }
            for (signed char i_24 = 0; i_24 < 14; i_24 += 2) 
            {
                var_55 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-17))));
                var_56 = ((/* implicit */unsigned short) ((var_8) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))));
                var_57 ^= ((/* implicit */int) ((var_8) > (var_8)));
                var_58 = (-(var_0));
            }
            var_59 = ((/* implicit */unsigned int) min((var_59), (((/* implicit */unsigned int) (+(((/* implicit */int) ((var_5) > (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))));
            /* LoopSeq 1 */
            for (long long int i_25 = 0; i_25 < 14; i_25 += 4) 
            {
                var_60 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_7)))))));
                var_61 = ((/* implicit */unsigned int) (+(((unsigned long long int) var_18))));
            }
        }
        var_62 = ((/* implicit */unsigned long long int) max((var_62), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_18)))) ? (((var_10) | (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_11))))))))));
        arr_84 [i_7] = ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) : (((/* implicit */int) min(((unsigned char)255), ((unsigned char)49)))));
        var_63 = ((/* implicit */short) ((((min((((/* implicit */unsigned long long int) var_8)), (var_15))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) % (var_12)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)6))))))));
    }
    var_64 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_8)), ((+(max((((/* implicit */unsigned long long int) var_1)), (var_13)))))));
}
