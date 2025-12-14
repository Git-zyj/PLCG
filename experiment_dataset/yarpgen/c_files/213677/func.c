/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213677
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) max((((12448596188968507701ULL) * (16318516312552146141ULL))), (((/* implicit */unsigned long long int) arr_5 [i_1])))));
                        var_19 = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)39581))))) >= (4272912630089837129LL)));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 2; i_4 < 22; i_4 += 3) 
                    {
                        var_20 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_1 - 2]))));
                        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)15))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1406707522)) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) (unsigned short)15))));
                        var_23 = ((((/* implicit */long long int) ((((/* implicit */_Bool) 2985574406105110923LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [(unsigned short)15] [i_2] [i_1] [(short)9]))))) - (arr_1 [i_0] [i_1]));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 23; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_24 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((unsigned short)65521), (((/* implicit */unsigned short) arr_22 [i_6] [i_5] [i_2] [i_1] [i_0]))))), (min((max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2])), (arr_7 [i_0]))), (((/* implicit */unsigned long long int) min(((short)13639), (((/* implicit */short) (signed char)103)))))))));
                                var_25 = ((unsigned long long int) arr_14 [i_1] [i_5 + 1] [i_5 + 1] [i_5 + 1]);
                                var_26 = ((/* implicit */unsigned int) (-(((((/* implicit */int) min(((unsigned short)19), (((/* implicit */unsigned short) arr_10 [i_1]))))) % (((/* implicit */int) (short)-32764))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 2) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_27 -= 14122222916526295894ULL;
                                var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) min(((unsigned short)19), (((/* implicit */unsigned short) (_Bool)1))))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)38134))))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [(signed char)18] [i_0] [(signed char)18] [(signed char)18] [i_0] [i_0])))));
                            }
                        } 
                    } 
                    var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */short) (_Bool)1))))) ? ((~(arr_23 [i_2] [i_2] [i_2] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_2] [i_1] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)15)))) == (((/* implicit */int) (unsigned short)65521)))))) : (min((arr_9 [i_0] [i_1] [i_1]), (((((/* implicit */_Bool) (short)-7183)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_2] [i_2] [(short)19] [23U] [10ULL] [10ULL]))) : (5129336799693411505LL)))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned int) var_18);
    var_32 += ((/* implicit */_Bool) (-(min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) (unsigned short)65506)) ? (((/* implicit */int) (short)-13652)) : (((/* implicit */int) var_0))))))));
}
