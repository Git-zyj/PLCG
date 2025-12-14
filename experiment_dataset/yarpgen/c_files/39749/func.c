/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39749
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
    var_18 = (-(((/* implicit */int) (signed char)59)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_1 + 2] [i_0] [i_1]))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) var_5))))));
                arr_7 [i_1] [i_1 + 1] = max((min((((/* implicit */unsigned int) (signed char)-53)), (arr_2 [i_1 + 1]))), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_10 [4ULL] [i_2] = ((/* implicit */signed char) (+(2776933574U)));
        var_19 = ((/* implicit */int) ((((arr_4 [i_2] [8ULL] [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40)))));
        var_20 *= ((/* implicit */_Bool) (unsigned char)53);
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((int) (signed char)52));
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1986003177597308163LL))));
    }
    /* vectorizable */
    for (short i_3 = 4; i_3 < 18; i_3 += 4) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (((~(arr_15 [i_3 - 2] [i_3 - 3]))) == (((/* implicit */long long int) ((((/* implicit */int) (signed char)52)) - (((/* implicit */int) (signed char)-53))))))))));
        arr_17 [i_3] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (signed char)21)) - (((/* implicit */int) (unsigned short)33627)))) : ((-(((/* implicit */int) arr_14 [i_3] [(unsigned short)4]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                {
                    arr_22 [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) arr_18 [i_4] [i_5]);
                    arr_23 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (0U)));
                    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_16 [i_3] [i_5]))))));
                }
            } 
        } 
        arr_24 [i_3 - 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_16))));
    }
}
