/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43074
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
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 461751278964099731ULL)) ? (((/* implicit */unsigned long long int) ((arr_2 [i_2 + 3]) - (arr_2 [i_2 - 3])))) : (((((/* implicit */_Bool) arr_4 [i_2 + 3] [i_0 - 3])) ? (arr_3 [i_0 - 2] [i_0]) : (arr_4 [i_2 + 3] [i_0 + 1])))));
                    arr_8 [i_2] [i_1] = ((/* implicit */unsigned int) (short)11);
                    arr_9 [i_0 - 3] [i_2] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 461751278964099731ULL)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (short)11))))));
                    arr_10 [i_0] [i_1] [i_2] = min(((!(((/* implicit */_Bool) 461751278964099741ULL)))), (((((/* implicit */_Bool) 461751278964099731ULL)) && (((/* implicit */_Bool) arr_6 [i_0])))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_0])) ? (((/* implicit */int) (short)26)) : (((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (short)26)) : (((/* implicit */int) (short)-18)))))) >> (((/* implicit */int) var_3))));
        arr_12 [i_0] [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_3 [i_0 - 4] [i_0])))) ? (((/* implicit */int) arr_5 [i_0 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-5)) && (((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */int) ((arr_7 [(short)0] [i_0 - 4]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-29)) < (((/* implicit */int) arr_1 [i_0 + 1])))))));
        var_20 = ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (var_6)))) ? (((/* implicit */unsigned long long int) arr_2 [i_0 - 2])) : ((+(17984992794745451884ULL))))) / (((/* implicit */unsigned long long int) 2004244867U)));
        arr_13 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_0 - 2])), (arr_2 [i_0 + 1])))) / (((((/* implicit */_Bool) 461751278964099732ULL)) ? (((/* implicit */unsigned long long int) 4U)) : (max((((/* implicit */unsigned long long int) 4U)), (17984992794745451884ULL)))))));
    }
    var_21 = ((/* implicit */unsigned short) var_13);
    var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-1843163127) + (2147483647))) << (((10ULL) - (8ULL)))))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) var_18))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (unsigned short)10627)))) : (((((/* implicit */int) (unsigned short)54918)) & (((/* implicit */int) var_18)))))) : (((/* implicit */int) var_4))));
}
