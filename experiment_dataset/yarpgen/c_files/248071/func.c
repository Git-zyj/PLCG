/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248071
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(var_3)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32752)))))))) ? (max((max((((/* implicit */unsigned long long int) var_4)), (2377082165083912922ULL))), (((/* implicit */unsigned long long int) (-(var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [3] [i_0])))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 ^= ((/* implicit */unsigned long long int) arr_9 [(signed char)6]);
                        arr_11 [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned short) var_4);
                    }
                } 
            } 
        }
    }
}
