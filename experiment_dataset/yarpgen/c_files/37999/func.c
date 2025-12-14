/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37999
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) min(((short)-15023), ((short)15023)))), (((((/* implicit */int) (short)15019)) - (((/* implicit */int) (_Bool)1))))));
                    var_15 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 715383082))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 4294967293U))))));
}
