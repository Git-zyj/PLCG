/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242859
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
    var_11 = var_0;
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    var_12 = (+(arr_2 [i_0] [i_2]));
                    var_13 = ((long long int) (-(3913640329995436070LL)));
                    var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) && (((((/* implicit */_Bool) ((2054118891864548114LL) & (-2391065617844259019LL)))) || (((/* implicit */_Bool) ((3913640329995436087LL) >> (((arr_2 [i_0] [i_0]) - (3604724052316979044LL))))))))));
                    var_15 ^= ((max((arr_7 [19LL] [i_0 - 1] [i_2 + 1]), (arr_7 [i_0] [13LL] [i_2 + 1]))) & (max((5726045189523137125LL), (arr_0 [i_0 - 2] [i_2 - 2]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((8796025913344LL) > (-7980492355285308945LL))))));
}
