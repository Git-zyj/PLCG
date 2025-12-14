/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238828
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
    var_11 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [8LL] [i_0] = ((/* implicit */long long int) max(((unsigned short)0), (((/* implicit */unsigned short) (short)31718))));
                            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1] [i_3])) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)60)))))));
                            var_13 -= ((/* implicit */unsigned long long int) arr_0 [i_3]);
                        }
                    } 
                } 
                var_14 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)31718))));
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((((/* implicit */short) ((signed char) ((((/* implicit */int) (unsigned short)28981)) & (((/* implicit */int) (unsigned char)60)))))), ((short)10791))))));
            }
        } 
    } 
}
