/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237334
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
    for (int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) (short)(-32767 - 1)))));
        var_13 = ((/* implicit */_Bool) 921295029U);
        var_14 = ((((var_8) <= (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 + 2])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((min((((/* implicit */unsigned short) var_10)), ((unsigned short)2166))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0)))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_2]))) : (869422104093356343LL)))) ? ((~(arr_2 [i_2]))) : (((/* implicit */unsigned long long int) ((6895855346279842452LL) / (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1] [i_2])) ? (arr_7 [i_1] [i_2] [(unsigned short)2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66)))));
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    for (unsigned short i_5 = 4; i_5 < 13; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))));
                            var_17 = ((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_3]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+(((/* implicit */int) var_3)))))));
            }
            for (int i_6 = 3; i_6 < 11; i_6 += 4) 
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_1] [i_2] [i_6 + 3] [i_2] [i_6 - 3])) ^ (((/* implicit */int) (short)-30606))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 1; i_7 < 14; i_7 += 4) 
                {
                    for (unsigned char i_8 = 3; i_8 < 13; i_8 += 1) 
                    {
                        {
                            arr_27 [i_1] [10LL] [i_6] [i_7] [i_2] = arr_21 [i_2] [i_7] [i_2] [i_2];
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_6 - 1] [i_8 - 3])) ? (arr_9 [i_6] [i_6] [i_6 + 4] [i_8 - 1]) : (arr_9 [i_6] [i_6] [i_6 + 4] [i_8 - 3]));
                            var_20 ^= ((/* implicit */short) arr_15 [i_8 + 2] [(unsigned char)6] [(unsigned char)6] [i_8 - 2] [(unsigned char)6] [i_6 + 1]);
                        }
                    } 
                } 
                arr_29 [i_1] [i_2] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2])) % (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (signed char i_9 = 1; i_9 < 14; i_9 += 1) 
                {
                    for (unsigned int i_10 = 4; i_10 < 14; i_10 += 1) 
                    {
                        {
                            var_21 |= ((/* implicit */long long int) ((arr_8 [i_1] [i_1] [i_10 + 1] [i_9]) >> (((arr_8 [i_1] [i_10 - 3] [i_10 + 1] [i_9 + 1]) - (2424862604U)))));
                            arr_35 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_10))) == (((/* implicit */int) (short)32758))));
                        }
                    } 
                } 
            }
            var_22 -= ((/* implicit */unsigned long long int) ((((-6895855346279842450LL) + (9223372036854775807LL))) << (((arr_24 [(unsigned char)14] [i_2] [14U] [i_1] [i_1]) - (729975724U)))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 4) 
        {
            for (short i_12 = 4; i_12 < 14; i_12 += 4) 
            {
                for (unsigned int i_13 = 0; i_13 < 15; i_13 += 4) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((unsigned char) (short)(-32767 - 1)));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((18446744073709551592ULL) > (12367945644879121111ULL))))) != (((arr_30 [(unsigned char)1] [i_1] [i_1] [(unsigned char)1] [i_13]) ? (-6895855346279842447LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                    }
                } 
            } 
        } 
        arr_45 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (4294967286U) : (((/* implicit */unsigned int) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1]))));
        /* LoopNest 2 */
        for (unsigned int i_14 = 1; i_14 < 11; i_14 += 2) 
        {
            for (signed char i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                {
                    var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4503599627108352LL)) ? (13174046015408841686ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59551)))));
                    arr_52 [(unsigned char)8] [i_14 + 4] [6U] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33174)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)50))) : (1471414740046178339LL)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_16 = 0; i_16 < 15; i_16 += 2) 
        {
            for (signed char i_17 = 0; i_17 < 15; i_17 += 4) 
            {
                for (unsigned char i_18 = 0; i_18 < 15; i_18 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_19 = 1; i_19 < 13; i_19 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6536017646098052210LL)) ? (arr_15 [i_19] [i_18] [i_19] [i_19 + 1] [i_18] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-51)))));
                            var_27 = ((/* implicit */short) ((signed char) 18446744073709551588ULL));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)24193))))) || (((/* implicit */_Bool) 16777216U))));
                            var_29 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)251))));
                        }
                        var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)162)))))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned int) var_1);
}
