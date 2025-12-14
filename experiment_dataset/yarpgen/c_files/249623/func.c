/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249623
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
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) -1165765289))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [(short)12] [5LL] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 + 1]))))) < (((/* implicit */int) ((((/* implicit */_Bool) 14780698841883093568ULL)) || (((/* implicit */_Bool) 3666045231826458050ULL)))))));
                    arr_8 [(signed char)9] [i_2] [(signed char)8] [(_Bool)1] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned int) var_6))))), (3666045231826458036ULL))), (((((/* implicit */_Bool) 3666045231826458048ULL)) ? (min((18446726481523507200ULL), (((/* implicit */unsigned long long int) (short)-32764)))) : (((/* implicit */unsigned long long int) min((-8155391958846128111LL), (((/* implicit */long long int) 471801439U)))))))));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_0)))) / (((/* implicit */int) ((_Bool) arr_0 [(short)10])))))) ? (((((/* implicit */_Bool) (-(14780698841883093566ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (3666045231826458035ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_2 + 1] [i_2 - 1] [(_Bool)1]), (arr_2 [i_2 + 1] [i_2 + 1] [(signed char)4])))))));
                    var_14 *= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [(short)2] [10ULL]) ? (((/* implicit */int) arr_5 [(signed char)4] [i_0])) : (((/* implicit */int) var_2))))))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [(unsigned char)9] [i_2 + 1] [(unsigned char)9]))))) ? ((~(((/* implicit */int) arr_2 [(_Bool)1] [i_2 - 1] [(unsigned char)10])))) : (((((/* implicit */_Bool) arr_2 [(unsigned char)15] [i_2 - 1] [(_Bool)1])) ? (((/* implicit */int) arr_2 [(signed char)9] [i_2 + 1] [(_Bool)1])) : (((/* implicit */int) arr_2 [(unsigned char)13] [i_2 + 1] [(unsigned char)1]))))));
                }
            } 
        } 
    } 
}
