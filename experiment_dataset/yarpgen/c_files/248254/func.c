/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248254
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
    var_11 = ((/* implicit */short) ((1282126529U) & (1810779857U)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_12 ^= ((/* implicit */_Bool) arr_0 [(short)8]);
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) & (((/* implicit */int) ((short) 0U)))));
                    arr_6 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))));
                    /* LoopSeq 2 */
                    for (short i_3 = 2; i_3 < 15; i_3 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_3])) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) == (arr_8 [i_3 + 1] [0U] [i_1] [i_0]))))))))))));
                        var_15 = ((/* implicit */signed char) ((arr_1 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))));
                        var_16 = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) ((3012840767U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22)))))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 2; i_4 < 15; i_4 += 4) /* same iter space */
                    {
                        var_17 ^= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) 2961445569U))) >> (((arr_8 [i_4 + 1] [i_4 + 3] [i_4 + 3] [i_4 + 1]) - (567147278U)))));
                        var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */int) arr_12 [i_2])) >> (((((/* implicit */int) arr_12 [i_0])) - (4801)))))));
                    }
                    var_19 = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [(short)4] [i_1] [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_20 = var_6;
    var_21 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)50)))) || (((_Bool) ((signed char) var_0)))));
    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((var_4) != (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))));
}
