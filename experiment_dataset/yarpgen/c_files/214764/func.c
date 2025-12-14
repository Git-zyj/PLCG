/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214764
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
    var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_17 = ((/* implicit */signed char) ((short) ((((((/* implicit */_Bool) (signed char)123)) ? (var_1) : (((/* implicit */unsigned long long int) var_2)))) << (((var_1) - (16879316156529142456ULL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_10 [i_0] [i_0] [i_0] [i_0] = min((11500907775929876049ULL), (((/* implicit */unsigned long long int) ((signed char) arr_6 [i_0] [1ULL] [i_1] [i_0]))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) arr_2 [i_0] [i_1])) * (((/* implicit */int) arr_2 [i_0] [i_3])))) : (min(((+(((/* implicit */int) (signed char)113)))), (((/* implicit */int) arr_3 [i_0] [i_0] [i_3]))))));
                            }
                        } 
                    } 
                } 
                arr_11 [1ULL] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)107)) ^ (((/* implicit */int) (signed char)126)))), (((((/* implicit */_Bool) -7358975209127091637LL)) ? (((((/* implicit */_Bool) -7358975209127091636LL)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (unsigned short)13916))))));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_2 [i_5] [i_5]);
                    var_20 = ((/* implicit */long long int) max((((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) * (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), ((-(max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_5] [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_8 [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_6 + 2]))))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 7358975209127091619LL)) & (max((((/* implicit */unsigned long long int) (signed char)5)), (arr_7 [i_5] [i_1] [i_1] [i_6] [i_7 - 1] [i_0])))));
                            }
                        } 
                    } 
                    arr_19 [i_1] = (~(((/* implicit */int) ((signed char) -7358975209127091651LL))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) max((arr_9 [i_5] [i_5] [i_5] [i_5] [5U]), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) || (((/* implicit */_Bool) max((((-7358975209127091635LL) / (-7358975209127091661LL))), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_5] [i_5])))))));
                }
            }
        } 
    } 
}
