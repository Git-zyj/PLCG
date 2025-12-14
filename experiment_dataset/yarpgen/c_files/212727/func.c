/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212727
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
    var_18 = ((/* implicit */unsigned int) (+(max((2147483647), (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [1]))))), (4027437898U))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    arr_8 [i_0] [i_2] [3] [i_0] = min((min((((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_0] [i_1])) >= (((/* implicit */int) (signed char)0))))), (((unsigned short) var_8)))), (((/* implicit */unsigned short) var_15)));
                    var_20 = ((/* implicit */unsigned int) (-(arr_3 [i_2] [i_1 - 3])));
                    arr_9 [i_0] [i_1 - 1] [i_0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_0])) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_7)))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 2] [i_0])) ? (arr_6 [i_0] [i_1 - 4] [i_0]) : (arr_6 [i_0] [i_1 - 3] [i_3 - 1])));
                    arr_13 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_10)) | (((/* implicit */int) arr_1 [i_0]))))));
                }
                arr_14 [(short)12] [(short)12] |= ((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) arr_7 [(signed char)14] [i_1]))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max(((-(2147483647))), (((/* implicit */int) (_Bool)0))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned char)153)))) ? (((int) 6291456)) : (min((var_6), (((/* implicit */int) var_17))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (_Bool)1)))))) : (((/* implicit */int) (unsigned short)61630))));
}
