/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50796
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
    var_20 = var_6;
    var_21 = (-(((var_1) ^ (((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */int) arr_0 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((unsigned short) (short)-14754)), (((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned char) var_9)), ((unsigned char)214))))))))));
                            var_24 -= ((/* implicit */unsigned long long int) (+(782236326)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */int) var_5);
}
