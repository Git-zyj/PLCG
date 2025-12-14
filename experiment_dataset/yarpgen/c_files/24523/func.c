/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24523
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
    var_20 = ((/* implicit */long long int) min(((+(((/* implicit */int) (short)30720)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (max((1402765400), (((/* implicit */int) (short)(-32767 - 1))))))))));
    var_21 = ((/* implicit */unsigned int) -1LL);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [9LL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 8007875233080884759LL))))) | ((~(arr_0 [i_0])))));
        arr_3 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((((_Bool)1) ? (var_9) : (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) -1402765411);
        var_22 = ((/* implicit */short) var_12);
    }
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-4))));
}
