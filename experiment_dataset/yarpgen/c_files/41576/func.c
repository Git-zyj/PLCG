/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41576
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1355316602U)) ? (3470169520429814227ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100)))))) ? (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 9223372036854775807LL))))), (var_12)))) : (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_15 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_1] [(signed char)6])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [15U])) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_2])) ? (((/* implicit */int) max((arr_5 [i_0] [i_1] [i_2 + 1]), (((/* implicit */unsigned short) (signed char)-114))))) : (var_13))) : (var_2)));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((unsigned int) (_Bool)1)))));
                    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -184759706))));
                    var_18 *= ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) var_0)))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_2 + 3])) ? (arr_4 [i_2 + 3] [i_2 + 3] [i_0]) : (((((/* implicit */_Bool) 918095502U)) ? (var_11) : (((/* implicit */int) arr_6 [i_0] [i_0] [(signed char)3]))))))));
                }
            } 
        } 
    } 
}
