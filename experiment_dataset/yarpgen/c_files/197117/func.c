/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197117
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
    var_16 = ((/* implicit */unsigned long long int) ((unsigned short) var_11));
    var_17 = var_11;
    var_18 = min((-8623145552041802935LL), (-1LL));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_19 = 4864628613768108859LL;
                    arr_8 [i_0 + 3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((3713666645767348994LL), (((/* implicit */long long int) min((arr_4 [i_2]), (arr_4 [i_1])))))) <= (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) var_11)) ? (4503599627370496LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                }
            } 
        } 
    } 
}
