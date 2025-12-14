/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247521
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    arr_6 [i_2] [i_1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1730872035)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (5835194652060600441ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)4)))) : (1854858707U))));
                    var_14 ^= ((((/* implicit */_Bool) ((int) (signed char)43))) ? (((unsigned long long int) (signed char)113)) : (((/* implicit */unsigned long long int) ((long long int) (short)4423))));
                    var_15 -= ((/* implicit */_Bool) (signed char)-24);
                }
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_5 = 4; i_5 < 17; i_5 += 3) 
                            {
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) 1730872051)) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4))) : (13193529884357332193ULL)))))))));
                                var_17 = ((/* implicit */unsigned long long int) (signed char)71);
                                var_18 = ((/* implicit */signed char) (_Bool)1);
                                var_19 = ((/* implicit */unsigned char) (_Bool)1);
                                var_20 = ((/* implicit */long long int) ((unsigned int) ((signed char) (short)-13701)));
                            }
                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 16; i_6 += 3) 
                            {
                                var_21 = ((/* implicit */long long int) ((signed char) -4772486993271248592LL));
                                arr_18 [8LL] [i_3] [i_3] [i_3] [8LL] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) -1278730645661017824LL)) ? (((/* implicit */int) (signed char)63)) : (1728977212))));
                            }
                            arr_19 [i_0] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) 2092905865);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_7 = 2; i_7 < 24; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                {
                    arr_29 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (short)-4059)) : (((/* implicit */int) (unsigned char)101))))) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (signed char)-1))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) (signed char)115);
                                arr_35 [i_7] [i_7 + 1] [i_7] = ((/* implicit */unsigned char) 740402538);
                                var_23 = ((((/* implicit */_Bool) 1279570444)) ? (3867644623U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))));
                                arr_36 [i_11] [i_11] [i_7] [i_7] [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (short)26429)) ? (536870911ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))));
                                arr_37 [i_11] [i_10] [i_7] [(signed char)7] [i_7] = ((/* implicit */_Bool) ((unsigned int) -1456229570));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            for (int i_13 = 2; i_13 < 23; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    {
                        arr_44 [23LL] [23LL] [i_7] [i_14] [i_7 - 2] [i_7 - 2] = 63;
                        var_24 = ((/* implicit */long long int) max((var_24), (((((/* implicit */_Bool) (signed char)-14)) ? (((((/* implicit */_Bool) (short)-30863)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) : (17179869183LL))) : (((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-6199960148032298656LL)))))));
                        /* LoopSeq 3 */
                        for (long long int i_15 = 1; i_15 < 22; i_15 += 2) 
                        {
                            var_25 = ((/* implicit */signed char) (-2147483647 - 1));
                            var_26 = ((/* implicit */_Bool) (unsigned char)255);
                        }
                        for (signed char i_16 = 1; i_16 < 23; i_16 += 3) 
                        {
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) -6513309353282576007LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))) : (-213112033867947530LL))))));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (_Bool)1))));
                            arr_49 [(signed char)11] [i_7] [i_7] [i_14] [i_14] = ((((/* implicit */_Bool) (short)-25137)) ? (1051826130) : (((/* implicit */int) (short)11324)));
                            arr_50 [18ULL] [i_12] [i_13] [i_13] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1685925607)) ? (((/* implicit */int) (short)6856)) : (-844191193)));
                        }
                        for (unsigned int i_17 = 0; i_17 < 25; i_17 += 4) 
                        {
                            arr_54 [i_7] [i_7] [i_7] [i_7] [i_7 - 1] = ((/* implicit */unsigned int) (signed char)-110);
                            var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (_Bool)0)) : (1730872028)));
                        }
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) 740402538)) ? (17749628193847495337ULL) : (((/* implicit */unsigned long long int) 1LL)))))));
                        arr_55 [i_7] [i_7] [(unsigned char)4] [i_13] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7))) : (12735406278158647946ULL)));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 1082182495))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) 18446744073709551615ULL)))));
}
