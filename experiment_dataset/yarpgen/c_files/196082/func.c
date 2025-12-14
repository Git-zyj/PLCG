/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196082
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_5), (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_2 [i_0] [i_0]))))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */_Bool) max((6545299319737997399LL), (var_7)))) && (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) var_11))))))))));
        var_16 ^= ((/* implicit */_Bool) 2708234325U);
        var_17 = ((var_7) >> (((var_4) - (2055929144U))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) min((arr_4 [i_1]), (arr_4 [i_1])));
        var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned short)0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_3 [i_1]) : (arr_3 [i_1])))) : (((((/* implicit */_Bool) 5344798028321966493ULL)) ? (1729382256910270464ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_20 -= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)59))))), ((-((+(var_5)))))));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (int i_6 = 2; i_6 < 14; i_6 += 3) 
                    {
                        {
                            var_21 ^= ((/* implicit */long long int) min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)18)))), ((unsigned short)65523)));
                            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-30))))))) ? (-9223372036854775793LL) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)40948)) ^ (arr_10 [i_2] [i_3]))) != (max((var_13), (((/* implicit */int) var_2))))))))));
                            var_23 &= (+(max((((/* implicit */unsigned long long int) (+(arr_10 [i_3] [i_5])))), ((-(0ULL))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_0 [i_4]))));
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    var_25 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)(-32767 - 1)))));
                    var_26 = ((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) -9223372036854775802LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
                    var_27 = ((/* implicit */_Bool) (~(((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
                }
            }
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            var_28 = (-(((/* implicit */int) arr_17 [i_2] [i_8])));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
                        {
                            arr_33 [i_8] [i_2] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_9] [i_10] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)19642)))))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)39)) % (((/* implicit */int) (signed char)74))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 2) /* same iter space */
                        {
                            var_30 = (+(((/* implicit */int) (_Bool)1)));
                            arr_38 [i_10] [i_8] [i_2] [i_10] [i_12] [i_12] = ((/* implicit */unsigned char) var_1);
                            arr_39 [i_2] [i_8] [i_2] [i_8] [i_2] [i_12] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_5)) % (((((/* implicit */_Bool) -9223372036854775807LL)) ? (3143390614U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56332)))))));
                            var_31 = ((/* implicit */long long int) arr_22 [i_2] [i_8] [i_9] [i_12]);
                        }
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_2] [i_2] [i_2] [i_9] [i_10])) ? (((/* implicit */int) arr_37 [i_2] [i_2] [i_2] [i_9] [i_10])) : (var_13)));
                    }
                } 
            } 
            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26359)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_2] [i_8]))) | (var_3))) : (((/* implicit */unsigned long long int) var_7))));
            var_34 = (i_2 % 2 == 0) ? (((/* implicit */_Bool) (((~(var_12))) >> (((arr_29 [i_2] [i_8] [i_2]) - (2824619581U)))))) : (((/* implicit */_Bool) (((~(var_12))) >> (((((arr_29 [i_2] [i_8] [i_2]) - (2824619581U))) - (1722555260U))))));
        }
        var_35 = ((/* implicit */unsigned long long int) var_14);
        var_36 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */int) arr_5 [i_2]))))), (arr_6 [i_2])))) ? (((/* implicit */int) (_Bool)0)) : (var_13));
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 3) /* same iter space */
    {
        arr_42 [i_13] = (+((+(((/* implicit */int) (unsigned short)47882)))));
        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (unsigned short)20296))));
    }
    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0))))) : (((2654030652U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39177)))))))) ? (((((/* implicit */_Bool) min((-9223372036854775793LL), (((/* implicit */long long int) -1380686946))))) ? ((-(((/* implicit */int) (unsigned short)45239)))) : (((/* implicit */int) var_1)))) : ((+(((/* implicit */int) (signed char)20))))));
    var_39 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (short i_14 = 0; i_14 < 17; i_14 += 3) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            {
                var_40 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_15])), (3214320228U)))) ? (((/* implicit */int) arr_44 [i_14])) : (var_14)))));
                var_41 = ((/* implicit */unsigned long long int) min((0LL), (((/* implicit */long long int) min((min((((/* implicit */unsigned short) (signed char)-109)), (var_10))), (((/* implicit */unsigned short) (_Bool)0)))))));
            }
        } 
    } 
}
