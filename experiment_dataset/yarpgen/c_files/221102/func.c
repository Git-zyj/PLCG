/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221102
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
    var_14 ^= min((((((/* implicit */_Bool) ((unsigned int) var_5))) ? (max((var_5), (((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */int) var_12)) > (-485305875)))))), (((/* implicit */int) var_9)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((unsigned char)244), (var_10))))))) / (((unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_10)) : (arr_6 [i_1])))))))));
                    var_16 = ((((/* implicit */int) (signed char)-14)) | (((/* implicit */int) ((short) var_5))));
                    var_17 += ((/* implicit */long long int) var_13);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(arr_0 [i_0]))))));
        arr_9 [i_0] = ((/* implicit */unsigned int) (-(17283676347389971141ULL)));
        var_19 = ((/* implicit */unsigned char) (_Bool)1);
    }
    var_20 = ((/* implicit */short) var_5);
}
