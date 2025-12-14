/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49897
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
    var_16 = ((((/* implicit */_Bool) 0LL)) ? (-6490355980978932793LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
    var_17 = ((/* implicit */long long int) max((((/* implicit */int) var_9)), ((~(((/* implicit */int) ((3LL) > (-1LL))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((short) arr_0 [i_0 - 1]));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)54050)) * (((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [i_3 - 1] [i_1])))))));
                        arr_9 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */long long int) var_9);
                        var_20 &= ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_3] [i_1]))));
                        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_3 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (var_5))) << (((/* implicit */int) var_9))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
}
