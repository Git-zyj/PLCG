/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216343
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
    var_12 = ((/* implicit */unsigned short) (+(var_4)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) ((-9223372036854775787LL) % (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned short)9] [i_3])))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_3 [i_4]);
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (short)6149)))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned short)35091))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-23))) : (arr_8 [i_0] [(short)1] [i_1])))))) ? (min((min((((/* implicit */long long int) var_3)), (var_10))), (((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), (var_6)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_8 [i_1] [i_1] [i_1]))))));
                var_16 = ((/* implicit */long long int) ((_Bool) (~(var_4))));
            }
        } 
    } 
}
