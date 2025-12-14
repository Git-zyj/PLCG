/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26237
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_11)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned int) (signed char)-22)), (var_1))));
                        var_20 = ((/* implicit */short) (~((+(((/* implicit */int) arr_4 [i_0]))))));
                        var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) max((arr_6 [i_0] [i_1] [i_2]), (var_12)))) * ((-(2637160378127842551ULL)))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */long long int) arr_7 [i_0] [i_0]);
        arr_12 [(short)3] [i_0] = ((/* implicit */signed char) (!(((_Bool) arr_7 [i_0] [i_0]))));
    }
    for (signed char i_4 = 3; i_4 < 12; i_4 += 1) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4 - 2]))) : (0U))), (((/* implicit */unsigned int) arr_14 [i_4]))));
        var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_4 - 1]))))) ? (max((((/* implicit */unsigned long long int) ((int) arr_14 [2LL]))), (max((((/* implicit */unsigned long long int) arr_14 [i_4])), (15809583695581709046ULL))))) : (((/* implicit */unsigned long long int) max((arr_13 [i_4 - 2]), (arr_13 [i_4 - 2]))))));
    }
    var_23 &= ((/* implicit */unsigned int) ((var_7) ^ ((-(((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
}
