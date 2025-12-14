/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34202
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2] [i_2 + 1] = ((/* implicit */short) (-(((/* implicit */int) ((short) 3454897429U)))));
                    var_10 = ((/* implicit */short) ((signed char) ((short) arr_6 [i_0 + 2] [i_0] [i_2])));
                    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(1313518875U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-95)) ? (2981448420U) : (2981448420U))))));
                    arr_11 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) max((max((((/* implicit */unsigned short) var_0)), (var_4))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2]))))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (long long int i_3 = 2; i_3 < 16; i_3 += 4) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) max((((((/* implicit */int) var_5)) & ((~(arr_15 [i_4] [i_5]))))), (max((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)39)))), ((~(((/* implicit */int) var_3))))))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_14 = ((/* implicit */short) min((((/* implicit */int) var_2)), (max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_13 [i_6] [i_4 - 1]))))));
                        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((5847347922531761917ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                        arr_23 [i_5] [i_5] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4 - 1] [i_4 - 1] [i_3 - 2] [i_3 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_21 [i_4 - 1] [i_4 - 1] [i_3 - 2] [i_3 - 2]))))) ? (((/* implicit */int) ((signed char) arr_21 [i_4 - 1] [i_4 - 1] [i_3 - 1] [i_3 - 2]))) : (((/* implicit */int) arr_21 [i_4 - 1] [i_4 - 1] [i_3 + 1] [i_3 - 1]))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(1313518875U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1313518875U)));
                        var_17 = ((/* implicit */unsigned long long int) var_4);
                    }
                    arr_24 [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_4 - 1] [i_4])) - (((/* implicit */int) max((arr_21 [i_3 + 1] [(signed char)5] [i_4] [i_5]), (var_5))))))) ? (((/* implicit */int) ((5146298765218111090ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16480)))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                }
            } 
        } 
    } 
}
