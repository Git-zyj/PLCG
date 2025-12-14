/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210303
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1818068412881961286ULL))))) == (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))))))) | (min((((/* implicit */long long int) var_4)), (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned int) var_7);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) 234881024U))));
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 15; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    {
                        arr_13 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                        var_13 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */_Bool) 234881031U);
    var_15 = ((/* implicit */unsigned long long int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(144115188074807296LL))) == (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
    var_16 = ((/* implicit */unsigned char) ((var_5) >> (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((4060086271U) == (var_6))))))));
}
