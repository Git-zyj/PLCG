/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196874
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
    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((unsigned char) (_Bool)1)), ((unsigned char)138))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2591004378U)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2 + 4] [i_2 + 2])) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_2 - 2] [i_2 + 1]))))) : ((~(1531899190U)))));
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-11913))))) > (((1ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
}
