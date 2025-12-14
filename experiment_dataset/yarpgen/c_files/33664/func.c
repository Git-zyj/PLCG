/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33664
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((unsigned char) var_6));
                arr_4 [i_0] [(short)15] [i_1 - 3] = ((/* implicit */unsigned short) max((arr_0 [i_0 + 1] [i_0 + 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_0)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) 8846552202056191630LL);
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_16 = ((/* implicit */short) min((0LL), (((/* implicit */long long int) ((signed char) min((((/* implicit */unsigned int) arr_5 [i_2])), (536739840U)))))));
        var_17 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (unsigned short)22904)) : (((/* implicit */int) var_8)))))) | (((((/* implicit */long long int) -4)) | ((-(3341938241457692452LL)))))));
        arr_9 [i_2] = ((/* implicit */short) arr_5 [i_2]);
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((1932166519U), (((/* implicit */unsigned int) arr_5 [i_2]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_2] [i_2]))))) : (((((-1LL) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))))) | (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_3)))))))));
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (var_11)))) : (var_12)));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) min((3), (((/* implicit */int) var_2))))) : (((var_0) | (((/* implicit */unsigned int) var_4))))))));
}
