/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26640
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) ((long long int) min((((/* implicit */unsigned long long int) 4459107273629227637LL)), (var_10))));
                    arr_7 [i_0] [i_2] = min((7369464826777985949ULL), (7491088592688389378ULL));
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            {
                var_19 = ((((((((/* implicit */_Bool) arr_6 [i_3 + 1])) ? (11077279246931565667ULL) : (((/* implicit */unsigned long long int) arr_10 [i_3])))) % ((-(7369464826777985949ULL))))) >> (((((arr_12 [i_3 - 2] [i_3 - 2]) + (((/* implicit */long long int) 0)))) + (4539889727822911761LL))));
                var_20 -= ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (((((/* implicit */_Bool) var_2)) ? (510154018249412223ULL) : (962072674304ULL))) : (11077279246931565668ULL)));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3 + 1])) && (((/* implicit */_Bool) -2335804047944324878LL))))))));
            }
        } 
    } 
}
