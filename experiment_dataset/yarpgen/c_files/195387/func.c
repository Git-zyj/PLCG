/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195387
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
    var_14 = ((/* implicit */long long int) min((var_14), (min((min((min((-4286513711554756818LL), (((/* implicit */long long int) (short)(-32767 - 1))))), (((/* implicit */long long int) var_1)))), (4286513711554756807LL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_15 += ((/* implicit */short) (signed char)-117);
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) -4286513711554756831LL)) ? (((/* implicit */unsigned long long int) min((max((-4286513711554756818LL), (((/* implicit */long long int) (signed char)-126)))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)14158))))))) : ((~(7875005465266686427ULL)))));
                    var_16 ^= ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)114)), ((unsigned short)51372)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))), ((~(2672277183U)))));
}
