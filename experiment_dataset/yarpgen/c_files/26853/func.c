/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26853
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
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (signed char)127)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) (~(arr_2 [i_0] [i_0])));
                            var_22 -= ((/* implicit */unsigned long long int) ((_Bool) 13781717975495221631ULL));
                            var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)214))));
                            var_24 = max((arr_6 [i_0] [i_0] [(unsigned char)0] [i_3]), (((((13177962840550094677ULL) & (68719476735ULL))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) (signed char)-43);
            }
        } 
    } 
}
