/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246780
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
    var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1772571326)) ? ((-(((((/* implicit */_Bool) 450195946U)) ? (-3281833171402162584LL) : (((/* implicit */long long int) -1041796455)))))) : (((/* implicit */long long int) var_0))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_1] [i_0])) & (((((/* implicit */long long int) ((/* implicit */int) (signed char)9))) % (4025480645119581031LL))))))));
                var_15 = ((/* implicit */short) (-(3281833171402162591LL)));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3298534883328ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))) : (4294967292U)))) || (((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 3281833171402162582LL))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((-1729541492), (((/* implicit */int) arr_6 [i_1] [i_0] [i_0]))))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-2074)) : (var_8)))))))));
                var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) 1140513729U)))))), (((8386298136483057104LL) % (((/* implicit */long long int) -2109723517))))));
                var_17 = ((/* implicit */unsigned char) (!(((arr_5 [i_0] [i_0] [i_1]) != (((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
}
