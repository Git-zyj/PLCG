/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196861
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_13 = ((unsigned char) (_Bool)1);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_14 += ((long long int) ((((/* implicit */int) arr_11 [i_2] [i_1] [i_3])) % (((/* implicit */int) (_Bool)1))));
                            var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (-6058274221420270739LL) : (var_8))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned char) (unsigned char)158)))))));
                            arr_13 [i_0] [i_2] [i_2] [i_2] = ((_Bool) max((((long long int) var_7)), (((((/* implicit */_Bool) var_10)) ? (-6058274221420270739LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                            var_16 = var_12;
                            arr_14 [i_3] [i_1] [i_2] [i_1] [i_0] = ((_Bool) min((((/* implicit */unsigned char) var_4)), ((unsigned char)255)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 += (unsigned char)255;
}
