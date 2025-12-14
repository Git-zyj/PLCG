/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48132
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_14 &= ((/* implicit */short) ((max((0), (((/* implicit */int) var_13)))) >= (max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) >= (arr_2 [i_0] [i_0])))), (max((((/* implicit */int) var_0)), (arr_1 [2LL] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (signed char)127))))));
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) min((-4964817588862197999LL), (((/* implicit */long long int) (_Bool)1)))))));
        arr_4 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) -18)) ? (-3798738246580953817LL) : (-4964817588862197999LL)))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_9 [i_1] |= ((long long int) ((arr_8 [i_1]) ^ (arr_8 [i_1])));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 17; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_16 [i_1] [i_1] [i_1] [3LL] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_7 [i_3]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_2] [i_1]))))))))) | (min((((((/* implicit */_Bool) var_2)) ? (arr_2 [i_2] [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_3] [i_1]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1])))))))));
                    var_16 &= ((/* implicit */unsigned int) (((+(((((/* implicit */int) arr_7 [i_1])) & (((/* implicit */int) var_10)))))) ^ (((((((/* implicit */int) (_Bool)1)) + (arr_1 [i_3] [i_3]))) ^ (((/* implicit */int) ((unsigned char) var_8)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_4 = 1; i_4 < 17; i_4 += 2) 
                    {
                        var_17 = arr_7 [i_1];
                        var_18 = ((/* implicit */short) ((var_6) & (((/* implicit */int) arr_7 [i_4 - 1]))));
                    }
                }
            } 
        } 
    }
    var_19 = ((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) ((_Bool) (-(1721445204U)))))));
}
