/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54301
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_0))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-14590), ((short)0)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-19)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = arr_1 [i_0];
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) (short)32767)) < (2147483647))))))) ? (min((((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_1 [i_0]))))), (arr_0 [i_0] [i_0]))) : ((((-(((/* implicit */int) (short)-20929)))) & ((-2147483647 - 1))))));
            arr_4 [i_0] [i_0] [i_1] = (((((_Bool)1) ? (((/* implicit */int) (short)4)) : (845858708))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1]))))));
        }
    }
}
