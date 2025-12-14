/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190443
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
    var_10 = ((/* implicit */signed char) 10068573394854372352ULL);
    var_11 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_12 |= ((signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1 + 1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_0 [i_0 + 1] [i_1 + 1]))));
                var_13 = ((/* implicit */short) ((_Bool) -8105972181279467499LL));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 1; i_4 < 15; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_14 ^= ((/* implicit */unsigned long long int) (signed char)0);
                                var_15 = ((/* implicit */long long int) (short)-1);
                                var_16 += ((/* implicit */unsigned long long int) ((((arr_14 [i_2] [i_4] [i_5]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))))) < (7354774564112556507ULL)));
                                var_17 = ((/* implicit */signed char) ((long long int) 8378170678855179263ULL));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_6] [i_4])) + (((/* implicit */int) (short)22468))))) < (arr_14 [i_2] [10U] [i_4])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 0U)) % (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (8562446064854307829LL))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_12 [i_4] [i_3] [i_2]) >> (((((/* implicit */int) arr_11 [i_2] [i_3] [i_4])) + (12674)))))) ? (((unsigned long long int) -1697669222119476070LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 1] [i_4 - 1] [i_2])))));
                }
            } 
        } 
        var_21 += ((/* implicit */long long int) ((unsigned long long int) (signed char)-89));
    }
    /* vectorizable */
    for (long long int i_7 = 1; i_7 < 23; i_7 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) (signed char)7);
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_8] [i_8 + 1] [i_8]))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) 0U))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_7 + 1] [i_8 + 1])))))));
            /* LoopSeq 3 */
            for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 16654704390075844780ULL))));
                var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 35184372088832LL)) ? (2525258239263956567ULL) : (8378170678855179263ULL))) > ((~(var_9)))));
                /* LoopNest 2 */
                for (short i_10 = 2; i_10 < 21; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 23; i_11 += 1) 
                    {
                        {
                            var_27 &= ((/* implicit */unsigned char) (~((((_Bool)1) ? (10068573394854372334ULL) : (((/* implicit */unsigned long long int) -272022890447230644LL))))));
                            var_28 = 8105972181279467482LL;
                            var_29 = ((/* implicit */long long int) ((var_3) < (((((/* implicit */_Bool) arr_21 [i_7 + 1] [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-11))) : (var_3)))));
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (+(((/* implicit */int) ((unsigned char) 266733415U))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_12 = 3; i_12 < 23; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (+(((/* implicit */int) arr_34 [i_13] [i_12 - 2] [i_8 + 1] [i_8 + 1] [i_7 + 1])))))));
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((12523297556499958126ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))))))));
                            var_33 = ((/* implicit */long long int) max((var_33), (((long long int) arr_19 [i_7]))));
                            var_34 = ((/* implicit */unsigned int) ((long long int) ((signed char) -8105972181279467499LL)));
                        }
                    } 
                } 
            }
            for (unsigned char i_14 = 2; i_14 < 23; i_14 += 2) 
            {
                var_35 = ((/* implicit */signed char) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7 + 1] [i_7 + 1])))));
                var_36 = ((/* implicit */unsigned int) (-(8378170678855179311ULL)));
            }
            for (signed char i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                var_37 = ((/* implicit */signed char) ((unsigned long long int) 18446744073709551615ULL));
                var_38 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 5935584930903856267ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) > (((/* implicit */int) (signed char)-7))));
            }
        }
        for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 4) 
        {
            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((long long int) arr_46 [i_7 - 1])))));
            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) arr_25 [i_7] [i_16]))));
            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_7 + 1] [i_7 + 1] [i_7 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))) : (arr_24 [i_7 + 1] [i_7 - 1] [i_7 - 1])));
        }
    }
    /* vectorizable */
    for (signed char i_17 = 3; i_17 < 11; i_17 += 1) 
    {
        var_42 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (var_3))))) / (arr_17 [i_17 - 2] [i_17] [i_17 - 3] [i_17] [i_17 + 1] [i_17] [i_17 - 3]));
        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_17 - 1] [i_17 + 1] [i_17 - 1])) ? (arr_40 [i_17 - 1] [i_17 + 1] [i_17 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1)))));
        var_44 = ((/* implicit */signed char) ((arr_12 [i_17 - 3] [i_17 - 2] [10ULL]) < (arr_12 [i_17 - 2] [i_17 + 1] [i_17 - 1])));
        /* LoopNest 2 */
        for (signed char i_18 = 3; i_18 < 10; i_18 += 3) 
        {
            for (long long int i_19 = 2; i_19 < 9; i_19 += 1) 
            {
                {
                    var_45 |= ((/* implicit */short) ((long long int) (short)6295));
                    var_46 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_17 - 3] [i_18 - 1] [i_19 - 1]))) % ((-(7864320U)))));
                    var_47 = ((/* implicit */short) ((((/* implicit */_Bool) 10068573394854372329ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_17] [i_18 - 3] [i_18 - 3]))) : (3906709059808292331LL)));
                }
            } 
        } 
    }
    for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
    {
        var_48 = ((long long int) ((-8105972181279467486LL) - (((/* implicit */long long int) arr_46 [i_20]))));
        /* LoopNest 2 */
        for (short i_21 = 1; i_21 < 17; i_21 += 3) 
        {
            for (signed char i_22 = 0; i_22 < 18; i_22 += 4) 
            {
                {
                    var_49 += ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-16)))) - (((((/* implicit */_Bool) (signed char)75)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_20] [10ULL] [i_22] [i_22]))))))));
                    /* LoopNest 2 */
                    for (signed char i_23 = 0; i_23 < 18; i_23 += 1) 
                    {
                        for (signed char i_24 = 2; i_24 < 17; i_24 += 3) 
                        {
                            {
                                var_50 = ((/* implicit */long long int) (_Bool)1);
                                var_51 = ((/* implicit */unsigned long long int) ((((long long int) arr_59 [i_23] [i_21] [i_21 + 1] [i_24 - 2])) % (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_20] [(short)1] [i_21 + 1] [i_24 + 1])))));
                                var_52 = ((/* implicit */signed char) max((var_52), ((signed char)-1)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
