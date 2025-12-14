/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216346
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
    var_17 = ((/* implicit */long long int) (signed char)-32);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((((/* implicit */_Bool) ((((unsigned int) (short)-32751)) << (((arr_0 [i_0]) - (6841722755845482216LL)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_8))))) : (arr_0 [i_0]));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))) || (((/* implicit */_Bool) 0ULL)))))));
    }
    for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_7 [i_1] [(unsigned char)4]))));
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (-(((/* implicit */int) min((arr_3 [(_Bool)1]), (((/* implicit */unsigned short) min((((/* implicit */short) var_2)), (arr_2 [i_1]))))))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            arr_11 [18U] |= arr_2 [i_1 + 1];
            arr_12 [i_1] [i_1] = ((/* implicit */short) ((arr_9 [i_1 - 1] [i_1 - 1] [i_1]) < (((/* implicit */unsigned long long int) arr_10 [i_1] [i_3] [i_3]))));
        }
        var_22 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((-296894653714615139LL) & (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))), (0LL)));
    }
    for (unsigned long long int i_4 = 2; i_4 < 7; i_4 += 2) 
    {
        var_23 = ((/* implicit */long long int) arr_14 [i_4] [i_4]);
        var_24 = ((/* implicit */unsigned long long int) (!(((_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_4 - 1] [i_4])) ? (1792224887) : ((-2147483647 - 1)))))));
    }
    var_25 |= var_16;
}
