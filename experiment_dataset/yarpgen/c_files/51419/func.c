/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51419
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((unsigned short) (signed char)39)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned short) ((2822461490231998463ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [(short)5] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)206)) / (min((2115020824), (-2147483621))))) << (((((/* implicit */int) (unsigned short)1852)) - (1828)))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (arr_2 [i_0] [i_1] [0ULL])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)9454)) ? (629733367) : (((/* implicit */int) (unsigned short)44044))))) : (max((((/* implicit */long long int) (unsigned char)206)), (4874728012698879263LL)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))), (max((arr_0 [i_0] [9LL]), (arr_0 [i_0] [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -2752868818469907076LL)))))));
            }
        } 
    } 
}
