/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25001
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_7))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3115771625093816446LL)) ? (14333016157394149459ULL) : (1134907106097364992ULL)))))))) : (var_3)));
    var_13 += ((/* implicit */unsigned long long int) min((((long long int) max((((/* implicit */unsigned long long int) var_9)), (var_2)))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) 8024548587559079617LL)) ? (14333016157394149459ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))))), (min((((/* implicit */unsigned long long int) 1203030855U)), (1134907106097364992ULL))))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((arr_0 [i_0]), (((var_11) >> (((arr_0 [i_0 - 1]) - (12572064068733064664ULL))))))))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((17311836967612186624ULL), (((/* implicit */unsigned long long int) 3115771625093816446LL))))) ? (((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */unsigned long long int) arr_6 [i_2] [(unsigned short)5] [(unsigned short)5])), (var_2))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)1] [i_0])))));
                        arr_9 [i_2] [(unsigned char)12] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_4 [i_0 - 2])) >= ((~(var_3))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_2]))))))));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((arr_4 [i_0 - 3]) >> (((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))) & (((((/* implicit */_Bool) arr_7 [i_0] [8U] [i_1] [(_Bool)1] [8U])) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (arr_0 [(unsigned char)15]))))), (((((var_11) & (var_2))) & (((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [16LL] [i_0 + 2]))))))))));
                        var_18 ^= ((/* implicit */unsigned char) arr_5 [14LL]);
                        arr_10 [i_2] [i_0] [i_0] [i_1 - 1] [i_2] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
                    }
                } 
            } 
        } 
        arr_11 [(signed char)17] = ((/* implicit */unsigned long long int) (+(min((arr_7 [i_0] [i_0] [i_0 - 2] [i_0 + 2] [i_0]), (((/* implicit */unsigned int) arr_6 [(unsigned char)4] [i_0] [i_0]))))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_8);
}
