/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210255
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
    var_14 = ((/* implicit */unsigned long long int) ((long long int) var_2));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_15 &= ((/* implicit */int) ((short) (~(1282451873546205141ULL))));
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_1 [i_0]))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */short) arr_4 [i_1] [i_1] [i_0])), (arr_2 [i_0])))) : (((int) arr_4 [i_0] [i_0] [i_0])))), (min(((-2147483647 - 1)), (((/* implicit */int) (!(((/* implicit */_Bool) (short)16827)))))))));
        }
        var_17 = ((((/* implicit */_Bool) (short)16827)) ? (((((/* implicit */_Bool) 17164292200163346502ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)71)), ((unsigned short)6113))))) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46666))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    arr_13 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_4 [i_2 + 2] [i_2 + 2] [i_3]);
                    /* LoopSeq 1 */
                    for (long long int i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        arr_16 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) 8597609421905324486LL)))));
                            var_19 = ((/* implicit */short) -837560556);
                        }
                        for (unsigned int i_6 = 3; i_6 < 16; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_0] [i_3] [i_0] [i_6] = ((/* implicit */long long int) (-(((unsigned int) ((short) arr_5 [i_0] [i_6])))));
                            var_20 ^= ((((/* implicit */_Bool) arr_20 [i_0] [i_2] [i_0] [i_4] [i_6])) ? (667946656U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16827))));
                        }
                    }
                    arr_22 [i_0] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2 + 2]))))) ? (((arr_0 [i_0]) + (((/* implicit */unsigned long long int) arr_20 [i_0] [i_3] [i_3] [i_3] [i_2 + 1])))) : (((/* implicit */unsigned long long int) (+(arr_17 [i_0] [i_2 + 1] [i_2 + 1] [i_3] [i_2 + 2]))))));
                }
            } 
        } 
    }
}
