/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238565
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_0 [i_1 - 1])))) >= (((((/* implicit */int) arr_0 [i_1 + 1])) | (((/* implicit */int) arr_0 [i_1 + 1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        var_11 |= ((/* implicit */_Bool) var_0);
                        var_12 = ((/* implicit */unsigned short) arr_0 [i_0]);
                    }
                }
            } 
        } 
    } 
    var_13 = (_Bool)0;
    var_14 = ((/* implicit */long long int) (signed char)-57);
}
