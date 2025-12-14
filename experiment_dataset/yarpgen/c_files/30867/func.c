/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30867
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)7)) || (((/* implicit */_Bool) (signed char)56))));
        var_18 = ((/* implicit */unsigned long long int) var_7);
        var_19 |= ((/* implicit */unsigned int) 10199140733102618730ULL);
        var_20 = var_11;
        var_21 = ((/* implicit */int) min((((((/* implicit */_Bool) 10199140733102618730ULL)) ? (6692663608591581958ULL) : (((/* implicit */unsigned long long int) 877694940U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((long long int) 144115188075855871LL)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned int i_4 = 1; i_4 < 23; i_4 += 4) 
                {
                    {
                        var_22 = ((/* implicit */signed char) var_15);
                        var_23 = ((/* implicit */signed char) ((unsigned int) var_9));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (short)28308))) ? (((/* implicit */long long int) var_3)) : (((((var_10) + (9223372036854775807LL))) << (((var_0) - (2784720035038155069ULL)))))));
                    }
                } 
            } 
        } 
        var_25 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4851641354422073559ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4U)) ? (-7502960198742861510LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) var_2)) ? (9482298959309031843ULL) : (((/* implicit */unsigned long long int) var_3))))));
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            var_26 = ((((/* implicit */int) ((unsigned char) var_13))) < (((((/* implicit */int) var_5)) - (((/* implicit */int) var_15)))));
            var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_7)) | (var_10)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_16))) : (((var_6) & (var_16)))));
        }
        var_28 = ((/* implicit */unsigned long long int) var_3);
        var_29 = ((/* implicit */unsigned long long int) -225349949);
    }
    var_30 = ((/* implicit */int) var_15);
}
