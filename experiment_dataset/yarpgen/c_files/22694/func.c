/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22694
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
    var_13 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) max(((unsigned char)157), (((/* implicit */unsigned char) var_9)))))), (var_12)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned int) (+(((var_7) * (((/* implicit */unsigned long long int) (~(2429534878U))))))));
        arr_4 [i_0] = min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) 0ULL)) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        arr_5 [i_0] [i_0] |= ((var_11) ? (max((((/* implicit */int) var_6)), (var_12))) : (((/* implicit */int) arr_2 [i_0])));
        arr_6 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-32761))))) : (3345778808U)));
    }
}
