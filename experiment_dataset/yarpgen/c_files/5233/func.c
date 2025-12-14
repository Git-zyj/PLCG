/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5233
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) -1857303672)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((-7862049533276577002LL) | (arr_0 [i_0] [i_0])))) : (7744033679249296972ULL))) : (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))))));
        var_17 = ((/* implicit */long long int) min((var_17), (max((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))), (max((arr_1 [i_0]), (((/* implicit */long long int) (short)672)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_3 [i_1])))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((signed char) max((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (short)-31131)) : (((/* implicit */int) (short)-674)))), (((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */signed char) var_9)))))))))));
        arr_5 [(unsigned short)3] [i_1] = ((/* implicit */unsigned char) var_4);
    }
    var_20 = ((/* implicit */short) (-(var_10)));
}
