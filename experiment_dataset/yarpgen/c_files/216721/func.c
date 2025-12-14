/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216721
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
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) var_18)))), (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned char)57))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) (short)17532)))))));
                            var_21 = ((unsigned short) (!(arr_3 [(unsigned short)14])));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_0 - 2] [i_0]))))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) (unsigned short)8654)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((var_0) ? (min(((~(((/* implicit */int) (unsigned char)213)))), (-851147925))) : (-1731006389)));
    var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) ((_Bool) var_16))))));
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1731006388)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))))) ? (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)136)) : (1731006388))), (((1731006388) & (((/* implicit */int) (unsigned char)119)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((int) var_19)) : (-1731006361)))));
}
