/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42690
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)69)) < (((/* implicit */int) (unsigned char)181)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)0]))) : (((long long int) (-(1234674286))))));
                    arr_7 [i_0] [i_1] [1ULL] = ((/* implicit */_Bool) arr_3 [(unsigned short)6]);
                    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_0] [i_0] [0U])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)27757)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_8), (((/* implicit */signed char) var_5)))))))) ? ((-(var_3))) : (((var_11) ^ (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)187)), (var_10))))))));
    var_17 += ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_18 -= ((/* implicit */long long int) var_6);
        var_19 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9058727917985101415ULL)) ? (arr_8 [(unsigned short)6] [(short)13]) : (arr_8 [16LL] [(_Bool)1])))), (9058727917985101410ULL))), (((/* implicit */unsigned long long int) ((1376915466) * (((/* implicit */int) (_Bool)1)))))));
        arr_10 [i_3] [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((unsigned int) var_3))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((arr_9 [(signed char)14] [i_3]) || (((/* implicit */_Bool) 9058727917985101415ULL)))))))));
        arr_11 [19U] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_8 [i_3] [2U])))) ? ((-(((/* implicit */int) arr_9 [i_3] [i_3])))) : (((/* implicit */int) ((short) (!(((/* implicit */_Bool) -1376915466))))))));
    }
}
