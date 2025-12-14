/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4346
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
    var_16 = ((((((/* implicit */_Bool) min((((/* implicit */short) var_10)), ((short)-3494)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */int) (unsigned short)65535)))))) / (((/* implicit */int) var_15)));
    var_17 = ((/* implicit */short) ((unsigned long long int) 1056137812U));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_11 [i_3] [i_2 - 1] [i_0] [i_0] |= ((/* implicit */unsigned char) (~((+(((int) (unsigned short)25))))));
                        var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-1211060781623509856LL) - (((/* implicit */long long int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */int) var_5)) >> (((var_12) - (17461480787441846810ULL))))) : (((/* implicit */int) arr_4 [i_2 - 2]))))), (((((/* implicit */_Bool) (unsigned short)65517)) ? (arr_10 [i_2 - 2] [i_2 - 1] [i_2 - 2]) : (((/* implicit */unsigned long long int) arr_3 [i_2 - 1] [i_2 + 1] [i_2 - 1]))))));
                        var_19 = ((/* implicit */long long int) max((1292897055U), (((/* implicit */unsigned int) (unsigned short)50692))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65511)) && (((/* implicit */_Bool) (unsigned short)65534))));
    }
    var_22 = ((/* implicit */long long int) (unsigned short)14844);
}
