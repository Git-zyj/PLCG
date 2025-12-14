/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225468
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (short)-18375)), ((unsigned short)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) : (8052230866515790544LL)));
                    var_20 = ((/* implicit */unsigned short) (short)-26343);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) 1501086413);
}
