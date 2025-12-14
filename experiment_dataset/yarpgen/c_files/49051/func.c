/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49051
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */int) ((arr_2 [i_0]) >> (((min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_1])))) - (37101ULL)))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))) * (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_5))))))) ? (((((/* implicit */_Bool) (unsigned short)17270)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) (signed char)-109)))))));
                arr_6 [i_0] [i_0] [(signed char)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)7905))) : (-4566105770557371820LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [3ULL] [i_0]))) : (((((/* implicit */_Bool) 725872655075262393LL)) ? (((((/* implicit */_Bool) 2266686262U)) ? (((/* implicit */long long int) 2147483647)) : (-5595726253779418034LL))) : (((/* implicit */long long int) max((((/* implicit */int) (_Bool)0)), ((-2147483647 - 1)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_8);
    var_15 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)125))))), (((((/* implicit */_Bool) (unsigned short)4095)) ? (5595726253779418036LL) : (((/* implicit */long long int) 2147483647))))))));
}
