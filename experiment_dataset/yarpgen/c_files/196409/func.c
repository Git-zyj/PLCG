/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196409
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_3 [i_1] [i_1] [i_0])) + (min((((((/* implicit */_Bool) 13214086854417775395ULL)) ? (-7098942236835265093LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-21576))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 13214086854417775396ULL)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (signed char)-49)))))))));
                var_18 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))) ? (var_7) : ((~(arr_2 [i_1])))));
                var_19 = ((/* implicit */signed char) -4179382651852684439LL);
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_4))));
}
