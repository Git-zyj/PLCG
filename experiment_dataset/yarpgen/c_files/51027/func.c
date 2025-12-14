/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51027
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
    var_17 = var_14;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) 1121705510);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_19 = ((max((((/* implicit */int) (_Bool)1)), (arr_6 [i_2] [i_1] [(unsigned char)4] [i_2] [i_3]))) << ((+(((((/* implicit */_Bool) (unsigned short)62833)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)62818)))))));
                            var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 12639113757944132453ULL)) || ((_Bool)1)))))), (9ULL)));
                            var_21 = ((/* implicit */_Bool) arr_5 [i_0] [i_2]);
                            var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_3 - 2] [i_3 - 2] [(unsigned char)5]))) ^ (min((arr_1 [(_Bool)1]), (((/* implicit */unsigned long long int) arr_2 [i_0])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((1651900915), (var_11)))) ? ((~(553067706))) : (((/* implicit */int) ((unsigned char) min((((/* implicit */int) var_15)), (879430230)))))));
}
