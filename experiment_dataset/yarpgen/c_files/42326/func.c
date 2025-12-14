/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42326
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) -212650518);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_19 += ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (arr_6 [i_0 - 1]) : (arr_6 [i_1 - 3]));
                        var_20 = ((/* implicit */unsigned long long int) 401163433);
                        var_21 = 14847718779709722823ULL;
                    }
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */int) (~(14429138647034815167ULL)));
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) 18446744073709551615ULL);
                        var_23 = ((/* implicit */int) arr_2 [10]);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) ((arr_1 [i_5]) - (((unsigned long long int) -1288509852))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((_Bool) ((int) var_18)));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) arr_16 [i_0] [i_5] [i_0] [i_1 - 3]))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 1513805211)) : (var_8)));
                            arr_22 [i_5] [i_5] = arr_16 [i_0] [i_5] [i_2] [i_2];
                        }
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (arr_2 [i_0 - 1]) : (((((/* implicit */_Bool) arr_18 [i_1])) ? (arr_16 [i_0] [i_5] [i_2] [5ULL]) : (((/* implicit */unsigned long long int) 2147483647))))));
                    }
                    arr_23 [9LL] [i_1] [i_2] [4ULL] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) arr_4 [i_0] [i_1] [i_2])));
                }
            } 
        } 
        arr_24 [i_0] [i_0] = ((/* implicit */unsigned long long int) -1288509852);
    }
    for (int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        arr_29 [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7])) ? (-1288509852) : (((/* implicit */int) arr_27 [i_7] [i_7]))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) var_18)) + (var_13)))) ? (18174437710101808027ULL) : (((4017605426674736448ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7]))))))) : (((/* implicit */unsigned long long int) (-(-1750890065293877941LL)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -378765549)) ? (((/* implicit */int) arr_26 [i_8])) : (((/* implicit */int) arr_30 [i_7] [i_7] [i_7]))));
            var_30 = ((unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_7])) ? (18174437710101808027ULL) : (((/* implicit */unsigned long long int) 1750890065293877941LL))));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_31 = ((int) 18446744073709551615ULL);
            var_32 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) ^ (arr_31 [i_7] [i_9 - 1])))) && (((/* implicit */_Bool) arr_34 [i_9 - 1] [8ULL])))));
            arr_36 [i_7] = ((/* implicit */int) var_6);
        }
        /* LoopNest 3 */
        for (unsigned int i_10 = 2; i_10 < 15; i_10 += 2) 
        {
            for (int i_11 = 3; i_11 < 16; i_11 += 2) 
            {
                for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            var_33 ^= ((/* implicit */unsigned long long int) (~(((long long int) 9223372036854775807LL))));
                            arr_49 [i_7] [i_10] [i_11] [i_10] [i_13] [16] [i_12] = ((/* implicit */_Bool) (((~(-1283499805))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1288509852)) ? (0ULL) : (arr_34 [i_10] [i_11])))) ? (((/* implicit */unsigned long long int) 590086882)) : (arr_28 [i_10 - 2]))) - (13269498463171513437ULL)))));
                            arr_50 [i_11] [i_10] [i_10] [i_10] [i_10] [i_12] [i_12] = ((/* implicit */int) (_Bool)1);
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                        {
                            var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) 18174437710101808027ULL))) <= (((((/* implicit */_Bool) -1513805212)) ? (((/* implicit */unsigned long long int) ((unsigned int) 137438953472ULL))) : (((4017605426674736448ULL) ^ (18446744073709551615ULL)))))));
                            var_35 = ((/* implicit */long long int) arr_38 [i_7] [8ULL]);
                            var_36 = ((((((/* implicit */_Bool) ((unsigned long long int) arr_52 [i_14] [i_7] [0] [i_10] [i_7]))) ? (((arr_37 [i_10 - 2] [i_10 - 2]) ? (arr_31 [i_7] [15ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_7] [i_7] [i_11])) ? (((/* implicit */int) arr_42 [i_7])) : (((/* implicit */int) arr_27 [15ULL] [i_10]))))))) * (((/* implicit */unsigned long long int) ((int) ((long long int) arr_30 [i_7] [i_10] [i_11])))));
                            arr_53 [7ULL] [i_11] [i_10 + 3] [i_7] [i_7] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_10 + 2] [5ULL] [4] [5ULL])) ? (((long long int) arr_40 [i_7] [i_14] [i_11 - 3] [i_12])) : (((/* implicit */long long int) (+(arr_40 [14ULL] [i_10 + 1] [i_12] [i_14]))))));
                            arr_54 [i_7] [i_7] [i_11] [i_11] [i_11] = arr_25 [i_11];
                        }
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) var_18))));
                    }
                } 
            } 
        } 
        arr_55 [i_7] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) & (arr_52 [17] [i_7] [i_7] [i_7] [i_7])))) != (arr_46 [i_7] [17ULL] [i_7]))) && (((/* implicit */_Bool) ((unsigned long long int) arr_37 [i_7] [i_7])))));
        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) + (((/* implicit */unsigned long long int) -1643672673))))) ? (((((/* implicit */_Bool) 384439981U)) ? (((/* implicit */unsigned long long int) arr_51 [i_7] [i_7])) : (var_8))) : ((-(var_9)))))) ? (((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_48 [i_7] [i_7] [i_7] [i_7] [i_7])))) : (((/* implicit */unsigned long long int) arr_40 [i_7] [i_7] [i_7] [i_7]))));
    }
    var_39 = -378765546;
}
