/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244215
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_10 -= ((/* implicit */long long int) -1403515464);
                    var_11 = -1403515464;
                    arr_7 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_2]))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_7)))) <= (((/* implicit */int) ((((/* implicit */int) var_1)) == (2147483647))))));
}
