/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50866
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */short) max(((~(((/* implicit */int) arr_1 [i_0])))), ((~(((/* implicit */int) max((var_8), (var_6))))))));
        var_20 &= ((/* implicit */unsigned int) arr_1 [i_0]);
        var_21 &= ((/* implicit */unsigned char) max((10540477142304525090ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
        var_22 = ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_11)))) || (((/* implicit */_Bool) max((10540477142304525090ULL), (((/* implicit */unsigned long long int) (unsigned char)75)))))))), ((signed char)-67)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-67))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
    {
        var_23 ^= ((/* implicit */unsigned long long int) max(((unsigned char)205), (((/* implicit */unsigned char) (signed char)-1))));
        var_24 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_10 [i_2])) && (((/* implicit */_Bool) arr_10 [i_2]))))));
        arr_11 [(_Bool)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))));
        var_25 = ((/* implicit */unsigned char) (~(min(((+(var_2))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))));
    }
    var_26 = ((/* implicit */unsigned long long int) var_12);
    var_27 = ((/* implicit */int) (((+(var_17))) >> (((((/* implicit */int) var_6)) + (88)))));
    var_28 = ((/* implicit */unsigned char) var_17);
    /* LoopSeq 1 */
    for (signed char i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        var_29 = ((/* implicit */int) min(((unsigned char)75), (((/* implicit */unsigned char) (signed char)109))));
        arr_16 [i_3] [i_3] = var_4;
        arr_17 [i_3] [i_3] = max(((~(var_14))), (((/* implicit */long long int) max(((+(((/* implicit */int) arr_15 [i_3] [i_3])))), (((/* implicit */int) var_5))))));
    }
}
