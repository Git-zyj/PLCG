/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206144
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
    var_20 = ((/* implicit */signed char) (short)16147);
    var_21 = ((/* implicit */unsigned char) var_7);
    var_22 = ((/* implicit */int) max(((_Bool)1), (var_6)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) max((((var_9) & (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-111)) || (((/* implicit */_Bool) max(((unsigned short)17437), (((/* implicit */unsigned short) (_Bool)1))))))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (926286927U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0])))) : (((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_8)))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((((((/* implicit */int) ((((/* implicit */_Bool) 926286932U)) || (arr_0 [i_0])))) % (((/* implicit */int) ((-11) >= (((/* implicit */int) (signed char)-116))))))), ((-(((/* implicit */int) (unsigned short)48098)))))))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_25 = (-((~(((/* implicit */int) min(((_Bool)1), (var_6)))))));
        var_26 = ((/* implicit */int) ((1358081227) >= (((/* implicit */int) (unsigned short)25054))));
        var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)242))));
    }
}
