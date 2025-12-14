/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242898
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)23264)))) : (((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_14 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_2 [(unsigned short)3] [i_1]), (((/* implicit */unsigned short) arr_1 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_0 [(signed char)19]) : (((/* implicit */int) arr_6 [i_0] [i_0]))))) ? (arr_0 [i_2]) : ((-(((/* implicit */int) arr_5 [i_0] [i_0]))))))));
                    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_0]))))));
                    arr_9 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)42272);
                    arr_10 [i_1] [5ULL] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(var_5)))) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) arr_6 [(signed char)18] [i_0])))) > ((~(arr_0 [i_2])))));
                    var_16 = ((long long int) 18446744073709551615ULL);
                }
            } 
        } 
    } 
}
