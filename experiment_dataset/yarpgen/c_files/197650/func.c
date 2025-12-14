/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197650
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
    var_16 = ((/* implicit */_Bool) 1233730816U);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned short) (+(arr_1 [i_0 - 2])));
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -14LL)) ? (((/* implicit */long long int) 1279789088)) : (arr_0 [i_0] [i_0])))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        arr_3 [i_0] [i_0] &= ((/* implicit */_Bool) (-(((((/* implicit */long long int) var_7)) / (arr_0 [i_0] [i_0])))));
        var_18 = (-(var_12));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (1279789088)));
        arr_7 [i_1] = ((/* implicit */_Bool) (unsigned short)59712);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_8 [i_2])));
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            for (int i_4 = 2; i_4 < 18; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) -772841577589441422LL);
                                var_20 = ((/* implicit */unsigned int) 772841577589441421LL);
                                var_21 = ((/* implicit */int) (+(((((/* implicit */_Bool) -1279789088)) ? (2338699138U) : (((/* implicit */unsigned int) 1279789088))))));
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */unsigned int) (+(((0) & (((/* implicit */int) (_Bool)1))))));
                    var_23 ^= ((/* implicit */int) (-(arr_10 [i_2])));
                }
            } 
        } 
    }
    var_24 = ((min((max((var_13), (((/* implicit */long long int) 20U)))), (((/* implicit */long long int) ((unsigned int) 1073741824U))))) + (min((((/* implicit */long long int) max((var_12), (((/* implicit */unsigned int) (_Bool)1))))), ((-9223372036854775807LL - 1LL)))));
    var_25 -= ((/* implicit */unsigned short) var_12);
    var_26 *= ((/* implicit */unsigned short) (((+(((var_3) >> (((((/* implicit */int) var_4)) - (11929))))))) % (var_10)));
}
