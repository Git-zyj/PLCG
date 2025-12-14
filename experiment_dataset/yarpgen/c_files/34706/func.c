/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34706
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((long long int) (short)-13948)), (((/* implicit */long long int) (signed char)-4))))) ? ((-(((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)11616))))))) : (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) -562949953421312LL))))), ((~(((/* implicit */int) (short)16383)))))))));
    var_12 = ((/* implicit */signed char) (short)-11623);
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 32766U)) <= (9223372036854775807LL)))), (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0] [(short)8]))))))) ? (((((/* implicit */_Bool) (short)11622)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11622))) : (((((/* implicit */_Bool) (short)-11620)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) -1670040518)))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_4)) ? (-562949953421312LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0 - 4] [i_0 - 4]))))) - (max((max((((/* implicit */long long int) 620344796U)), (-7843437017544113332LL))), (((/* implicit */long long int) max((((/* implicit */short) arr_5 [i_1])), ((short)24818))))))));
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -1570960872860907599LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))) : (1922942490428372922LL)))));
        }
    }
}
