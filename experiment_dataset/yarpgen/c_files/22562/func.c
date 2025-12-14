/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22562
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
    var_11 |= ((/* implicit */unsigned short) (signed char)96);
    var_12 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)114))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_8))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_13 += ((/* implicit */int) arr_3 [i_1]);
                    var_14 -= ((/* implicit */unsigned int) var_1);
                    var_15 *= ((/* implicit */int) (~(var_8)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((arr_5 [i_3] [i_3] [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))))))));
        arr_10 [i_3] = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)173));
    }
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_13 [i_4] &= ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_4] [i_4])), ((unsigned short)37267)))) + (((/* implicit */int) arr_11 [i_4] [i_4]))));
        var_17 *= ((/* implicit */unsigned char) arr_12 [i_4]);
        var_18 *= ((/* implicit */unsigned int) ((var_1) >> (((((/* implicit */int) var_3)) + (90)))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 24; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) var_6);
                    var_20 ^= ((/* implicit */int) arr_15 [(_Bool)1] [(_Bool)1] [24LL]);
                }
            } 
        } 
    }
}
