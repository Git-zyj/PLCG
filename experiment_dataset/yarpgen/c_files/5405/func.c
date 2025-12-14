/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5405
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_10 [i_0 - 1] [8ULL] [i_2] = ((/* implicit */unsigned long long int) (+(1359463493U)));
                    arr_11 [0ULL] [i_1] [i_1] = 17126770665704235224ULL;
                    arr_12 [6ULL] [9] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) var_4)), ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_1])) && ((_Bool)1))))))));
                    arr_13 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (signed char)-10))) + (((arr_9 [i_1] [i_2 - 1] [i_2] [i_2]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [12ULL] [i_2 - 1] [i_2] [i_2]))))));
                    arr_14 [i_1] [i_2] = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) ((var_0) << (((17690181338472336460ULL) - (17690181338472336458ULL)))))) ? (((/* implicit */unsigned long long int) -512670784)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 810778245U)) : (1319973408005316397ULL))))) : (var_0)));
}
