/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19093
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_0 [(_Bool)1])))))), (((((/* implicit */_Bool) (+(arr_2 [i_1] [(_Bool)1])))) ? (((unsigned long long int) arr_2 [i_1] [i_1])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2965621179U)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (short)-1)))))))));
                var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))), (((((/* implicit */_Bool) -1320769089)) ? (5057632753060396845ULL) : (5057632753060396845ULL)))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5))))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))));
}
