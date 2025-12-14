/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19970
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_5))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] [(unsigned char)18] = ((/* implicit */signed char) (~((+(((/* implicit */int) var_16))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0] [i_0 + 2])), (arr_2 [i_0 - 3])))) ? (((((/* implicit */_Bool) 797241242U)) ? (((/* implicit */unsigned long long int) -284372665446482192LL)) : (max((12626085550425232932ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 - 1])))))));
        arr_6 [i_0] [i_0] = ((/* implicit */short) (signed char)31);
        arr_7 [(unsigned char)22] [8U] |= ((/* implicit */short) 797241242U);
        arr_8 [i_0] = ((/* implicit */short) var_6);
    }
    var_19 &= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-105))));
    var_20 &= ((/* implicit */unsigned char) var_8);
}
