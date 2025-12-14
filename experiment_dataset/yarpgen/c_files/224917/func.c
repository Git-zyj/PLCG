/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224917
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
    var_18 = ((/* implicit */unsigned short) var_5);
    var_19 = ((/* implicit */signed char) var_10);
    var_20 = ((/* implicit */unsigned long long int) ((unsigned short) var_16));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 4; i_3 < 22; i_3 += 1) 
                    {
                        arr_11 [i_1] [(unsigned short)21] [6ULL] [i_3] = ((/* implicit */short) 1101300025);
                        arr_12 [i_1] = ((/* implicit */unsigned long long int) var_10);
                    }
                    arr_13 [i_0] [18ULL] [i_1] [i_2] = min((((((/* implicit */_Bool) ((unsigned char) var_16))) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_2])) : (((/* implicit */int) ((((/* implicit */int) (signed char)108)) < (((/* implicit */int) arr_2 [i_1] [i_1]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-24))))));
                }
            } 
        } 
    } 
}
