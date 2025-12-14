/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249318
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_1])) | (-324039202))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) arr_6 [i_1]);
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -324039202)) ? (-324039225) : (324039202)));
                            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 324039197)) ? (-513370170) : (-513370172)))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((unsigned int) var_1)))))) ? (513370170) : (513370171));
                            var_21 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_1])))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */int) var_8))))) ? (((long long int) -513370170)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_14);
}
