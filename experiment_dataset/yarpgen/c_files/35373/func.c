/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35373
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) var_11)) > (((/* implicit */int) (unsigned char)6)))))));
    var_21 -= ((/* implicit */unsigned short) (((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) var_12))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_22 -= ((/* implicit */signed char) arr_7 [i_0] [i_0]);
                    var_23 -= ((/* implicit */unsigned long long int) (((((+(((/* implicit */int) (unsigned short)1953)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) >= (((/* implicit */int) (unsigned char)251))));
                    arr_8 [i_2] = (~(458752));
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) -2110046253);
                }
            } 
        } 
        var_24 *= ((/* implicit */unsigned char) arr_7 [i_0] [i_0]);
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) 0ULL)))));
        arr_11 [i_0] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) ((signed char) var_8))))), (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)52271), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0]))))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (((/* implicit */int) arr_13 [(unsigned short)1])) : (arr_7 [i_3] [i_3])));
        arr_17 [i_3] = ((/* implicit */long long int) (-(min((((/* implicit */int) arr_14 [i_3])), ((~(var_12)))))));
        arr_18 [i_3] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) 10754251481509618331ULL)) ? ((~(((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_2 [i_3] [i_3]) : (((/* implicit */unsigned long long int) 0LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_1 [i_3])))))))));
        var_25 = ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned short)63582))))));
    }
    var_26 = ((/* implicit */unsigned char) (+(((1562513580) | (((/* implicit */int) ((((/* implicit */int) (signed char)0)) != (4194048))))))));
    var_27 = ((/* implicit */unsigned long long int) var_2);
}
