/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20216
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_5))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(3795997789U)))) && (((/* implicit */_Bool) var_5))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)9450))));
                            arr_11 [i_3] [i_3] [i_2] [i_1 - 3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (arr_6 [i_0] [i_1 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [17U]))))))) && (((/* implicit */_Bool) (unsigned short)55398))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3795997771U)) ? ((~(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) var_8))))))));
}
