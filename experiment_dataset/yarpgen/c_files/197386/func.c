/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197386
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (arr_0 [(short)0])))) || (((/* implicit */_Bool) var_2))));
        arr_4 [7LL] = ((/* implicit */unsigned char) ((unsigned short) arr_1 [i_0]));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) max(((signed char)116), (((/* implicit */signed char) (_Bool)1)))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_11 [(short)7] [i_1] = ((/* implicit */signed char) ((long long int) 0LL));
            var_15 = ((/* implicit */int) (+(arr_10 [i_2] [i_1])));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_16 &= ((/* implicit */signed char) var_11);
            arr_14 [i_1] [i_1] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_3]) ? (min((arr_12 [i_1] [i_1]), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (arr_1 [i_1])));
        }
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_7))));
    }
}
