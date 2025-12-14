/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30407
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_16))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_19 += ((/* implicit */short) ((((/* implicit */unsigned long long int) min(((~(-5547573222533884554LL))), ((~(var_10)))))) >= (min(((~(var_11))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) 1052290242)) : (2376576386460662895ULL)))))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) ((var_10) / (var_0)))) ? (((unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (var_10)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [i_0])), ((((_Bool)1) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_2] [(short)8] = ((/* implicit */unsigned char) var_6);
                                var_21 = ((/* implicit */int) ((signed char) (_Bool)1));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((((18446744073709551598ULL) << (((((/* implicit */int) arr_4 [i_0])) - (115))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        arr_20 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_5] [i_6])) ? (arr_11 [i_1] [i_1] [i_5] [17ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1))))));
                        var_23 += ((/* implicit */signed char) var_10);
                    }
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        arr_23 [i_0 - 3] [i_1] [i_1] [i_0] [i_0] [i_0 + 4] = ((/* implicit */int) (~(var_16)));
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            arr_27 [i_0] [i_5] [i_0] [i_1] [i_8] = ((/* implicit */unsigned short) arr_5 [i_1]);
                            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (var_1))))));
                            var_25 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */unsigned long long int) var_3)) / (var_17))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (min((var_0), (((/* implicit */long long int) arr_14 [i_0 + 4] [i_1] [i_5] [i_1])))))))));
                        }
                    }
                    arr_28 [i_0] [i_1] [i_0] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) var_4)) < (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [i_0])), (var_6)))))))) >= ((+(((((/* implicit */_Bool) arr_6 [(short)4] [(short)4] [i_5])) ? (var_0) : (((/* implicit */long long int) var_5)))))));
                }
            }
        } 
    } 
}
