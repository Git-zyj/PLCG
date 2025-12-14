/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192391
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
    var_19 = var_0;
    var_20 = ((/* implicit */unsigned short) max((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((unsigned char) 1589263901))))), (((/* implicit */int) max(((signed char)103), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)6)) || (((/* implicit */_Bool) var_12))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29))) != (18014397972611072ULL))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))), (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))), (((/* implicit */int) var_3)))))));
    }
    var_23 -= max((((-1589263902) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))), (((((/* implicit */int) var_9)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
    var_24 &= ((var_12) < (((((/* implicit */_Bool) ((((var_7) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-115)) + (160)))))) ? (var_12) : (var_6))));
}
