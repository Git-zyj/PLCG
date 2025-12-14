/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23810
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [4LL] = ((/* implicit */unsigned short) min((((/* implicit */short) ((((/* implicit */_Bool) (short)-15316)) || (((/* implicit */_Bool) 14995239087677593864ULL))))), (arr_0 [i_0])));
                var_20 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_2 [i_1 + 1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((max((((unsigned int) var_16)), (((/* implicit */unsigned int) ((((/* implicit */int) var_18)) > (((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 17863887805009250363ULL)) ? (17050478035328715764ULL) : (3451504986031957752ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0)))))))));
}
