/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20180
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((arr_1 [i_0]), (((/* implicit */unsigned char) var_7)))), (((/* implicit */unsigned char) ((signed char) arr_1 [i_0]))))))));
        var_20 -= ((/* implicit */unsigned char) max((((/* implicit */int) var_4)), (max((var_18), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_18)))))))));
    }
    var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) (signed char)15)) : (11385760))) == (((/* implicit */int) (signed char)105))));
}
