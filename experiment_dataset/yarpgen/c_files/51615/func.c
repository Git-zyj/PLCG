/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51615
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-24644)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (_Bool)0))));
    var_15 = ((/* implicit */short) 18446744073709551591ULL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_10);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) var_13);
                        var_18 = ((/* implicit */short) var_1);
                        arr_10 [i_0] [i_2] [i_0] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                        var_19 -= ((_Bool) 3559507268342408825LL);
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */_Bool) (-(min((((/* implicit */int) ((unsigned short) var_2))), (((((/* implicit */_Bool) (short)24644)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))))));
}
