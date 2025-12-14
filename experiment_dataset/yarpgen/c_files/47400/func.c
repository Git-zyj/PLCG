/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47400
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
    var_12 = ((min((var_4), (var_6))) || (((/* implicit */_Bool) -3516206986786905656LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    var_13 = 3516206986786905660LL;
                    var_14 *= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) min((3516206986786905668LL), (((/* implicit */long long int) var_2)))))) == (((/* implicit */int) var_2))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_15 ^= ((/* implicit */_Bool) var_10);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((min((var_8), ((_Bool)1))) ? (var_11) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))) : (((min((65535LL), (3516206986786905655LL))) & (((long long int) (_Bool)1))))));
                    var_17 ^= arr_4 [i_1];
                }
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_1] [i_0] [i_4] = ((long long int) (!((_Bool)1)));
                    arr_15 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((var_10) >= (var_3))) ? (262143LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */long long int) ((arr_12 [i_0] [(_Bool)1] [i_5]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_0] [12LL] [i_0] [i_0]))))) != (-7819792023763462321LL)))));
                    arr_18 [(_Bool)1] [i_0] = ((/* implicit */long long int) ((((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_11))) > (((long long int) arr_0 [i_1]))));
                    arr_19 [i_0] = ((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_0]);
                }
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min(((+(arr_9 [i_0] [i_1] [i_0] [i_1]))), (((/* implicit */long long int) (_Bool)1)))))));
            }
        } 
    } 
}
