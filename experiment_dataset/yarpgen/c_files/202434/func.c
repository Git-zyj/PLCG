/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202434
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)25757)), (11374687147264771716ULL)));
    var_20 = ((/* implicit */int) ((((/* implicit */int) ((min((var_4), (((/* implicit */long long int) (_Bool)1)))) == (((/* implicit */long long int) ((/* implicit */int) ((1517524622031803332LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))) > (((/* implicit */int) ((max((((/* implicit */unsigned long long int) 1962712825U)), (var_9))) == (((/* implicit */unsigned long long int) min((0LL), (((/* implicit */long long int) (_Bool)1))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_21 &= ((/* implicit */signed char) max((4374602308253662855LL), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (2050160251))))));
                    arr_9 [i_0 - 1] [i_0 - 1] [(signed char)1] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */int) var_17)) == (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [3LL])))), (((((/* implicit */int) ((((/* implicit */int) (signed char)100)) == (((/* implicit */int) arr_1 [i_1] [i_1]))))) < (((/* implicit */int) min(((unsigned short)23721), (((/* implicit */unsigned short) arr_1 [i_1 - 1] [i_1 - 1])))))))));
                    var_22 *= ((/* implicit */unsigned long long int) max((max((-114241444), (((/* implicit */int) (signed char)-40)))), (((((/* implicit */int) arr_5 [i_0] [i_1 + 3])) + (var_3)))));
                }
            } 
        } 
    } 
}
