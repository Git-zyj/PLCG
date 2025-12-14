/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40221
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
    var_18 = var_5;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_2] [i_2]);
                            arr_8 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) != (((/* implicit */int) (unsigned short)65535)))) ? (max((arr_4 [i_0] [i_1] [i_1] [i_3]), (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) var_0))))))) : (((/* implicit */int) (unsigned short)32396))));
                        }
                    } 
                } 
                var_20 *= ((/* implicit */short) max((((/* implicit */int) max((arr_1 [i_0]), ((unsigned char)103)))), ((+(((/* implicit */int) var_0))))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 3469132744837035071LL))));
            }
        } 
    } 
}
