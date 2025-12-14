/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52146
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
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_14))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                    {
                        {
                            var_16 ^= ((/* implicit */int) ((-772619406541602857LL) / (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            var_17 |= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (661782340)));
                            var_18 = (-(((/* implicit */int) var_0)));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_5 = 2; i_5 < 21; i_5 += 1) 
            {
                for (short i_6 = 3; i_6 < 23; i_6 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            arr_19 [i_0] [i_1] [i_5] [i_5] [i_1] [i_7] = ((/* implicit */short) (((_Bool)1) ? (7727862242673606495LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_19 ^= ((/* implicit */long long int) (signed char)-1);
                            var_20 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)15)) / (((/* implicit */int) ((((/* implicit */_Bool) -1140122645)) || (((/* implicit */_Bool) (unsigned char)216)))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_7] [i_1])) ? (arr_18 [i_7] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        }
                        arr_20 [i_0] [i_1] [i_5] [i_1] = (+(arr_5 [i_1] [i_1] [i_1]));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? ((-(arr_11 [i_1] [i_1] [i_5 + 1] [i_0] [i_5 + 1]))) : (((/* implicit */unsigned int) ((var_2) >> (((var_4) - (8348728283581443659LL))))))));
                        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 22; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        {
                            arr_29 [i_1] [15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_1] [i_8 + 2] [i_8 + 2] [i_9 + 1] [i_9 - 1])) ? (arr_26 [i_1] [i_8 - 1] [i_8 + 2] [i_9 + 1] [i_9 - 1]) : (arr_26 [i_1] [i_8 - 1] [i_8 + 1] [i_9 + 2] [i_9 - 1])));
                            var_24 = ((/* implicit */short) ((6614741317948385638LL) % (((/* implicit */long long int) ((/* implicit */int) (short)23524)))));
                            var_25 = ((/* implicit */unsigned char) ((144115188075855871LL) != (var_4)));
                            var_26 -= ((/* implicit */_Bool) (signed char)4);
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-28236))));
            }
            for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                arr_33 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_11] [i_1] [(unsigned char)7] [i_11])) ? (arr_27 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-25)) || (((/* implicit */_Bool) 8716893968700213271LL))))))));
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((int) arr_32 [i_0] [10] [i_0] [i_11])))));
            }
        }
        arr_34 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))) : (((/* implicit */int) (!((_Bool)1))))));
        arr_35 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -3641945988707511744LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_13)));
        arr_36 [18] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) != (8553988664993748930ULL)));
        var_29 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)60721))));
    }
    var_30 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)123)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -963555858)) : (18446744073709551615ULL)))))));
}
