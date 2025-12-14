/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20885
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((max((var_3), (((/* implicit */int) var_11)))) / (((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) var_6))))))) + (((long long int) (short)2136))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((((long long int) arr_0 [i_0 + 2] [i_1 + 2])), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) 16768326425948276393ULL))))))));
                        var_21 = ((/* implicit */short) (-(((/* implicit */int) ((short) ((((/* implicit */int) arr_4 [(unsigned short)0] [i_2])) == (((/* implicit */int) var_11))))))));
                        arr_12 [6LL] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)4]))))), ((+(((/* implicit */int) var_8))))));
                    }
                    arr_13 [i_0] [i_1] [i_2] = var_7;
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)27))));
}
