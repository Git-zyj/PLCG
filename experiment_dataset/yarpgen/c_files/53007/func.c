/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53007
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85))) * (15922048365191137243ULL)));
                    arr_8 [i_0] [i_0] [3ULL] = max((max((arr_6 [i_1] [i_1] [i_2] [i_1]), (((arr_6 [i_0] [(signed char)6] [i_0] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5708))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0] [i_2]))) >> ((((+(((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned char)9])))) - (1617)))))));
                }
            } 
        } 
    } 
    var_14 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84))) >= (5147539891192559265ULL)))))) + (var_7)));
}
