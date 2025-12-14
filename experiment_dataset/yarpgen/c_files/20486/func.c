/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20486
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    arr_8 [i_1] [i_1] [i_1] &= ((/* implicit */int) (~(var_9)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-8339398140813154521LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (((-2147483647 - 1)) == (((/* implicit */int) arr_7 [i_2 + 2] [i_2 - 1] [i_2 + 2])))))) : (min(((-9223372036854775807LL - 1LL)), (((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */long long int) arr_11 [i_0] [i_2] [i_0] [i_4])) : ((-9223372036854775807LL - 1LL))))))));
                                arr_14 [i_0] [i_2] [i_0] [5] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))));
                                arr_15 [i_0] [i_1] [i_2 - 1] [i_3] [i_0] = ((/* implicit */unsigned short) max((max((arr_3 [i_3] [i_1] [i_0]), (arr_3 [i_0] [14LL] [i_2]))), (((((/* implicit */_Bool) arr_3 [i_3] [i_2 - 1] [i_1])) ? (arr_3 [i_1] [i_1] [i_1]) : (arr_3 [i_4] [i_4] [i_4])))));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */long long int) (-(min((arr_11 [i_0] [i_0] [i_1] [i_1]), (((/* implicit */int) var_11))))));
                arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_6 [i_0] [i_1] [5] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_0])))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)96)), (9223372036854775807LL)))))))));
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((arr_1 [i_0] [i_0]) ^ (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_1])))), (((/* implicit */long long int) arr_12 [i_1] [i_1] [i_0] [i_0] [i_1]))))) ? (((((/* implicit */_Bool) var_10)) ? (var_3) : (arr_12 [i_0] [i_0] [(unsigned char)12] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1])) | (((/* implicit */int) var_15)))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned short) ((long long int) (-(((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((signed char) var_9))) ? (max((var_5), (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))))) << (((((/* implicit */int) var_7)) - (63677)))));
}
