/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196492
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (2395125140277625989LL))) == (((/* implicit */long long int) -616467161))));
        var_15 = (!(((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_16 += ((/* implicit */unsigned char) ((((/* implicit */long long int) 0U)) < (-8629155790985884285LL)));
        var_17 -= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])) <= (((/* implicit */int) arr_0 [i_0 - 1] [i_0]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) ((short) arr_1 [i_1]));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1])) >> (((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_12)))) - (31445)))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1]))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~(((/* implicit */int) arr_2 [i_1] [i_1])))))));
    }
    var_22 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) <= (((/* implicit */int) var_8)))))));
}
