/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28523
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_11 &= ((/* implicit */unsigned long long int) var_0);
                    arr_7 [i_1] = ((arr_1 [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_9)));
                }
            } 
        } 
        var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65532))));
        var_13 = ((/* implicit */unsigned long long int) (~(var_0)));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */_Bool) (-(2061369924)));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 1; i_4 < 23; i_4 += 2) 
        {
            var_14 = ((/* implicit */short) ((_Bool) (+(3059587076U))));
            arr_14 [i_4] = ((((/* implicit */_Bool) arr_2 [i_4 + 1] [i_4 + 1] [i_4])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (3899757404831858346ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46538))) : (arr_5 [i_3] [i_4] [i_4] [i_4])))));
            arr_15 [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) arr_10 [i_3] [i_4 + 1])) : (((/* implicit */int) (unsigned short)45169))));
        }
        for (short i_5 = 1; i_5 < 24; i_5 += 1) 
        {
            var_15 += ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (((/* implicit */int) var_2)))) & (((int) var_7)));
            arr_18 [(short)11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned short)16942)) : (((/* implicit */int) arr_12 [i_5 - 1] [i_3] [i_5]))));
            var_16 *= ((/* implicit */unsigned long long int) ((signed char) var_2));
            arr_19 [i_3] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_3] [i_5 - 1] [i_5] [i_5])) / (((/* implicit */int) (short)2966))));
        }
        arr_20 [i_3] [i_3] = ((((unsigned int) arr_2 [i_3] [i_3] [i_3])) * (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) : (var_0)));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))));
    }
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_5))));
    var_20 = 11U;
}
