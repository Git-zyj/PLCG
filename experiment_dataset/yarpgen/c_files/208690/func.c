/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208690
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
    var_10 = ((/* implicit */unsigned long long int) (signed char)-10);
    var_11 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_6)))))));
    var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */signed char) var_4)), (var_0))))), (var_3)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) arr_0 [(unsigned short)11] [i_0]);
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_6 [8U] = ((/* implicit */unsigned long long int) 3776254020U);
        arr_7 [i_1] = (!(((/* implicit */_Bool) var_0)));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)4)) | (((/* implicit */int) (signed char)127))));
    }
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_6)), (((min((((/* implicit */unsigned long long int) var_7)), (var_3))) >> (((var_1) - (15745518604972566099ULL)))))));
}
