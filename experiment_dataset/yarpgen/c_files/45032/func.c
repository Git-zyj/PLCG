/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45032
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((8098889721911515931ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54)))))) ? (((/* implicit */int) (short)(-32767 - 1))) : ((~(((/* implicit */int) (unsigned char)31))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [(unsigned char)5])) ? (-4LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-28073))))));
        arr_3 [17] = ((/* implicit */unsigned char) ((signed char) ((8098889721911515946ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4))))));
        var_13 = ((unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0]))));
    }
    for (unsigned char i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) (-(((unsigned long long int) (~(((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1])))))));
        var_14 += ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) ((int) arr_7 [i_1 + 1] [i_1]))))));
        var_15 += ((/* implicit */unsigned int) var_0);
        var_16 += ((/* implicit */short) ((((-470999796115104609LL) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 18; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned long long int) arr_11 [i_2 - 1]);
        var_17 = ((/* implicit */unsigned int) arr_9 [19]);
        /* LoopSeq 1 */
        for (unsigned short i_3 = 2; i_3 < 19; i_3 += 3) 
        {
            var_18 = ((/* implicit */int) var_10);
            arr_16 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (signed char)(-127 - 1));
        }
        var_19 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) (unsigned char)65)))));
    }
    var_21 = ((/* implicit */short) ((unsigned long long int) var_7));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_5)))))) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_1))));
}
