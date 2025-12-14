/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237309
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */short) min((var_5), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) arr_0 [i_1]))))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                arr_9 [(unsigned short)7] [(unsigned char)13] [i_2] [i_2] = ((/* implicit */unsigned short) (-(arr_4 [i_0 - 3])));
                var_16 = ((((/* implicit */int) var_1)) >= (((/* implicit */int) ((((/* implicit */int) arr_3 [(unsigned short)14] [i_2] [i_2])) != (((/* implicit */int) (unsigned short)3))))));
            }
        }
        var_17 -= ((/* implicit */unsigned short) arr_4 [i_0]);
        var_18 += (((!(((/* implicit */_Bool) max((1623205955U), (((/* implicit */unsigned int) arr_3 [i_0] [i_0 - 4] [i_0]))))))) ? (2671761337U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)31843))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) var_10);
                        arr_17 [i_3] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)252)) >> (((((/* implicit */int) arr_0 [i_0 + 1])) >> (((((/* implicit */int) var_5)) - (55829)))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_6 = 4; i_6 < 14; i_6 += 3) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */unsigned int) (short)5899);
        arr_23 [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) (-(((/* implicit */int) arr_1 [(unsigned short)3] [i_6]))))));
    }
    var_20 = var_2;
}
