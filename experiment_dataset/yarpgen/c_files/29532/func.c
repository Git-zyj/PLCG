/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29532
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_20 = min((((signed char) arr_2 [i_0] [i_0 - 2])), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            var_21 &= ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_1 + 1]));
            var_22 = ((/* implicit */int) arr_6 [i_1]);
        }
    }
    /* LoopSeq 4 */
    for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
    {
        var_23 = arr_8 [i_2];
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2])) ? ((+(((/* implicit */int) var_6)))) : (arr_2 [12LL] [i_2]))))));
        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((3907451270U), (((/* implicit */unsigned int) var_8)))))));
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (min((arr_7 [i_3]), (((/* implicit */int) arr_12 [i_3])))) : (((/* implicit */int) ((short) arr_5 [i_3])))));
        var_27 += ((/* implicit */unsigned long long int) arr_5 [i_3]);
    }
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_28 += ((((unsigned long long int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) arr_9 [i_4]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_4] [i_4]), (arr_1 [(unsigned char)0] [i_4]))))));
        var_29 = ((/* implicit */signed char) ((arr_13 [i_4]) + (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4])) / (arr_2 [i_4] [9U])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_4]) >= (((/* implicit */unsigned int) arr_7 [i_4])))))) : ((+(var_10)))))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    var_30 = ((/* implicit */signed char) ((unsigned long long int) arr_18 [i_5]));
                    var_31 = ((/* implicit */long long int) ((arr_22 [i_5] [i_5] [i_5] [i_5]) == (arr_2 [i_5] [i_5])));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) arr_18 [18U])) : (((/* implicit */int) arr_18 [i_7]))));
                }
            } 
        } 
        var_33 = ((/* implicit */long long int) var_8);
    }
}
