/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4056
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
    var_10 = ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */unsigned int) var_9);
                        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (_Bool)1))))) ? (((4262500715639380400ULL) << (((14184243358070171216ULL) - (14184243358070171193ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_0 - 1]), (arr_4 [i_0 + 1]))))));
                    }
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1] [i_1] [2LL])))))));
                        arr_10 [i_1] [11ULL] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [(_Bool)1]))))) && (((/* implicit */_Bool) ((14184243358070171217ULL) + (var_4)))))) && ((!(((/* implicit */_Bool) (short)12400))))));
                    }
                    var_14 ^= ((/* implicit */long long int) ((var_0) << (((var_0) - (50578592)))));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) max((max((15674611952776015895ULL), (((/* implicit */unsigned long long int) arr_4 [i_0 + 1])))), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
        arr_12 [i_0] [i_0] &= ((/* implicit */unsigned short) min((((/* implicit */int) arr_0 [i_0 + 1])), (((((/* implicit */int) var_3)) + (((/* implicit */int) ((signed char) var_8)))))));
    }
    var_15 = ((/* implicit */long long int) var_7);
}
