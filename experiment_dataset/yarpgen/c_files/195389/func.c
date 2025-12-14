/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195389
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [17U])) && (((/* implicit */_Bool) ((long long int) var_0)))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (long long int i_3 = 4; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_11 [12LL] [8U] [4] [i_1] = (+(var_6));
                            arr_12 [(_Bool)1] [(_Bool)1] [i_2] [i_1] = arr_7 [i_1];
                        }
                    } 
                } 
                var_13 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) arr_0 [i_0])));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) -5517960849877462111LL);
}
