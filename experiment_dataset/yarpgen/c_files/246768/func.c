/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246768
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
    var_17 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)56184));
    var_18 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)56185)) || (((/* implicit */_Bool) -881943371))))), (var_10)));
    var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -369259979)) ? (((/* implicit */int) (short)17545)) : (((/* implicit */int) (signed char)40))))) ? (((/* implicit */int) ((((/* implicit */int) (short)30360)) >= (((/* implicit */int) (unsigned char)123))))) : (((((/* implicit */_Bool) (unsigned short)9346)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)56178))))))) ? ((+(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -957259825)) ? (((/* implicit */long long int) var_10)) : (3036135955506284031LL)))) ? (((/* implicit */int) (short)4257)) : (var_4)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56199)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)109))) : (-8825025458000077383LL)))))))));
        var_21 = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)63)), (arr_1 [i_0] [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_22 ^= ((/* implicit */signed char) 8825025458000077379LL);
        var_23 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)43)), (min((var_10), (((/* implicit */int) ((signed char) -896604473)))))));
        arr_5 [i_1] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (3036135955506284031LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)49443)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))))))) || ((!(((/* implicit */_Bool) arr_4 [i_1])))));
        arr_6 [i_1] &= ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1] [i_1])) | (((/* implicit */int) (unsigned short)58570))))) | (-2704626181723518997LL)))));
    }
}
