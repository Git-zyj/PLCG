/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25936
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
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (var_6) : (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) var_1))))))))) ? (((/* implicit */int) (unsigned short)34956)) : (((((/* implicit */_Bool) arr_0 [i_0 - 4])) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 - 4])))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_7 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)30564)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34952)) ? (((/* implicit */int) (unsigned short)30564)) : (((/* implicit */int) (unsigned short)25)))))))), ((((_Bool)0) ? (((/* implicit */int) (short)-10290)) : (((/* implicit */int) (short)-26232))))));
                    arr_8 [i_1] [i_0] [i_2] [i_0] &= ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)65535)) << (((1046346990) - (1046346987)))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_4 [i_0 - 2])))) | (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (short)10289))))))));
                }
                arr_10 [i_1] = ((/* implicit */unsigned char) 3927661557873184599LL);
            }
        } 
    } 
    var_11 |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) (unsigned short)34971)) ? ((~(var_6))) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4860527639847741789ULL)) ? (((int) 1587180687)) : (((/* implicit */int) (short)20282)))))));
    var_12 = ((/* implicit */unsigned int) var_9);
}
