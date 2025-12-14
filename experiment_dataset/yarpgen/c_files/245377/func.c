/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245377
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
    var_20 = var_3;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (unsigned short)59043);
                    var_22 = ((((/* implicit */_Bool) arr_2 [(unsigned char)3])) ? (((long long int) arr_0 [i_1 + 1])) : (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0]))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        var_23 = ((/* implicit */short) (unsigned short)45481);
                        var_24 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_11 [i_0])))))))));
                        arr_12 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_5);
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 10835176184323240779ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3232835446000318251LL)));
                    }
                }
            } 
        } 
    } 
}
