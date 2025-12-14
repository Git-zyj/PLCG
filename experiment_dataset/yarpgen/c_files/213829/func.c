/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213829
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) (short)0)) - (((/* implicit */int) (signed char)125))));
    var_15 &= ((/* implicit */long long int) (signed char)-70);
    var_16 += ((/* implicit */_Bool) min((((((((/* implicit */int) ((signed char) (signed char)-19))) + (2147483647))) >> ((((~(((/* implicit */int) (short)8713)))) + (8745))))), (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) (~(((((((/* implicit */int) var_6)) >= (((/* implicit */int) var_10)))) ? (((((/* implicit */_Bool) 256347781U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1621925861U)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) || (((/* implicit */_Bool) (signed char)-32))))))))));
        var_17 |= ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) max(((signed char)62), (((/* implicit */signed char) arr_0 [i_0 - 1] [(_Bool)1]))))) : (((1587030151) >> (((/* implicit */int) arr_0 [i_0 - 1] [8U]))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_11 [i_3] [i_1] [i_1] = ((/* implicit */_Bool) max((((int) arr_8 [i_1])), (((/* implicit */int) (signed char)-72))));
                    /* LoopSeq 1 */
                    for (short i_4 = 3; i_4 < 21; i_4 += 2) 
                    {
                        arr_14 [i_2] [i_3] [i_1] = ((/* implicit */int) ((signed char) (-((~(((/* implicit */int) (short)8482)))))));
                        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) <= (2147483621))))));
                    }
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((long long int) (signed char)86)))))));
                }
            } 
        } 
        var_20 = (i_1 % 2 == 0) ? (((/* implicit */short) max((max((4969499867028164263LL), (((/* implicit */long long int) ((_Bool) (_Bool)0))))), (((/* implicit */long long int) (+(((((/* implicit */int) arr_0 [i_1] [i_1])) >> (((arr_1 [i_1]) - (1562180651))))))))))) : (((/* implicit */short) max((max((4969499867028164263LL), (((/* implicit */long long int) ((_Bool) (_Bool)0))))), (((/* implicit */long long int) (+(((((/* implicit */int) arr_0 [i_1] [i_1])) >> (((((arr_1 [i_1]) + (1562180651))) - (200121645)))))))))));
    }
}
