/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207797
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
    var_15 = ((0ULL) % (((/* implicit */unsigned long long int) 33554431U)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) != (arr_7 [i_0 + 1] [i_0] [i_0] [i_2 + 3]))))) == ((-(0ULL)))));
                    var_17 = ((/* implicit */short) (unsigned char)248);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) : (((/* implicit */int) (signed char)102))));
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) ((unsigned int) arr_2 [i_0 - 1]));
        var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0]))));
        var_20 = 2774153077916351744LL;
    }
    var_21 = 4294967295U;
    var_22 = ((/* implicit */long long int) min((((((/* implicit */int) (!(((/* implicit */_Bool) 0U))))) & (((/* implicit */int) ((((/* implicit */int) var_13)) != (var_10)))))), (((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (var_0)))))));
}
