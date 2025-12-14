/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214877
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((_Bool) 4263832524845696681LL);
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) max((min((var_1), (((/* implicit */unsigned char) (signed char)28)))), (((/* implicit */unsigned char) var_2))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        arr_10 [i_2 - 2] [(signed char)2] = ((/* implicit */signed char) min((var_8), (((/* implicit */int) ((-9129068431876052893LL) == (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
        var_10 = ((/* implicit */long long int) (-(min((281406257233920ULL), (((/* implicit */unsigned long long int) (signed char)-34))))));
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        arr_13 [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) ((((long long int) arr_0 [i_3])) <= (((/* implicit */long long int) ((/* implicit */int) (short)-32766))))))));
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) ((signed char) ((int) ((long long int) arr_3 [i_3]))));
        var_11 = ((/* implicit */int) ((signed char) -9129068431876052893LL));
    }
}
