/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232066
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) -3159028755186571430LL)), (var_7))) << (((min((((((/* implicit */long long int) 3436554619U)) & (6308006048004497552LL))), (((/* implicit */long long int) 1638161111)))) - (1146134538LL)))));
                var_11 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) var_1))), (max((((/* implicit */long long int) (unsigned char)79)), (5332575990971844569LL)))));
                arr_6 [i_0] = ((/* implicit */long long int) ((((9323598803110284686ULL) << (((17465099340119336074ULL) - (17465099340119336068ULL))))) << (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (7813420793574854460ULL)))))))));
            }
        } 
    } 
    var_12 = ((((((/* implicit */unsigned long long int) max((7946263860517502250LL), (((/* implicit */long long int) var_0))))) != (((((/* implicit */_Bool) -8194300082841797383LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26683))) : (9123145270599266930ULL))))) ? (981644733590215531ULL) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */long long int) -1259506322)) % (4755851503926689124LL))))));
}
