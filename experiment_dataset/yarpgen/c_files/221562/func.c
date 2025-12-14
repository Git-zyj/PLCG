/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221562
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
    var_16 = ((/* implicit */unsigned short) (signed char)-84);
    var_17 = ((/* implicit */unsigned long long int) (unsigned char)3);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
        var_18 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((13835058055282163712ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (max((((/* implicit */long long int) 710419247)), (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)100))) >= (arr_1 [i_0] [i_0])))))))) ? (((((((/* implicit */int) ((signed char) (signed char)-79))) + (2147483647))) << ((((((~(((/* implicit */int) arr_0 [i_0])))) + (50))) - (20))))) : (((((/* implicit */_Bool) (~(-5653911851675469470LL)))) ? (((/* implicit */int) ((unsigned short) (unsigned char)139))) : (((/* implicit */int) ((unsigned char) (unsigned short)58737))))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (signed char)-100))) / (((/* implicit */int) var_1))));
}
