/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208988
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
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_14)) ? (-2) : (-2))), (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_14)))))))), (min((((/* implicit */unsigned int) var_8)), (var_9)))));
    var_16 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_8 [i_1] [i_0] = ((/* implicit */short) ((arr_3 [i_0] [i_0]) >= (((/* implicit */int) ((unsigned short) (short)-3929)))));
                var_17 = ((/* implicit */signed char) max((((min((((/* implicit */int) arr_5 [i_1] [i_0])), (var_8))) - (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_1] [i_0])))))), ((+(var_8)))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_1] [i_0])), (((((/* implicit */_Bool) (unsigned short)35176)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)0))))))) ? ((-(max((2435282811U), (((/* implicit */unsigned int) (short)29)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (13))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_0])) >= (((/* implicit */int) ((_Bool) (unsigned char)91))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((int) ((long long int) var_8)))));
                            arr_14 [i_3] [i_3 + 1] [i_2] [i_0] [i_1] [i_0] = (-(-351148082));
                            var_20 += ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) % (((-13) + (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned char) var_9);
}
