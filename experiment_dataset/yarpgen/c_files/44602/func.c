/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44602
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_14 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)0)), (-8134257022519301822LL)));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_1] [i_2 - 1] [i_1])) ? (((min((14920976817050697110ULL), (3525767256658854485ULL))) ^ ((-(arr_5 [i_1]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1])))))));
                        var_15 = ((/* implicit */int) min((var_15), (((int) 14920976817050697131ULL))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_16 = ((/* implicit */unsigned int) ((unsigned short) (_Bool)0));
    }
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+(((unsigned int) -2)))))));
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
    var_19 ^= (+(((/* implicit */int) var_2)));
    var_20 = ((/* implicit */short) var_13);
}
