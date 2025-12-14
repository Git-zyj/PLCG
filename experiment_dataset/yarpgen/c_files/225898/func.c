/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225898
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
    for (signed char i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-1))));
        arr_4 [3] [i_0 - 1] = (-(max((((((/* implicit */_Bool) (unsigned short)49770)) ? (6792421209280749971LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1020))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)60)) > (((/* implicit */int) (signed char)-14))))))));
        arr_5 [i_0 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-37)) + (2147483647))) >> ((((~(((/* implicit */int) var_7)))) + (19)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (min((62315193), (((/* implicit */int) var_6)))) : (((((/* implicit */int) (signed char)42)) ^ (((/* implicit */int) arr_1 [i_0 - 4] [i_0 - 4]))))))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 4])) ? (arr_2 [i_0 + 2] [i_0]) : (arr_2 [i_0 + 4] [i_0 + 2])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_10 = ((/* implicit */signed char) (((+(686921908))) < (((/* implicit */int) ((686921908) < (((/* implicit */int) var_0)))))));
        var_11 = var_0;
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (arr_2 [i_1] [i_1]) : (arr_6 [i_1] [i_1])));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_12 = (signed char)-59;
        arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (signed char)0))));
        var_13 = ((/* implicit */_Bool) (((((+(((/* implicit */int) (signed char)-28)))) - (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) (signed char)114)))))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) && ((!(((/* implicit */_Bool) (signed char)104)))))))));
    }
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -1LL)) && (((((/* implicit */_Bool) (signed char)26)) || (((/* implicit */_Bool) (unsigned short)54799)))))) && (((/* implicit */_Bool) (signed char)120))));
}
