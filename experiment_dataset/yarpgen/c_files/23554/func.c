/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23554
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-17))))) != (((((/* implicit */_Bool) var_7)) ? (356985999U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) + (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_3))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)16)), (8537997362439100201LL)))))))));
    var_21 = ((/* implicit */short) min((min((((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)17)))), (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) (signed char)16))))))), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_22 &= ((/* implicit */_Bool) var_0);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_1] [i_0])) << (((arr_8 [i_2] [i_2 + 2] [i_2 + 3] [i_2 + 1]) - (1171554976U))))))));
                                arr_16 [i_1] [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) (+(arr_8 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_4 - 2])));
                                var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_4 + 1] [i_3] [i_3 + 3] [i_0] [i_1] [i_0]))));
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((arr_4 [i_0] [i_0] [i_4 - 2]) > (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_2] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_6)))) ? (((((/* implicit */int) var_14)) & (((/* implicit */int) arr_11 [6LL] [i_1] [i_0] [i_0])))) : ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))))));
                }
                for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 1) 
                    {
                        var_26 = ((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                        var_27 = ((/* implicit */short) arr_4 [i_0] [i_1] [i_5]);
                    }
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        arr_27 [i_0] [i_0] [i_7] [i_5] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-16), (((/* implicit */signed char) arr_18 [i_0] [(unsigned short)3] [i_0] [i_5 - 1])))))) != (((((/* implicit */_Bool) (signed char)11)) ? (arr_2 [i_1] [i_7]) : (arr_2 [i_5 + 2] [i_7])))));
                        var_28 = ((/* implicit */short) min((1162021257615292396LL), (-705800639047102983LL)));
                        var_29 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_7] [i_0])) ? (arr_3 [i_0] [i_7]) : (arr_3 [i_0] [i_7])))));
                        var_30 = ((/* implicit */unsigned int) (short)30144);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */signed char) 12061338147018203985ULL);
                                var_32 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)42035)) & (((/* implicit */int) arr_18 [i_9] [i_1] [i_1] [i_0]))))), (max((max((((/* implicit */unsigned long long int) (short)-7196)), (arr_10 [i_9] [i_9] [i_9] [i_9] [i_9]))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)46)), ((short)-24664))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_10 = 1; i_10 < 13; i_10 += 3) 
                {
                    arr_35 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) == (((/* implicit */int) ((unsigned char) (unsigned char)46)))));
                    var_33 += ((/* implicit */unsigned short) (~(((/* implicit */int) var_19))));
                }
                var_34 = ((/* implicit */unsigned char) ((short) max((((short) -1242937365430930020LL)), (var_7))));
                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [3ULL] [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        for (unsigned int i_12 = 2; i_12 < 16; i_12 += 3) 
        {
            {
                var_36 += ((/* implicit */short) ((unsigned char) -594316850));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        {
                            arr_47 [i_11] [i_11] [i_13] [i_11] [i_11] = ((/* implicit */short) arr_39 [i_12]);
                            var_37 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_13)))) : (((/* implicit */int) (unsigned short)57660))))) || (((((unsigned int) var_2)) > (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) var_18))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 17; i_15 += 1) 
                {
                    for (long long int i_16 = 3; i_16 < 16; i_16 += 1) 
                    {
                        {
                            arr_53 [i_11] [i_12 + 1] [i_15] [i_16] = ((/* implicit */int) ((((/* implicit */int) max((((arr_39 [i_11]) <= (((/* implicit */long long int) 3190868375U)))), (((((/* implicit */int) (signed char)-17)) <= (((/* implicit */int) (unsigned short)16445))))))) < (((/* implicit */int) var_14))));
                            var_39 = (!(((/* implicit */_Bool) ((arr_42 [i_11] [i_16 + 1] [i_11] [i_12 + 1]) & (arr_42 [i_11] [i_16 - 2] [i_15] [i_12 - 2])))));
                            arr_54 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1315522959)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (unsigned short)43880))))), ((~(((var_16) | (((/* implicit */unsigned long long int) -2128708026))))))));
                            var_40 -= ((/* implicit */unsigned int) max(((+(((long long int) var_0)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (3190868363U))))));
                            var_41 += ((/* implicit */short) arr_36 [i_11] [i_11]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 17; i_17 += 3) 
                {
                    for (unsigned short i_18 = 0; i_18 < 17; i_18 += 3) 
                    {
                        {
                            arr_62 [i_11] [i_11] [(short)4] [i_17] [i_18] = ((/* implicit */short) max((((((/* implicit */_Bool) min((arr_36 [i_11] [i_12]), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152))) : (6089263627071367094LL))), (((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (54002315)))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_17] [i_17]))) : (arr_39 [i_18]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_12) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
                            var_42 += ((/* implicit */unsigned short) min((max((arr_51 [i_12 - 1] [i_12 - 2] [i_12 - 1]), (((/* implicit */unsigned long long int) arr_46 [i_12 + 1] [i_12 + 1] [i_17])))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_60 [i_11] [i_12] [i_17] [i_11] [i_18])) + (2147483647))) << (((((((/* implicit */int) arr_61 [i_11] [i_12] [i_17] [i_12] [i_12])) + (11316))) - (12))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
