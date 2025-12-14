/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5424
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_0 [i_0]))));
            arr_4 [i_0] [i_0] = ((/* implicit */long long int) 18446744073709551611ULL);
            /* LoopSeq 3 */
            for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((short) var_9));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))) > (18446744073709551615ULL)))))));
                /* LoopNest 2 */
                for (long long int i_3 = 3; i_3 < 14; i_3 += 2) 
                {
                    for (long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_22 -= ((/* implicit */signed char) ((unsigned int) -389788862));
                            var_23 = ((/* implicit */unsigned short) var_17);
                            arr_12 [i_4] [i_3] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) (((((~(389788844))) + (2147483647))) >> (((((/* implicit */int) var_2)) - (37)))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) -389788875)) ? (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_9)) ? (arr_6 [i_0] [i_0]) : (((/* implicit */long long int) var_17))))));
            }
            for (short i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_7))));
                /* LoopSeq 2 */
                for (unsigned int i_6 = 2; i_6 < 14; i_6 += 3) 
                {
                    var_26 = ((/* implicit */signed char) var_6);
                    var_27 = ((/* implicit */signed char) (-(var_12)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_0] [i_6] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_5 - 1] [i_6 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned short) var_11)))));
                        var_28 = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_5 + 1] [i_1 - 2] [i_6 + 1] [i_5 + 1] [i_6 + 1] [i_5 + 1] [i_6 + 1]))));
                        var_29 = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_7] [i_1]))));
                    }
                }
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    var_30 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (((((/* implicit */_Bool) var_17)) ? (538983050U) : (((/* implicit */unsigned int) var_10))))));
                    arr_25 [i_5] [i_5] = ((/* implicit */unsigned short) -389788845);
                }
                arr_26 [i_5] [i_0] [i_5] = ((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)10))))));
            }
            for (short i_9 = 1; i_9 < 15; i_9 += 2) 
            {
                var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 538983050U))));
                /* LoopSeq 1 */
                for (int i_10 = 2; i_10 < 13; i_10 += 2) 
                {
                    arr_32 [i_1] [i_1] [i_9] [i_10] [i_9] |= ((/* implicit */signed char) ((((/* implicit */long long int) 538983063U)) < (((-5024691533877853618LL) % (((/* implicit */long long int) 317840669))))));
                    var_32 ^= var_16;
                }
            }
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                for (long long int i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    {
                        var_33 = ((/* implicit */long long int) (signed char)4);
                        /* LoopSeq 3 */
                        for (unsigned short i_13 = 3; i_13 < 13; i_13 += 2) /* same iter space */
                        {
                            arr_41 [i_0] [i_0] [i_11] [i_13] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) 1265165662))));
                            var_34 = ((/* implicit */long long int) ((signed char) ((long long int) (-9223372036854775807LL - 1LL))));
                        }
                        for (unsigned short i_14 = 3; i_14 < 13; i_14 += 2) /* same iter space */
                        {
                            var_35 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_23 [i_1] [i_1 - 2] [i_1] [i_1 - 1]))));
                            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51))) <= (538983050U))))));
                            var_37 = ((/* implicit */unsigned short) var_16);
                        }
                        for (signed char i_15 = 0; i_15 < 16; i_15 += 2) 
                        {
                            var_38 = ((/* implicit */int) (signed char)-118);
                            var_39 = ((/* implicit */signed char) var_15);
                        }
                    }
                } 
            } 
            var_40 = ((/* implicit */int) min((var_40), ((-(((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1]))))));
        }
        arr_47 [i_0] = (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37461))) + (-7957231204338741344LL))));
        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (~(((/* implicit */int) var_7)))))));
    }
    for (short i_16 = 4; i_16 < 10; i_16 += 4) 
    {
        var_42 = ((/* implicit */short) 2143296155965006343LL);
        var_43 = arr_39 [i_16] [i_16];
        /* LoopSeq 2 */
        for (signed char i_17 = 0; i_17 < 12; i_17 += 1) 
        {
            var_44 = ((((/* implicit */_Bool) (short)15946)) ? ((-(min((var_10), (var_17))))) : (((var_0) - (((/* implicit */int) var_2)))));
            var_45 = ((/* implicit */signed char) ((arr_43 [i_16] [i_17] [i_17] [i_16 - 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((var_11), (-2133346863))))))));
        }
        for (int i_18 = 1; i_18 < 8; i_18 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_19 = 0; i_19 < 12; i_19 += 2) 
            {
                arr_57 [i_18] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_49 [i_19] [i_19])))), (arr_31 [i_16] [i_18] [i_16])));
                /* LoopSeq 1 */
                for (unsigned short i_20 = 0; i_20 < 12; i_20 += 1) 
                {
                    var_46 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_16]))));
                    arr_61 [i_18] [i_18] = ((/* implicit */long long int) ((short) (+(((/* implicit */int) var_14)))));
                    var_47 = ((/* implicit */unsigned long long int) var_18);
                    var_48 = ((/* implicit */short) ((((/* implicit */int) min((max((((/* implicit */unsigned short) var_2)), (var_3))), (((/* implicit */unsigned short) var_6))))) | ((+(((/* implicit */int) var_3))))));
                }
                var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) -389788845))));
            }
            for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 1) 
            {
                var_50 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) 389788844)), (3755984233U))), (((/* implicit */unsigned int) var_13))));
                arr_64 [i_16] [i_18] [i_18] [i_18] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -2143296155965006344LL)) ? (((/* implicit */int) (short)15946)) : (((/* implicit */int) (unsigned short)31051))))))) ? ((-(((/* implicit */int) ((signed char) var_18))))) : (min((((/* implicit */int) (signed char)43)), (0)))));
            }
            for (signed char i_22 = 3; i_22 < 11; i_22 += 2) 
            {
                var_51 = ((int) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_14))));
                var_52 = ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) -317840670))) | (min((2656952153200141377LL), (((/* implicit */long long int) ((((/* implicit */int) (short)-7185)) & (var_10))))))));
                var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) var_8))));
            }
            var_54 = ((/* implicit */int) var_15);
        }
    }
    var_55 &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) min(((signed char)-18), ((signed char)-10)))), (var_6)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16))));
}
