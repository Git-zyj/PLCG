/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40393
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_1 [i_0 - 1] [i_0 - 1]) ? (510876276) : (((/* implicit */int) arr_0 [i_0] [i_0]))))), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) min((arr_0 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned char) arr_1 [i_0 + 1] [i_0 + 1]))))) : (((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-69)))) ? (arr_2 [i_0 - 1] [i_0 - 1]) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0]))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_10 [(signed char)5] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (arr_2 [i_0] [i_0 - 1]) : (arr_2 [12LL] [i_0 + 1])))) ? (max((arr_2 [i_0] [i_0 - 1]), (arr_2 [i_0] [i_0 - 1]))) : (((/* implicit */int) (unsigned char)16))));
                        var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_1 [i_0] [i_1])), (max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))) : (9223372036854775807LL))), (((/* implicit */long long int) arr_5 [i_0 - 1] [i_1] [i_2]))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_5 [(unsigned char)18] [i_0] [(unsigned char)18])), (arr_3 [i_0 + 1] [i_0 + 1]))), (((/* implicit */unsigned long long int) max((-1097050983), (538188288))))));
        var_18 ^= ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
    }
    var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) : (var_6)));
}
