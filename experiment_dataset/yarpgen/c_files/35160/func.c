/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35160
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
    var_16 = ((/* implicit */short) ((var_8) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 11894316735205912543ULL))))) >> (((var_12) - (805477802))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) arr_2 [i_0])))));
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_1 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((unsigned long long int) ((long long int) arr_5 [i_1] [i_0] [i_0])))));
            var_19 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 4] [i_1 - 1]))))), (((((/* implicit */_Bool) arr_5 [i_1 - 3] [i_1 - 1] [i_1 - 2])) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 3] [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 4] [i_1 - 1]))))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_3 [i_0]);
            arr_7 [i_0] [i_1] [(signed char)21] = ((/* implicit */int) arr_3 [i_1]);
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 8388592ULL);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((/* implicit */_Bool) max(((~(arr_4 [i_0]))), (((/* implicit */long long int) ((unsigned short) (~(10804763809578766472ULL)))))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_0 [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (_Bool)1)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)1))))))));
        }
        arr_13 [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0]);
    }
}
