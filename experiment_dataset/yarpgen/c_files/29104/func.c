/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29104
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_10 ^= ((/* implicit */long long int) arr_9 [(_Bool)1]);
                        var_11 ^= ((/* implicit */unsigned short) min(((-((+(((/* implicit */int) var_8)))))), ((-(((/* implicit */int) (signed char)37))))));
                        var_12 = (-(((((/* implicit */_Bool) arr_8 [(signed char)17] [i_1 - 2] [i_2 - 3] [i_2 - 2])) ? (arr_8 [i_0] [i_1 - 1] [(_Bool)1] [i_2 - 3]) : (arr_8 [i_2 - 1] [i_1 + 1] [i_2 - 3] [i_2 + 1]))));
                    }
                } 
            } 
        } 
        var_13 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0] [11ULL] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(unsigned short)0] [i_0] [i_0] [i_0])))))) ? (((((/* implicit */int) arr_2 [i_0])) >> (((((/* implicit */int) arr_2 [i_0])) - (107))))) : (((/* implicit */int) ((unsigned short) ((int) arr_11 [i_0] [i_0] [i_0]))))));
        var_14 = ((/* implicit */unsigned int) min((max((5069087332688713793ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))), (min((((((/* implicit */unsigned long long int) 3183867901U)) + (4ULL))), (((/* implicit */unsigned long long int) arr_1 [(unsigned short)2] [i_0]))))));
        arr_12 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((unsigned short) (signed char)-92)), (((/* implicit */unsigned short) ((signed char) var_4)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_9)))))) ^ (arr_11 [i_0] [i_0] [(unsigned short)2]))))));
    }
    var_15 = ((max((((/* implicit */unsigned long long int) var_0)), (min((var_5), (((/* implicit */unsigned long long int) (unsigned short)65535)))))) ^ (max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */unsigned long long int) var_3)) ^ (5067363529312561008ULL))))));
    var_16 = (-(((((/* implicit */_Bool) -624923589)) ? (var_5) : (min((var_5), (((/* implicit */unsigned long long int) (signed char)-95)))))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3))) : (((/* implicit */long long int) (+(var_0))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((var_7) - (1768554757U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))))));
}
