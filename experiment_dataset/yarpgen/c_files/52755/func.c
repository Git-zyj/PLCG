/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52755
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_4)))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_1))))), (var_4))) : ((-(var_3)))));
    var_12 = ((/* implicit */unsigned short) var_3);
    var_13 = ((/* implicit */int) ((3919546907U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [(unsigned short)15] [(unsigned short)15] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) var_0))), (arr_3 [i_2] [i_1] [i_0])))) ? (var_10) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((var_10) >= (var_4)))), (arr_8 [i_2] [i_2]))))));
                    arr_10 [i_0] [i_0] [i_2] [(short)3] = ((/* implicit */short) ((_Bool) min((((/* implicit */unsigned int) var_0)), (0U))));
                    var_14 = ((/* implicit */int) (((!(((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9LL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206)))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 4294967290U)) ? (8485616781832181524LL) : (((/* implicit */long long int) 4294967281U))))));
                }
            } 
        } 
    } 
}
