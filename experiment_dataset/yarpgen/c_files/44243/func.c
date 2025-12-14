/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44243
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_10 = ((/* implicit */unsigned char) arr_1 [i_0 - 1]);
                        var_11 = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_3]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 10; i_4 += 1) 
        {
            for (long long int i_5 = 2; i_5 < 10; i_5 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((unsigned int) arr_9 [i_0 - 1] [(signed char)9] [i_4 - 1] [i_5 + 1]));
                    var_13 = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1])) ^ (((/* implicit */int) arr_13 [(_Bool)1] [i_4] [(_Bool)1])))));
                    var_14 = ((/* implicit */signed char) ((var_1) & (((/* implicit */unsigned long long int) arr_0 [i_0 - 2] [i_5 - 1]))));
                }
            } 
        } 
        var_15 += ((signed char) arr_5 [i_0 + 3] [i_0 - 2] [i_0 - 1]);
    }
    var_16 = ((/* implicit */unsigned char) max(((~(var_6))), (((/* implicit */unsigned int) max((var_4), (((/* implicit */unsigned char) ((signed char) var_2))))))));
}
