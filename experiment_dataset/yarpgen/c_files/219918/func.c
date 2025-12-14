/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219918
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
    var_14 = ((/* implicit */signed char) 4780992459245559036LL);
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (17568519118075555690ULL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1])) <= (((/* implicit */int) arr_4 [i_0])))))) > (((((/* implicit */_Bool) arr_2 [17LL] [i_0] [i_0])) ? (2841297051223772727LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) - (((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) (short)-2787)) : (((/* implicit */int) (unsigned short)41328)))));
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!((_Bool)1))))));
                var_17 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((16338152793387262298ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 5413579852159837761ULL)) && (((/* implicit */_Bool) (signed char)-68)))))))))) % (((((/* implicit */_Bool) 67100672U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned char)2] [(unsigned char)2]))) : (5883738176834372594ULL)))));
            }
        } 
    } 
}
