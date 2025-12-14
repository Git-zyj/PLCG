/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21935
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
    var_12 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) min(((unsigned char)229), (((/* implicit */unsigned char) (_Bool)1))))) ? (min((((/* implicit */long long int) var_4)), (var_8))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-5223268030952225094LL))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_1 [i_0] [i_0]) / (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))) ? (min((((/* implicit */unsigned int) arr_0 [(unsigned char)5] [i_0])), (((3286746130U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (arr_1 [i_0] [i_0])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((unsigned long long int) arr_4 [i_0]))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned int i_3 = 4; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_14 [i_3] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((arr_7 [i_0] [i_0]) & (arr_7 [i_3 - 3] [i_3 - 4])));
                        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_3 - 3]))));
                    }
                } 
            } 
        }
        arr_15 [i_0] = max((min((((/* implicit */long long int) arr_4 [i_0])), (var_6))), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0])) / (((/* implicit */int) (_Bool)1))))));
    }
}
