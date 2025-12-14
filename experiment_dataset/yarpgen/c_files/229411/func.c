/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229411
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_2 [(signed char)8])) / (var_3)))) ? (((((/* implicit */unsigned long long int) 512220286U)) - (10988354676991411406ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_0 [i_0]))))))) ? (((/* implicit */int) ((var_3) == (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_1 [i_0 - 2])))))) : ((~(arr_0 [i_0 + 1])))));
        var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)218))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [(unsigned char)8]), (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_1]) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_3)) : (-7591810399652662769LL))) : (((/* implicit */long long int) min((arr_1 [i_1]), (((/* implicit */unsigned int) var_4))))))) : (((/* implicit */long long int) min((var_1), (((/* implicit */int) var_7)))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (max((((/* implicit */unsigned int) var_4)), (arr_1 [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7458389396718140224ULL)) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) (unsigned char)16)))))));
        var_14 = ((/* implicit */unsigned int) max((min((((/* implicit */short) var_2)), (arr_4 [i_1] [i_1]))), (((/* implicit */short) min((((arr_2 [i_1]) >= (var_4))), ((!(((/* implicit */_Bool) 20U)))))))));
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        arr_9 [i_2] [(signed char)21] = ((/* implicit */signed char) arr_7 [i_2] [i_2]);
        var_15 = ((/* implicit */signed char) arr_8 [i_2]);
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((short) arr_7 [15U] [20U]));
                    arr_14 [(short)15] [(short)15] [i_3] [(signed char)3] = ((/* implicit */unsigned long long int) arr_8 [i_2]);
                }
            } 
        } 
        var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_10 [14LL] [14LL] [(unsigned short)16]))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_13 [i_2] [i_2] [i_2])), (arr_10 [i_2] [i_2] [(short)19])))))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) | (max((((/* implicit */unsigned int) var_10)), (arr_10 [11ULL] [i_2] [i_2])))))));
    }
    var_18 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 1004585226U)) ? (10988354676991411410ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16519))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_5))) + (var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((-(var_3)))));
}
