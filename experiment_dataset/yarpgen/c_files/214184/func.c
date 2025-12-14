/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214184
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
    var_20 *= ((/* implicit */unsigned short) ((unsigned int) var_13));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((var_7) - (304216696342555925LL))))), (((/* implicit */int) var_6))))) ? (-562003518) : (var_3)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [(_Bool)1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) ((-562003518) >= (-562003518)))));
                            arr_13 [i_3] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_7 [(unsigned short)12] [i_1 - 1] [i_3]);
                            var_22 = ((/* implicit */unsigned char) var_6);
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)45))));
            }
        } 
    } 
}
