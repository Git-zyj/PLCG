/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215340
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
    var_12 = ((/* implicit */unsigned short) (+(var_10)));
    var_13 = min((((4591901907444275461ULL) * (((/* implicit */unsigned long long int) (+(var_6)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ ((+(((/* implicit */int) var_7))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [(signed char)1] [(signed char)13] [8LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4591901907444275461ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))) : (13854842166265276144ULL)));
                    var_14 = ((/* implicit */unsigned long long int) arr_3 [(signed char)10]);
                    var_15 &= max((((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0 + 2])) ? ((~(13854842166265276157ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1]))))), (((/* implicit */unsigned long long int) var_6)));
                }
            } 
        } 
    } 
}
