/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221277
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
    for (signed char i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */short) (+(((/* implicit */int) var_2))));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!((_Bool)0))))));
                }
            } 
        } 
        arr_10 [13ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)98)) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) ((signed char) (short)3594)))))));
    }
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_15 = ((/* implicit */short) arr_0 [i_3] [i_3]);
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) arr_7 [i_3] [8] [i_3]);
    }
    var_16 = ((/* implicit */int) ((unsigned char) 11525862529291191892ULL));
}
