/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202300
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
    var_12 = ((/* implicit */long long int) (~(12228793431422303349ULL)));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (min((12228793431422303360ULL), (12228793431422303349ULL)))));
                    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)113)), ((-(((/* implicit */int) arr_1 [i_1]))))));
                    var_15 = ((min((12228793431422303349ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])))) > (((/* implicit */unsigned long long int) arr_0 [i_0])));
                    var_16 = ((/* implicit */signed char) (+((~(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((unsigned char) var_0));
    var_18 = ((/* implicit */signed char) ((var_8) + (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_9)) : (4294967295U))) >> (((((((/* implicit */_Bool) 2082359360U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44))) : (2082359345U))) - (4294967252U)))))));
}
