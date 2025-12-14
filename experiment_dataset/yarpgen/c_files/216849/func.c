/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216849
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
    for (int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [(unsigned short)6] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) (short)-32714)))))));
        arr_3 [i_0] [i_0] = (signed char)-118;
        arr_4 [i_0] = ((/* implicit */long long int) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), ((-(((/* implicit */int) (unsigned char)255))))));
    }
    var_12 = ((/* implicit */unsigned int) var_0);
}
