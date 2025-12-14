/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44753
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_5 [i_0] = ((/* implicit */short) min((max((arr_3 [i_0]), (((/* implicit */unsigned int) var_13)))), (((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            var_18 = ((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1]);
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)31570)) ^ (((/* implicit */int) max((max((arr_1 [i_1] [i_0]), ((unsigned char)180))), ((unsigned char)180))))));
            var_20 = ((unsigned char) (unsigned char)134);
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 10; i_2 += 3) 
    {
        arr_12 [i_2] = var_1;
        var_21 = ((/* implicit */unsigned int) (unsigned char)121);
    }
    var_22 = ((/* implicit */long long int) ((max((((/* implicit */long long int) max(((unsigned char)133), ((unsigned char)75)))), (var_4))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180)))));
}
