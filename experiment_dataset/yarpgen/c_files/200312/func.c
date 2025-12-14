/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200312
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
    var_19 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((arr_6 [i_1] [i_1] [i_0]), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1])) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */int) arr_1 [i_1] [11ULL])))))))));
                    var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((/* implicit */int) arr_1 [i_2] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_1]))) - (-4310568701513598976LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
                    var_22 = min((((/* implicit */unsigned long long int) var_14)), (3671673295887216556ULL));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 2) 
    {
        var_23 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_3 - 1] [i_3]))));
        var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_3])) ? (1818817179U) : (((/* implicit */unsigned int) 2147483647))))))) ? (arr_3 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3 - 1] [i_3 + 1])) ? ((~(var_5))) : (((arr_7 [i_3] [i_3]) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_3 - 2]))))))))));
        arr_9 [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_3]);
        var_25 = ((/* implicit */int) arr_7 [i_3] [i_3]);
    }
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        var_26 ^= ((/* implicit */unsigned short) 4073805497U);
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned int) arr_3 [i_4] [i_4]);
        var_27 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) arr_0 [(unsigned char)7])))));
    }
    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        var_28 |= ((/* implicit */unsigned int) arr_6 [i_5] [i_5] [i_5]);
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (+((+(1818817179U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5]))))) : (((/* implicit */int) arr_2 [i_5]))));
        var_30 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5]))) : (var_5))) : (((/* implicit */long long int) arr_8 [i_5])))), (((((/* implicit */_Bool) (-(arr_7 [i_5] [i_5])))) ? (((/* implicit */long long int) arr_18 [i_5])) : (max((((/* implicit */long long int) arr_8 [i_5])), (arr_7 [i_5] [i_5])))))));
    }
    var_31 *= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_15)), ((~(2848969655U)))))) ? (((var_2) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */long long int) var_17))))))) : (var_8));
    var_32 = ((/* implicit */unsigned short) (+(var_17)));
}
