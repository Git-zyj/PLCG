/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242478
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
    var_11 = ((/* implicit */short) var_1);
    var_12 = ((/* implicit */long long int) (~((~(var_3)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) ((long long int) arr_6 [i_0] [i_1] [i_2 + 1] [i_3]));
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) arr_5 [i_0]))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_0] [i_1] [(_Bool)1] [i_2 - 1] [9LL] [i_3] [6ULL])))))));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (-(12038891131695023462ULL)))))) | (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) 33554431U)) ? (6407852942014528154ULL) : (1272916542458784944ULL)))))));
                            }
                        } 
                    } 
                } 
                var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) max((var_2), (arr_12 [i_0] [i_0] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) ((unsigned short) ((signed char) arr_3 [i_0]))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), (arr_6 [i_0] [i_1] [16LL] [i_0])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)4733))))) : (arr_4 [i_0 - 1] [i_0 + 1] [i_0])))) ? (((/* implicit */long long int) max((((arr_5 [i_0]) ? (((/* implicit */int) var_4)) : (var_10))), ((-(((/* implicit */int) var_1))))))) : (((long long int) arr_5 [i_1]))));
                var_19 = ((/* implicit */short) max((((/* implicit */int) arr_5 [i_0])), (max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [(_Bool)1] [i_1])))), (((/* implicit */int) ((unsigned char) arr_1 [i_1] [i_0])))))));
            }
        } 
    } 
}
