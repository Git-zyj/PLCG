/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216367
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
    var_12 = ((/* implicit */long long int) var_7);
    var_13 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_1)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) -846290242)) : (8236476858532568215LL))) : (((/* implicit */long long int) ((/* implicit */int) max((var_7), ((signed char)-53))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((min((((/* implicit */long long int) 524287U)), (((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (arr_4 [i_1]) : (((/* implicit */long long int) 33554432)))))) != (((((/* implicit */_Bool) max((4294443009U), (((/* implicit */unsigned int) arr_1 [i_2]))))) ? (((((/* implicit */_Bool) arr_5 [i_2 - 1])) ? (-4LL) : (((/* implicit */long long int) 4294443003U)))) : (var_5)))));
                    var_14 = ((/* implicit */signed char) 524293U);
                }
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-8113)) : (((/* implicit */int) ((((/* implicit */_Bool) (+(144115188075855871LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_15 [i_0 - 3] [i_0] [i_4 - 1]), (arr_15 [i_0 - 3] [i_0] [i_4 - 2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (4294443003U) : (min((((/* implicit */unsigned int) (_Bool)1)), (4294443008U))))))));
                            arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 2]))) : (arr_12 [i_0])))) ? (((((/* implicit */_Bool) arr_12 [i_0])) ? (min((arr_9 [i_0]), (arr_7 [i_4 - 2] [i_1] [i_3]))) : (((var_0) % (((/* implicit */long long int) 175506003U)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_11 [i_0])) + (var_6)))) ? (4294443008U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
