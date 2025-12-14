/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46571
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned char) 3057019930U))) || (((/* implicit */_Bool) (unsigned char)140)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) max((var_3), ((unsigned char)145)))))))) : (5377187800066516222ULL))))));
        var_21 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) ((unsigned int) var_7))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                arr_8 [i_0] [2LL] [i_0] [2LL] = ((/* implicit */long long int) arr_2 [i_0]);
                arr_9 [i_0] [i_1] [i_2] &= ((/* implicit */signed char) var_3);
            }
            var_22 = max((max((max((((/* implicit */long long int) arr_0 [i_0] [i_1])), (var_7))), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) min((max((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [(unsigned char)1] [i_1])), (var_17))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 10120362702050653038ULL)) ? (-1512699926) : (((/* implicit */int) arr_0 [i_1] [i_1])))))))));
        }
        for (unsigned char i_3 = 2; i_3 < 15; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (unsigned int i_5 = 4; i_5 < 15; i_5 += 4) 
                {
                    {
                        arr_17 [i_0] [(unsigned char)9] [i_3] [i_5] [i_5] [i_4] = ((/* implicit */int) ((unsigned int) (~(((unsigned int) var_18)))));
                        var_23 = ((signed char) var_10);
                    }
                } 
            } 
            arr_18 [i_3] [i_0] &= ((((/* implicit */_Bool) ((short) arr_16 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (4294967295U)))) ? (max((arr_16 [i_0] [i_0] [i_3] [i_3]), (((/* implicit */long long int) 1U)))) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [2] [2]))) | (4294967295U)))) ? ((~(((/* implicit */int) arr_10 [i_0])))) : (((/* implicit */int) ((unsigned char) arr_16 [i_0] [i_3] [i_0] [i_3 - 1])))))));
        }
        var_24 *= ((signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [10LL] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0] [i_0])));
        arr_19 [i_0] = ((/* implicit */int) ((unsigned short) ((short) 739334177)));
    }
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6] [i_6]))) : (0U)))))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (arr_7 [i_6] [i_6] [i_6] [i_6])))), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (max((var_12), (((/* implicit */long long int) arr_3 [i_6] [i_6])))))))));
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294967288U))));
        arr_24 [i_6] [3ULL] = ((/* implicit */unsigned short) (~(max((((/* implicit */int) min((var_8), (var_0)))), ((+(((/* implicit */int) var_11))))))));
        var_25 -= ((/* implicit */short) arr_3 [i_6] [i_6]);
    }
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
    {
        arr_29 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8548822004518491776LL))));
        /* LoopNest 3 */
        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_11 = 2; i_11 < 9; i_11 += 2) 
                        {
                            arr_40 [i_8] [i_10] [(unsigned short)6] [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_16 [i_7] [i_8] [i_7] [i_10]);
                            var_26 -= ((/* implicit */unsigned short) ((long long int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_18))))));
                            arr_41 [i_11] [i_8] [i_8] [i_8] [i_8] [8LL] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_13))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 1) 
                        {
                            arr_45 [i_8] [i_10] [i_9] [i_8] [i_8] = ((/* implicit */int) ((unsigned long long int) ((short) max((((/* implicit */long long int) 1U)), (arr_16 [i_12] [i_9] [i_7] [i_7])))));
                            arr_46 [i_7] [i_7] [i_8] [i_9] [i_8] [i_8] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_1 [i_8 - 1]), (arr_1 [i_8 - 1]))))));
                            var_27 = ((/* implicit */unsigned int) arr_4 [i_12]);
                        }
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) max((((/* implicit */unsigned int) var_0)), (max((3476059477U), (((/* implicit */unsigned int) (unsigned short)1)))))))));
                            arr_51 [0] [i_8] [i_10] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_39 [i_7] [i_8] [i_9] [i_10] [i_13])))));
                        }
                        arr_52 [i_10] [i_10] [i_8] [i_8] [i_7] = ((/* implicit */unsigned long long int) var_7);
                        arr_53 [i_8] = ((/* implicit */unsigned int) (-(-7521511225950495796LL)));
                        var_29 = max((arr_1 [i_8 - 1]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_38 [i_8] [i_10] [i_10] [i_8] [i_10]))))));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */long long int) var_2);
}
