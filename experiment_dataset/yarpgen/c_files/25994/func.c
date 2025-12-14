/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25994
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
    var_19 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (unsigned short)39175))))), (((((/* implicit */_Bool) var_18)) ? (var_13) : (((/* implicit */int) (short)-22324))))))));
    var_20 = (+(((/* implicit */int) (_Bool)1)));
    var_21 = ((/* implicit */_Bool) max((max((((((/* implicit */int) (unsigned char)162)) | (((/* implicit */int) var_8)))), (var_6))), (((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_8)))) | (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [(_Bool)1] [i_2] [(short)2] = ((/* implicit */int) min((arr_1 [i_0] [(_Bool)1]), (((/* implicit */unsigned int) ((signed char) (+(arr_9 [i_2] [i_1] [i_1] [(short)15])))))));
                    arr_11 [(unsigned char)6] [i_1] = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_6 [i_0 + 1] [i_1 + 4] [i_2] [i_0 + 1])))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2147483631)), (15469006023304238815ULL)))) ? (max((arr_4 [i_1] [(_Bool)1]), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2])) >= (((/* implicit */int) arr_8 [(signed char)2] [i_1 + 1] [i_1] [(signed char)2])))))))));
                }
            } 
        } 
    } 
}
