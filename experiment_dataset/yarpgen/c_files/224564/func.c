/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224564
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
    var_20 -= ((/* implicit */unsigned short) ((_Bool) min(((~(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) (unsigned short)4529)))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) min(((short)-31111), (var_15)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_19)))) : (((/* implicit */int) var_12)))) : (min((((((/* implicit */_Bool) 1025864856U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4529))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */int) max((var_22), ((+(((/* implicit */int) (signed char)(-127 - 1)))))));
                arr_6 [14LL] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned char) min(((+(min((arr_0 [i_0]), (((/* implicit */long long int) 803397986U)))))), (((/* implicit */long long int) (signed char)-12))));
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3277703719U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))))) ? (((((/* implicit */_Bool) min((arr_5 [0U] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))) ? (min((((/* implicit */long long int) arr_3 [i_1] [i_1 - 1])), (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)26)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_3 [8U] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_0]))))) ? (min((((/* implicit */long long int) (signed char)-32)), (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1]))))))))));
            }
        } 
    } 
    var_24 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_7))));
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (unsigned short)20253)))))) ? (((/* implicit */int) var_4)) : ((~((+(((/* implicit */int) (short)-25304)))))))))));
}
