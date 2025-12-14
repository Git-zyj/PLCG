/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214124
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */short) arr_3 [i_1] [i_0]);
                    var_20 -= (~(((/* implicit */int) (short)32756)));
                    var_21 = ((/* implicit */int) max((var_21), ((~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (1680028326) : (((/* implicit */int) (short)12650))))) ? (((int) arr_4 [i_2])) : (min((arr_3 [10] [i_0]), (-1680028322)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) (-(10)));
    var_23 = min((2100720405), (1680028345));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                {
                    arr_17 [i_5] [i_4] [i_3] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((unsigned short) arr_13 [i_4] [i_4] [i_4]))) ? (((/* implicit */int) ((arr_12 [i_3]) && ((_Bool)1)))) : (max((1680028306), (17))))));
                    var_24 ^= ((int) arr_13 [i_3] [5] [i_5]);
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */int) (unsigned short)4365)) <= (-32))))));
                }
            } 
        } 
    } 
}
