/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228546
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned char)6))))) / (max((((/* implicit */unsigned long long int) (unsigned short)255)), (var_16)))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) 14462883558639269730ULL)) && (((/* implicit */_Bool) var_0))))))) : ((~((-(((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_1 [i_1]))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1 - 2])) | (((((/* implicit */_Bool) 1375956128)) ? (((/* implicit */int) (unsigned short)223)) : (((/* implicit */int) (unsigned short)255))))))), (var_11)));
                var_20 = ((/* implicit */unsigned short) max(((~(var_1))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65288)))))));
                arr_8 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_2 [i_0])) & (arr_4 [i_0 - 2])))));
                var_21 = arr_4 [i_1];
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_8);
    var_23 = ((/* implicit */long long int) var_8);
    var_24 += ((/* implicit */unsigned short) var_7);
}
