/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192856
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
    var_16 = ((/* implicit */unsigned short) var_0);
    var_17 = ((/* implicit */unsigned char) (short)32750);
    var_18 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_3))));
                var_20 = ((/* implicit */_Bool) (+(arr_2 [i_0] [i_0])));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-37)))))))) >= (((/* implicit */int) arr_6 [i_0] [i_1] [(_Bool)1] [i_2]))));
                            var_22 += ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) var_7)) >> (((arr_2 [i_0] [i_0]) - (1837505764))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
