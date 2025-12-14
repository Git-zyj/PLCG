/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232772
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
    var_16 |= (signed char)15;
    var_17 = (unsigned short)51433;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((min((((/* implicit */long long int) arr_0 [i_1 - 2])), (arr_1 [i_1 - 1] [(signed char)20]))) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1])))));
                var_18 = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */int) var_15)) != (((/* implicit */int) var_4)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) var_0))))))))));
                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_3 [i_1] [i_0 + 1] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? ((+(arr_3 [i_1] [i_0] [(_Bool)1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0]))))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) / (arr_3 [i_1] [i_0] [i_0])))) ? (((/* implicit */int) arr_4 [i_1 - 2])) : (((((/* implicit */int) arr_2 [i_1])) | (((/* implicit */int) (unsigned short)14121)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), (var_10)))), (((5618758553365503145LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))))))) % (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))), (min((((/* implicit */long long int) var_15)), (var_11)))))));
}
