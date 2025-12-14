/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207078
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
    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)127))));
    var_21 = ((/* implicit */long long int) ((unsigned char) ((long long int) ((1LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127)))))));
    var_22 = ((/* implicit */signed char) var_6);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_6 [(short)5] [(unsigned char)4] [i_1] [i_1 - 2])), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_12))) : (703854183037961981ULL))))))));
                                var_24 = ((/* implicit */unsigned short) arr_12 [i_4] [i_0] [i_2] [(unsigned char)0] [(unsigned char)0] [i_0]);
                                var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / ((~(((/* implicit */int) var_6))))))), (arr_3 [i_1 - 1] [i_1 - 1])));
                            }
                        } 
                    } 
                    var_26 = var_3;
                    var_27 = ((/* implicit */short) ((long long int) (-(((/* implicit */int) var_18)))));
                }
            } 
        } 
    } 
}
