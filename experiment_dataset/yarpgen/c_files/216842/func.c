/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216842
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */int) ((((-1027220759114114911LL) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1]))))) / (((/* implicit */long long int) 1783634409))));
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-845792004)))) ? (((var_3) / (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [(short)19] [i_1])) : (var_5))))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (((((/* implicit */_Bool) 11U)) ? (9557340602573289664ULL) : (((/* implicit */unsigned long long int) -1783634409))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) ((long long int) min((var_4), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                            arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) (short)-5843)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : ((-(16646973452881019751ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [15] [i_2] [i_2] [i_1 - 1] [i_1 - 1]))) / (var_7)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_3] [i_0] [(short)15]))))) : (((/* implicit */unsigned int) var_9)))) : (max((4294967285U), (arr_4 [i_1])))));
                            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_0)) : (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_3]) >> (((arr_4 [i_3]) - (3231900659U)))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 1])))))))))));
                        }
                    } 
                } 
                var_14 |= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])) ? (-1LL) : (((/* implicit */long long int) arr_0 [i_0] [i_1 - 1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 4; i_4 < 9; i_4 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1783634391)) ? (1783634390) : (((/* implicit */int) (short)32740))));
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            var_16 -= arr_6 [18ULL] [i_4] [14U] [i_5] [i_5] [i_5];
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 8; i_6 += 1) 
            {
                var_17 += ((/* implicit */short) ((((/* implicit */_Bool) -1891675864374636279LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)25312))) : (2750793828407443611LL)));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_1))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) arr_5 [i_5] [i_7] [i_5])) / (arr_16 [i_4 - 3] [i_5] [i_6] [i_7 - 1]))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_8]))) : (var_3))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_3)) - (((((((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3798))) : (var_0))) + (9223372036854775807LL))) >> (((((unsigned int) (short)(-32767 - 1))) - (4294934515U)))))));
                var_21 = ((/* implicit */int) (((-(arr_4 [i_5]))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_5)) : (var_3)))) ? (((/* implicit */long long int) arr_9 [i_4 - 1])) : (var_4))) - (2221232290LL)))));
            }
            var_22 ^= ((/* implicit */short) min((((((/* implicit */_Bool) arr_10 [i_4 - 1])) ? (15610763944394729886ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_4 + 1] [i_4 - 3] [i_4] [i_4] [i_4] [6]))))), (((/* implicit */unsigned long long int) arr_22 [i_4 - 1] [i_4 + 1] [i_4] [i_4] [2ULL] [5LL]))));
        }
        /* vectorizable */
        for (short i_9 = 1; i_9 < 9; i_9 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_4 - 3] [5] [i_4] [6] [i_4] [i_9]))) : (6419689163634291727ULL)));
            var_24 = ((/* implicit */short) ((6419689163634291727ULL) >> (((((((/* implicit */_Bool) arr_12 [i_9] [i_4])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_9]))))) - (720741901347847684LL)))));
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                for (short i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */short) var_4);
                            arr_33 [i_4 - 2] [i_11] [i_9] = ((/* implicit */int) (~(arr_29 [i_9] [i_9] [i_9 + 1] [i_9 + 1])));
                            arr_34 [i_4] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned int) (~(arr_29 [i_4] [(short)7] [i_4 - 3] [i_4])));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) / (arr_19 [5ULL] [i_9 - 1] [i_10] [i_10] [i_11] [0] [i_12])))) ? (((((/* implicit */_Bool) var_3)) ? (1885633506115144549ULL) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) 10U)))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_13 = 1; i_13 < 9; i_13 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_14 = 1; i_14 < 8; i_14 += 4) 
            {
                for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    for (short i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        {
                            arr_47 [i_13] = ((((/* implicit */_Bool) (~(arr_27 [i_4 - 1] [i_13 - 1] [i_14 + 1] [i_4 - 2])))) ? (((/* implicit */long long int) ((((-410876039) + (2147483647))) >> (((((1356032958U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_4] [i_4]))))) - (1356025718U)))))) : (((((/* implicit */_Bool) arr_28 [i_14 + 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_14 + 1] [i_13] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (1769488028U)))) : (-9223372036854775790LL))));
                            var_27 = arr_0 [i_4] [0];
                        }
                    } 
                } 
            } 
            var_28 |= ((/* implicit */unsigned int) ((1697948428) - (((arr_27 [i_4 - 2] [i_4] [i_4 - 2] [i_4]) / ((+(((/* implicit */int) (short)31911))))))));
        }
    }
}
