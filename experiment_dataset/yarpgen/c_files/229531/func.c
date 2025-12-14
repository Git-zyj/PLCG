/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229531
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
    var_20 = ((/* implicit */unsigned char) var_14);
    var_21 = ((/* implicit */unsigned short) (~((((((-(5738494536791893786LL))) + (9223372036854775807LL))) << (((((unsigned int) var_11)) - (2346340239U)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */long long int) (+(arr_2 [i_0])))) ^ (arr_1 [i_0]))) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) ((int) max((arr_3 [i_0 - 3]), (arr_3 [i_2]))));
                            var_23 = ((/* implicit */int) var_19);
                            var_24 += ((/* implicit */unsigned long long int) ((((_Bool) arr_9 [i_3] [i_0 - 1] [i_0] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) (unsigned short)4983))))))) : (((((/* implicit */_Bool) (+(arr_2 [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_1] [i_1] [i_1]))) : (2394190894U)))) : ((~(arr_9 [i_1] [i_1] [i_2] [i_3])))))));
                            var_25 = ((/* implicit */_Bool) arr_8 [i_3] [i_0] [i_3] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) var_6);
}
