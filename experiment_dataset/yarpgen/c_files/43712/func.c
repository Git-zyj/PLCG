/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43712
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_18)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            var_21 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (20ULL)));
            var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (signed char)-32))) ? (arr_2 [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (109534961)))));
            var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((/* implicit */int) var_2))));
            arr_4 [i_1] = (unsigned short)34848;
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((arr_2 [i_1 + 1] [i_1 - 1] [i_1 + 1]) <= (((/* implicit */int) arr_3 [i_1 + 4] [i_1 - 1])))))));
        }
        var_25 ^= ((/* implicit */long long int) arr_3 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        for (unsigned int i_3 = 4; i_3 < 21; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)104)) ? (109534961) : (((/* implicit */int) (unsigned short)11065))))) ? (min((((/* implicit */long long int) var_8)), (arr_7 [i_3] [13LL]))) : (((/* implicit */long long int) ((((arr_6 [i_2]) == (((/* implicit */unsigned long long int) var_7)))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) arr_11 [i_2] [i_2 - 1] [i_3 - 3] [i_3 - 3])))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                            {
                                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((-109534962) / (((/* implicit */int) var_12))))) : (arr_17 [19LL] [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 3])));
                                arr_18 [i_2] [i_3 - 2] [i_4] [i_3] [i_3 - 2] = ((/* implicit */unsigned int) arr_13 [(short)19] [i_4] [i_5] [i_3]);
                                var_28 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_2 + 2] [i_3] [i_4] [i_5] [i_5] [i_6])) || (((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3 + 1]))));
                            }
                            arr_19 [6U] [i_3] [i_3] [i_3] = ((/* implicit */long long int) var_8);
                            arr_20 [i_2 - 1] [i_3] [i_4] [i_4] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)107))));
                            arr_21 [i_3] [i_4] = ((/* implicit */short) var_2);
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_2] [i_3 - 3] [i_2] [i_3])) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2 - 1])) : (((/* implicit */int) var_12)))), ((~(((/* implicit */int) var_0))))))));
                arr_22 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3]))) : (var_11))))));
                var_30 = ((/* implicit */long long int) var_5);
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (short)-11035)))))) ? ((-(((((/* implicit */_Bool) var_7)) ? (arr_10 [i_2] [1LL] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_3 + 1] [i_3])) ? (arr_7 [i_3] [i_3]) : (((/* implicit */long long int) arr_5 [i_2])))) <= (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) var_5);
}
