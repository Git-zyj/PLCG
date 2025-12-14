/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236224
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)167))))))) >> (((((/* implicit */int) var_0)) + (25304)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_12)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_13 [4ULL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)81)) ? (2946529220U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) (unsigned short)44096)))));
                            arr_14 [i_0] [i_1] [(short)1] [i_0] = ((/* implicit */unsigned char) max((var_8), (((/* implicit */unsigned int) (-(max((-244839191), (((/* implicit */int) (signed char)119)))))))));
                            arr_15 [i_1] [1LL] [i_2] [i_2] [1LL] [i_1] = ((/* implicit */_Bool) arr_7 [i_3 - 3] [i_2] [i_1] [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    arr_19 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0]);
                    arr_20 [i_1] [i_1] = ((/* implicit */unsigned short) var_1);
                    arr_21 [i_0] [i_1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (min((((/* implicit */unsigned int) arr_12 [(unsigned char)6] [1ULL] [i_1 - 3] [i_1 - 3] [1ULL] [i_4])), (82838069U))) : (((unsigned int) arr_5 [i_1] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_5 [i_1] [i_1 + 1])))) : (max((((((/* implicit */_Bool) 15843674672324813514ULL)) ? (var_13) : (arr_8 [i_0] [i_1] [i_4]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))))));
                }
                for (unsigned short i_5 = 1; i_5 < 14; i_5 += 2) 
                {
                    var_16 = min((((unsigned long long int) (short)-8594)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)101))))));
                    arr_24 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_18 [i_1 + 1] [i_1])))) ? (min((arr_9 [i_1]), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) min((arr_22 [4ULL] [i_1] [i_5 + 1] [i_5 + 1]), (max((((/* implicit */unsigned int) var_0)), (var_8))))))));
                }
                var_17 = ((/* implicit */_Bool) var_2);
                arr_25 [i_0] [(unsigned char)2] &= (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50410)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_2))))) : (-601335176)))));
}
