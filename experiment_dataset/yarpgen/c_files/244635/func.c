/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244635
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_6 [i_0 - 1] [i_0 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_0 + 1] [(unsigned char)1] [i_1 - 3] [i_2])) ^ (arr_1 [i_0 + 1] [i_1 - 2]))) + (((/* implicit */int) ((arr_1 [i_0 + 1] [i_1 - 2]) != (arr_1 [i_0 + 1] [i_1 - 3]))))));
                    var_18 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) 455049792)), (2993187842U))), (((/* implicit */unsigned int) ((455049800) < (455049795))))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)15302))))) ? ((+(174153617))) : ((~(arr_1 [i_0] [(signed char)1])))))) ? (arr_3 [i_2] [(unsigned short)4] [i_2]) : (((/* implicit */long long int) (+(max((((/* implicit */int) var_7)), (arr_0 [6U])))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) ((long long int) min((var_0), (((/* implicit */long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) (signed char)91))))))));
}
