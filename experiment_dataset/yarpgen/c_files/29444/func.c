/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29444
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
    var_10 = ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_4);
        arr_3 [2] |= ((/* implicit */signed char) (_Bool)1);
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            arr_8 [18LL] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((+(var_6))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_5)))))) / (((/* implicit */int) var_9))));
            var_11 = min((((/* implicit */int) ((arr_5 [i_2 - 1]) >= ((+(arr_4 [i_1])))))), (((((/* implicit */_Bool) (+(arr_4 [i_1])))) ? ((+(((/* implicit */int) (unsigned short)12356)))) : (((/* implicit */int) (short)-14479)))));
            arr_9 [i_1] = ((/* implicit */int) 742026290U);
            var_12 = ((/* implicit */int) ((signed char) ((signed char) arr_6 [i_2 - 1])));
        }
        arr_10 [i_1] = min((((/* implicit */unsigned int) ((signed char) var_0))), (((((/* implicit */unsigned int) 1893956309)) / (742026290U))));
    }
}
