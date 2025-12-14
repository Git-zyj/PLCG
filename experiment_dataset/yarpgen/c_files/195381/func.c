/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195381
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
    var_11 = ((/* implicit */unsigned char) ((short) ((unsigned int) min((((/* implicit */short) var_1)), ((short)384)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_3 [0U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_8)) ? (1438235770U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23619))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_9 [i_1] = var_5;
            var_13 = ((/* implicit */int) (unsigned char)247);
        }
        for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            var_14 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_11 [i_1])) % (((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+((-2147483647 - 1)))))));
                arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(arr_6 [i_4])));
                var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) / ((~(((/* implicit */int) (unsigned char)67))))));
            }
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_14 [i_3]))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            arr_19 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [3])) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_5] [i_1])) ? (arr_18 [i_1] [(short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11893))))) : (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_5]))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) 1040384)) - (arr_14 [i_1])));
            var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_6 [i_1])))) ? (arr_18 [i_1] [i_1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32029)))))));
        }
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3848290697216LL)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_12 [i_1] [i_1] [(unsigned short)11])))))));
        arr_20 [i_1] = ((/* implicit */unsigned long long int) var_10);
    }
}
