/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191425
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
    var_11 = ((/* implicit */signed char) var_3);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_12 = max((arr_6 [i_0 - 1] [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(-6753465797612985844LL)))) ? (arr_2 [i_0 + 3] [i_0] [i_0]) : (((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (((/* implicit */int) (unsigned char)5)) : (arr_0 [i_0])))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        arr_9 [i_1] [i_1] [14U] [14U] = (~(max((((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2]))))), (((long long int) var_1)))));
                        var_13 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [2U] [2U])) ? (((/* implicit */unsigned long long int) -2219452087193834561LL)) : (663047886598029027ULL)))) ? (-1031819390) : (805306368)));
                        var_14 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-3461)) && (((/* implicit */_Bool) -7755909182743460180LL))))), (max((-3249699084378000324LL), (((/* implicit */long long int) ((805306367) << (((((/* implicit */int) (unsigned char)208)) - (207))))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            arr_14 [10] [i_3] [i_2] [i_2] [i_0] [i_0] [10] &= ((/* implicit */unsigned int) (-(((((arr_11 [i_2 + 2] [i_3] [i_3] [(unsigned char)14] [i_3 + 2] [i_4 + 1] [i_4]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_13 [i_2 - 1] [i_3 + 3] [i_3 + 3] [8LL] [i_3 + 1] [i_4 + 1] [i_4])) - (76)))))));
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((/* implicit */int) arr_13 [i_1] [i_4] [i_3] [i_1] [i_1] [i_0 + 3] [i_0])), (((((/* implicit */_Bool) arr_6 [6] [6])) ? (((/* implicit */int) arr_13 [i_4] [i_4 - 2] [i_0 + 3] [i_2 + 3] [i_0] [i_0 + 3] [i_0])) : (((/* implicit */int) arr_13 [i_4] [i_4 - 2] [i_3 + 2] [i_2 + 3] [i_0] [i_0 + 3] [i_0 + 3])))))))));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((1423484095656318969LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250)))))) ? (max(((~(((/* implicit */int) (short)-3454)))), (max((arr_10 [i_4] [i_1] [i_1] [i_2] [i_0] [i_1] [i_0]), (((/* implicit */int) (unsigned char)3)))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_4 - 1] [i_2 + 1] [i_0 - 1] [i_4 - 1] [i_1] [i_2])) ? (((/* implicit */int) max((arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), (var_9)))) : (((((((/* implicit */int) arr_8 [i_2 + 2] [i_3] [i_2 + 2] [i_1])) + (2147483647))) >> (((49773896U) - (49773887U)))))))));
                        }
                    }
                    var_17 |= ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 529299660U)) && (((/* implicit */_Bool) (unsigned char)0)))))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1 + 1] [i_2] [i_2] [i_0] [i_2] [i_2 + 1])) ? (arr_6 [i_0] [4LL]) : (min((((/* implicit */long long int) arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [2] [i_0])), (arr_1 [(short)2]))))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((/* implicit */long long int) ((signed char) ((int) arr_8 [i_0] [i_1] [i_0] [i_2])))), (((((1899159779) >= (((/* implicit */int) var_5)))) ? (min((arr_1 [i_2 - 1]), (((/* implicit */long long int) (unsigned char)255)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_10 [i_2] [i_2] [i_2] [i_2] [6U] [(unsigned char)6] [i_2])) : (-622328994167421169LL))))))))));
                }
            } 
        } 
    } 
}
