/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51789
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (((+(-6935112251889551121LL))) % (((long long int) ((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1]))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) (~(arr_5 [i_0] [i_1] [7ULL])));
                            var_18 = ((/* implicit */long long int) arr_7 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) (~(7174856759539745581LL)))), (max((arr_5 [i_0] [i_1] [i_2 + 3]), (((/* implicit */unsigned long long int) (_Bool)1)))))))))));
                            var_20 = ((/* implicit */unsigned long long int) max((((short) arr_6 [i_1 + 2] [13U] [i_2 + 3])), (min((arr_6 [i_1 - 1] [i_1] [i_2 + 2]), ((short)-24396)))));
                            arr_11 [i_0 + 3] [14ULL] [i_0 + 3] [i_3] [i_3 + 2] [i_3 + 3] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) 1461321357U)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) (signed char)42);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4] [i_4])) ? (arr_3 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) arr_4 [i_4] [i_4] [i_4]))))), (((long long int) (unsigned short)24112)))))));
        arr_14 [i_4] = ((/* implicit */_Bool) max((((unsigned int) arr_9 [i_4])), (((/* implicit */unsigned int) var_7))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        arr_17 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_5] [i_5] [i_5])) < (((/* implicit */int) arr_1 [i_5]))));
        var_24 = ((/* implicit */long long int) var_7);
    }
    /* LoopSeq 3 */
    for (unsigned int i_6 = 1; i_6 < 13; i_6 += 1) 
    {
        var_25 = ((/* implicit */int) var_10);
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6]))) : (4294967295U)))) ? (((unsigned long long int) (short)-12075)) : (((unsigned long long int) 1419642395U))))) ? (((((/* implicit */_Bool) arr_3 [i_6] [(short)14] [i_6 - 1])) ? (arr_3 [i_6] [15] [i_6 + 1]) : (arr_19 [i_6]))) : (max((((((/* implicit */_Bool) (unsigned short)29250)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) arr_4 [i_6] [i_6] [i_6]))))));
        arr_20 [i_6] = ((/* implicit */_Bool) min(((+(max((((/* implicit */long long int) 24U)), (6891339800244786563LL))))), (((/* implicit */long long int) min((((unsigned int) arr_5 [i_6] [i_6] [i_6 + 1])), (((/* implicit */unsigned int) arr_1 [i_6 + 2])))))));
        arr_21 [i_6] &= ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_6 + 2]))))) / (min((21ULL), (((/* implicit */unsigned long long int) 846047170U)))));
        var_27 = ((/* implicit */short) (+((+(arr_19 [i_6 + 1])))));
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                for (signed char i_10 = 1; i_10 < 9; i_10 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            arr_34 [9LL] [i_8] [i_7] [i_7] [i_8] [9LL] = ((/* implicit */int) var_7);
                            var_28 = ((/* implicit */short) arr_18 [i_9]);
                        }
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            arr_37 [i_7] [i_8] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) -5544086092638543914LL)))));
                            arr_38 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 1286519842725181728ULL)) ? (((/* implicit */int) arr_23 [i_10 + 2])) : (((/* implicit */int) arr_23 [i_10 + 1]))));
                            var_29 = ((/* implicit */unsigned long long int) (signed char)71);
                            var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_36 [i_10] [i_10 + 3] [(unsigned short)4] [i_10] [5ULL] [i_10 - 1]))));
                        }
                        arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) (+(((/* implicit */int) arr_36 [i_10 + 1] [(unsigned char)3] [(unsigned char)3] [i_10 + 2] [i_10 + 2] [i_7]))));
                        /* LoopSeq 1 */
                        for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            var_31 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_10 + 3] [i_10] [i_10] [i_10 + 1])) || (((/* implicit */_Bool) arr_8 [i_10 + 3] [i_10] [i_10] [i_10 + 1]))));
                            var_32 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13982)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_10 + 3]))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_44 [i_7] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7]))) * (var_15)));
            arr_45 [i_7] [i_7] [(_Bool)1] = ((/* implicit */long long int) (-(arr_5 [i_7] [i_14] [i_7])));
            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) arr_25 [i_7] [i_7]))));
            arr_46 [i_7] [(_Bool)1] |= ((/* implicit */unsigned char) arr_31 [8]);
        }
    }
    for (short i_15 = 1; i_15 < 21; i_15 += 3) 
    {
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (((-(arr_48 [(unsigned short)10]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3908714984U)))))))))));
        /* LoopSeq 2 */
        for (unsigned char i_16 = 2; i_16 < 20; i_16 += 1) 
        {
            arr_52 [i_15] [i_15] [i_15] = ((/* implicit */short) max(((!(((/* implicit */_Bool) arr_51 [i_15] [i_16 + 1] [i_15])))), (((arr_47 [i_15] [i_15 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
            var_35 = ((/* implicit */unsigned short) max(((+(-3000740846405779445LL))), (min((((/* implicit */long long int) (short)27509)), (arr_49 [i_15] [i_16 + 1])))));
            arr_53 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) arr_49 [i_15] [i_15]);
            arr_54 [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_15] [i_16])) ? (3156468628U) : (((/* implicit */unsigned int) -1943595770))))) && (((1463864962U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60060)))))));
        }
        for (short i_17 = 0; i_17 < 22; i_17 += 3) 
        {
            arr_57 [i_15] [i_17] = ((/* implicit */long long int) arr_50 [i_15] [i_17]);
            var_36 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)255)) ? (var_4) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_56 [i_15] [i_15]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_56 [i_15] [i_15])))))));
        }
        var_37 = ((/* implicit */unsigned int) (_Bool)1);
    }
}
