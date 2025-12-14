/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38083
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_9))))));
        var_15 |= ((/* implicit */int) var_11);
        arr_2 [7] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) | (var_6)));
        var_16 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (348532061300642629LL));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((5748465983014334386LL) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))) : (((/* implicit */long long int) (-2147483647 - 1)))));
    }
    for (unsigned int i_2 = 1; i_2 < 8; i_2 += 3) 
    {
        var_18 += ((/* implicit */unsigned short) ((unsigned int) ((signed char) var_3)));
        var_19 = ((/* implicit */long long int) 2147483647);
    }
    /* LoopSeq 3 */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483642)) & (2300666407U)))) ? (max((((/* implicit */int) arr_10 [i_3] [i_3])), (-2147483628))) : ((+(((/* implicit */int) arr_10 [i_3] [i_3])))))));
        arr_11 [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_4] [i_4]))));
        arr_15 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_4] [i_4])) : (((/* implicit */int) arr_3 [i_4] [i_4]))));
        arr_16 [i_4] = ((/* implicit */unsigned char) arr_9 [i_4]);
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -2147483642)) ? (((((/* implicit */int) var_1)) / (((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned short) -2147483646)))))));
        arr_19 [i_5] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_17 [i_5]))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_5]))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)50)) == (((/* implicit */int) var_1)))))))));
    }
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_12))));
}
