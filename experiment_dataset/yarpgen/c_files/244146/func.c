/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244146
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
    var_10 = var_5;
    var_11 = ((/* implicit */unsigned char) var_4);
    var_12 = ((/* implicit */short) ((unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (unsigned char)235)))), (((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 1666800840U)) : (var_9))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (arr_2 [i_0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((108086391056891904ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (signed char)39)) & (((/* implicit */int) var_0))))))) : (arr_2 [i_0])));
                var_14 = ((/* implicit */short) (-(var_1)));
                var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)59032)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)43)) + (((/* implicit */int) var_5))))) : (max((419220636602767991LL), (((/* implicit */long long int) arr_1 [i_0] [i_1]))))))));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 3]))))) ? (max((((((/* implicit */int) arr_4 [i_0 - 2] [i_1] [i_0 + 4])) & (((/* implicit */int) arr_1 [i_1] [i_0])))), (((/* implicit */int) arr_3 [i_0] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) min((var_7), (((/* implicit */short) var_8)))))))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_0] [i_0 + 4] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))) : (arr_7 [i_0] [i_0] [i_0] [i_0 + 2] [i_4 + 1] [i_4])))) ? (min((((/* implicit */unsigned long long int) var_8)), (arr_7 [i_0] [i_0] [i_0] [i_0 - 2] [i_4 + 1] [i_0 - 2]))) : (arr_7 [i_0 - 1] [i_0 + 2] [i_0] [i_0 - 1] [i_4 + 1] [i_4])));
                                arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_0 + 4]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */short) var_6)), (var_7))), (((/* implicit */short) (unsigned char)255))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 3950943503860414571LL)) : (max((var_1), (var_2))))) : (var_9)));
}
