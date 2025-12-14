/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24065
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
    var_10 = ((/* implicit */short) 1361086091);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [17ULL] [i_1] [17ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) - (((((int) arr_1 [i_0])) | (((/* implicit */int) ((unsigned short) var_6)))))));
                var_11 = min((((/* implicit */long long int) (unsigned char)32)), (arr_4 [i_0] [i_1]));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((max((arr_3 [i_1 + 1] [i_1 - 2] [i_1 - 2]), (arr_3 [i_1 - 2] [i_1 - 1] [i_1 - 1]))) ? (((/* implicit */int) (short)15158)) : ((+(((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1]))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((max((arr_3 [i_1 - 3] [i_1 - 2] [i_1 - 3]), (arr_3 [i_1] [i_1 - 4] [i_1 + 2]))) ? (((arr_3 [i_0] [i_1 - 1] [i_1 - 3]) ? (((/* implicit */int) (unsigned short)6304)) : (((/* implicit */int) (short)127)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-15169)) : (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_1 + 2]))))));
                arr_8 [i_0] [i_1] [i_1 - 3] = ((/* implicit */_Bool) 5368569509482773929ULL);
            }
        } 
    } 
}
