/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238541
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
    var_13 = ((/* implicit */int) ((unsigned short) ((var_10) << (((((3282990308380659069ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (58282417731167ULL))))));
    var_14 = ((/* implicit */signed char) var_11);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) (+(var_2)))) ? (-1045261619) : (var_5));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) * (min((((/* implicit */unsigned long long int) var_1)), (3879839682972689154ULL)))));
                    var_16 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_1] [(unsigned char)11] [i_1])), (3282990308380659078ULL)))) && (((/* implicit */_Bool) (signed char)43))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (signed char)-35);
    var_18 &= ((/* implicit */unsigned short) (-(((((/* implicit */long long int) (+(var_5)))) / (min((var_2), (((/* implicit */long long int) var_6))))))));
}
