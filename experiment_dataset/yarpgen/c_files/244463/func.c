/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244463
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (min((((/* implicit */long long int) min((((/* implicit */int) arr_7 [i_2] [i_2] [i_2])), ((~(((/* implicit */int) var_10))))))), (((2379186021141589056LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210)))))))));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_0 [i_0 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2] [i_0 - 1]))))) ? ((~(((/* implicit */int) (short)14952)))) : (((/* implicit */int) (_Bool)1))));
                    arr_8 [(unsigned char)16] [i_0] [i_0] [(unsigned char)16] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0])) <= (((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_1])))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))))))));
    var_19 = ((/* implicit */unsigned char) min((((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_1))))) % (((/* implicit */int) max((((/* implicit */short) (unsigned char)195)), ((short)30222)))))), ((+(((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (unsigned char)26))))))));
}
