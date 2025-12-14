/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32605
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [3] = min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)0)));
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((max((18446744073709551584ULL), (((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0] [i_0]))))) % (((/* implicit */unsigned long long int) -1497164985515419434LL))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((unsigned short) var_7));
    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)105)), (((long long int) (_Bool)1))));
}
