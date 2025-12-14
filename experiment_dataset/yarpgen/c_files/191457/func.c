/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191457
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
    var_10 = ((/* implicit */long long int) (_Bool)1);
    var_11 = ((/* implicit */long long int) (+(((((/* implicit */int) var_3)) << ((((~(var_9))) + (1329689572302952854LL)))))));
    var_12 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)0)), (-733098902)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_13 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) || (((_Bool) arr_0 [i_0]))));
    }
    for (long long int i_1 = 4; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_9))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((short) -9223372036854775804LL)))) ? (((/* implicit */unsigned long long int) max((var_2), (arr_3 [i_1 + 3])))) : (var_8)));
        var_16 = ((/* implicit */unsigned int) ((_Bool) min((max((798439430U), (arr_3 [i_1]))), (((/* implicit */unsigned int) var_5)))));
        var_17 = ((/* implicit */long long int) (((~((~(733098902))))) << (min((((unsigned long long int) (signed char)-83)), (((/* implicit */unsigned long long int) ((var_8) >= (12223711536206246609ULL))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 4; i_2 < 10; i_2 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_2 - 2])))))));
        var_19 = ((/* implicit */signed char) ((arr_7 [i_2] [i_2 + 3]) / (arr_7 [i_2 - 3] [i_2 - 1])));
        arr_8 [i_2 - 1] = ((/* implicit */unsigned short) var_1);
        arr_9 [i_2] = ((/* implicit */unsigned int) 9223372036854775803LL);
    }
    /* vectorizable */
    for (unsigned char i_3 = 4; i_3 < 10; i_3 += 3) 
    {
        var_20 = ((((/* implicit */int) arr_6 [i_3 + 1] [i_3 - 3])) <= (((/* implicit */int) arr_6 [i_3 - 4] [i_3 - 4])));
        arr_12 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)52289)) || (((/* implicit */_Bool) -7128112119552063135LL))));
        var_21 = ((/* implicit */long long int) var_5);
        arr_13 [i_3] [i_3] = ((/* implicit */signed char) var_1);
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)15753)), (((((/* implicit */_Bool) arr_4 [i_4])) ? (min((1773795852), (((/* implicit */int) (_Bool)1)))) : ((-(arr_18 [i_4])))))));
                var_23 = -733098902;
            }
        } 
    } 
}
