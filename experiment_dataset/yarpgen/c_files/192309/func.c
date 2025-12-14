/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192309
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)109)) & (((/* implicit */int) (unsigned short)29903)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */long long int) (_Bool)1);
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */int) (!((_Bool)1)))) : (max((((/* implicit */int) ((((/* implicit */_Bool) 2334894484U)) && (((/* implicit */_Bool) 31))))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_5))))))));
                        var_17 |= ((/* implicit */short) ((((max((var_6), (((/* implicit */unsigned long long int) arr_4 [(short)16] [i_1] [i_2])))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_2 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47266)))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)14))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31297)))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
    {
        arr_14 [(_Bool)1] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) (unsigned short)60)))))));
        var_18 = ((/* implicit */_Bool) arr_13 [i_4]);
    }
    var_19 |= ((signed char) (+(((/* implicit */int) var_5))));
}
