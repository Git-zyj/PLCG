/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220484
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_0] [i_0])), (arr_0 [i_0] [i_0])))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2030579223U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29))) : ((-9223372036854775807LL - 1LL))))) - (arr_0 [i_0] [i_1 + 1]))) : (((((/* implicit */_Bool) (unsigned char)28)) ? (15051207271123832363ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
                var_16 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [(signed char)6])) ? (arr_0 [(short)12] [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 1] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_1] [i_1])))))))) ? ((((!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16618)))))) : (arr_0 [i_1 - 1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775793LL)) && (((/* implicit */_Bool) -5464623653612668412LL))))), (arr_3 [i_1 + 1])))));
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1 - 1])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14771)) ? (((/* implicit */int) (unsigned short)16618)) : (((/* implicit */int) (unsigned short)2))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_1 - 1])) : (arr_0 [i_0] [i_1])))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned long long int) ((int) var_11))) : (((3395536802585719275ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0))) % (((/* implicit */long long int) ((/* implicit */int) min((var_11), (var_9))))))))));
}
