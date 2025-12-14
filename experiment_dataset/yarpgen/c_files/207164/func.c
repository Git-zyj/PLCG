/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207164
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) 1480193223U);
            var_14 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3410801674236326427ULL) << (((var_5) - (944565029U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)1315)))) : (((var_6) - (((/* implicit */unsigned int) var_3))))))) <= (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_10) : (var_10))))));
            arr_6 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))) - (arr_0 [7ULL])))), (var_13)));
        }
        for (short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned int) (((~(var_10))) & (((/* implicit */long long int) min((((unsigned int) var_13)), (((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_6)) : (4801120987139342377LL))))))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                var_16 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_13)))) <= (((((/* implicit */_Bool) var_2)) ? (var_10) : (var_10)))));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (short)-1316)) != (((/* implicit */int) (signed char)-56)))))));
                arr_13 [i_3] [i_2] [7ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_3] [i_0])) : (((((/* implicit */int) arr_2 [i_2])) % (((/* implicit */int) (unsigned short)42561))))));
            }
            for (unsigned int i_4 = 3; i_4 < 8; i_4 += 4) /* same iter space */
            {
                var_17 &= ((/* implicit */int) ((((var_2) ^ (((/* implicit */long long int) (+(((/* implicit */int) (short)-27777))))))) >> (((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) * (var_6)))) ? (((((/* implicit */_Bool) var_6)) ? (4294967293U) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) - (4294967288U)))));
                arr_17 [i_4] [i_2] [i_0] [i_4] = ((/* implicit */long long int) (+(var_9)));
                /* LoopNest 2 */
                for (unsigned short i_5 = 4; i_5 < 10; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            var_18 -= ((/* implicit */signed char) ((3415587413532174892LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) (short)511)) ? (((/* implicit */int) (short)1316)) : ((~(var_3))))))));
                            var_19 = ((/* implicit */unsigned short) arr_11 [i_0] [i_2] [i_4] [i_6]);
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((var_3) != (((/* implicit */int) arr_16 [i_5] [i_5])))) ? (min((var_6), (((/* implicit */unsigned int) var_9)))) : (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) var_5)))))) : (arr_15 [i_0] [i_2] [i_4] [i_5])))) : (min((((((/* implicit */_Bool) arr_16 [i_5] [i_2])) ? (((/* implicit */unsigned long long int) var_2)) : (15035942399473225188ULL))), (((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */unsigned long long int) var_2)))))))))));
                            arr_23 [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) max((var_8), (((/* implicit */unsigned long long int) var_1))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_7 [i_4 - 3] [i_4] [i_4 - 1])) : (((/* implicit */int) var_12))))));
            }
            /* vectorizable */
            for (unsigned int i_7 = 3; i_7 < 8; i_7 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    arr_28 [i_7] = ((/* implicit */long long int) ((var_3) ^ (((/* implicit */int) var_1))));
                    var_22 *= ((/* implicit */_Bool) -5592455717983056229LL);
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 1; i_9 < 7; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) var_13);
                        arr_33 [i_0] [i_0] [i_7] [i_7] [i_8] [i_9] = ((/* implicit */int) ((arr_30 [i_9] [i_9 + 2] [i_7] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7 + 3]) <= (((/* implicit */unsigned long long int) var_2))));
                        var_24 *= var_12;
                    }
                    arr_34 [i_0] [i_7] [i_2] [i_2] [i_7 + 3] [i_8] = ((/* implicit */unsigned long long int) var_9);
                }
                var_25 = ((/* implicit */long long int) max((var_25), (var_10)));
                arr_35 [i_0] [i_0] [i_7] = ((long long int) ((3415587413532174892LL) >> (((var_13) - (12875006013670422959ULL)))));
                var_26 = ((/* implicit */short) 2160714121U);
            }
            for (unsigned int i_10 = 3; i_10 < 8; i_10 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 3693935384U)) || (((/* implicit */_Bool) arr_15 [i_0] [i_2] [i_10] [(signed char)2])))), ((((!(((/* implicit */_Bool) arr_0 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (804070886U))))))));
                arr_39 [i_0] [i_2] [i_10] [i_10 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((((var_10) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)32751)))) - (38))))) : (((/* implicit */long long int) min((min((3002492331U), (((/* implicit */unsigned int) arr_25 [i_0])))), (var_5))))));
            }
        }
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) == (3U))))))) ? (min((((((/* implicit */_Bool) (short)32747)) ? (var_8) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-32747))))))) : (((/* implicit */unsigned long long int) (+((~(var_10))))))));
    }
    var_29 = ((/* implicit */unsigned char) (((+(((/* implicit */int) ((unsigned short) 846949977U))))) * (((/* implicit */int) (((-(((/* implicit */int) (short)-17846)))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (var_2)))))))));
}
