/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199288
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
    var_10 = ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (long long int i_3 = 4; i_3 < 8; i_3 += 3) 
                {
                    {
                        var_11 = arr_5 [i_1] [i_0];
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_5 [1LL] [i_1])))) ? (((/* implicit */int) min(((unsigned char)1), ((unsigned char)231)))) : (((/* implicit */int) var_8))));
                        var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((min((var_8), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) max((arr_3 [i_1] [i_1]), (var_0))))))), (((unsigned long long int) arr_3 [i_1 - 2] [i_1]))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = min((((/* implicit */int) ((_Bool) min((arr_5 [(_Bool)1] [i_0]), (((/* implicit */unsigned long long int) arr_6 [(short)6])))))), ((+(((/* implicit */int) var_9)))));
        arr_12 [i_0] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_6 [(unsigned char)0])) ? (min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_5))) : (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
    }
}
