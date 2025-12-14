/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248363
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_9)) - (var_12)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [3ULL] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_17), (arr_3 [i_0 + 1])))), (min((((/* implicit */long long int) ((arr_1 [i_0 + 1]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)70)))))), ((+(9223372036854775807LL)))))));
                    arr_9 [11] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_2 + 2])) == (-91030646)))) << ((((((!(((/* implicit */_Bool) -91030661)))) ? (((/* implicit */long long int) -91030661)) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63075))) : ((-9223372036854775807LL - 1LL)))))) - (63049LL)))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_2 + 2]), (arr_3 [i_2 - 1]))))) < (((((/* implicit */_Bool) min((((/* implicit */int) (short)29725)), (67108864)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)28)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2 + 1]))) - (arr_4 [i_2] [i_2])))))));
                    var_21 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) arr_0 [i_0 - 1])), (3928392985921179256LL))), (((/* implicit */long long int) ((783254998) - (((/* implicit */int) (signed char)-68)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */long long int) ((_Bool) arr_11 [i_3]));
        var_22 ^= ((/* implicit */signed char) (unsigned char)6);
    }
}
