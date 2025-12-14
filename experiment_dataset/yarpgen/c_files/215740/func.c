/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215740
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
    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) min((var_4), (var_1)))) > (((/* implicit */int) var_9)))))));
    var_21 = ((/* implicit */signed char) (((+(((/* implicit */int) min(((signed char)-77), ((signed char)127)))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2425170281U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) (signed char)35))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            arr_5 [6U] [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -16777216)) ? (((/* implicit */int) (short)-27911)) : (((/* implicit */int) (signed char)-47))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-82))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) * (((unsigned int) 2220463707U)))))));
            arr_8 [(signed char)5] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 1355468216)) ? (2220463707U) : (((/* implicit */unsigned int) 2147483647))))));
            arr_9 [i_0] = ((/* implicit */signed char) max(((-(((/* implicit */int) ((unsigned short) (_Bool)1))))), (((/* implicit */int) ((_Bool) (+(((/* implicit */int) (unsigned short)18530))))))));
        }
        arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_0])) ? (5U) : (2220463707U)))))) ? (((/* implicit */long long int) arr_1 [i_0])) : ((-((~(2230591941706436136LL)))))));
        arr_11 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)54)), (arr_1 [i_0]))))));
    }
    for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
    {
        arr_14 [i_2] = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (arr_2 [i_2 + 1] [i_2]))))), (((/* implicit */unsigned int) (-(arr_1 [i_2 + 1]))))));
        arr_15 [i_2] = ((/* implicit */unsigned char) (!(((((/* implicit */int) var_7)) > (((/* implicit */int) var_6))))));
    }
    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))));
    var_23 = ((/* implicit */short) ((((_Bool) (-(((/* implicit */int) (signed char)56))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))))));
}
