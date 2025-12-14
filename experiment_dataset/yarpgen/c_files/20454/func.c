/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20454
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
    var_10 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((unsigned short) -299902557)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 482681040U)))))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((1400681753U) != (var_0))))) < ((-(var_4))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (299902575) : (((/* implicit */int) (_Bool)1))))) ? (((int) var_8)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (67108864U))) : (1723923895U)));
                arr_5 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((_Bool) (unsigned short)39908))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_1])) : (5999426984295570893ULL)))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) (_Bool)1);
}
