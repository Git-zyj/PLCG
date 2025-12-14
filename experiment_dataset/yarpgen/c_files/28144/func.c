/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28144
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [(short)9] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])))) <= (((((((/* implicit */int) var_0)) >= (((/* implicit */int) (short)32754)))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((16790954969549770011ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        var_17 = ((/* implicit */short) (+(((/* implicit */int) (short)32755))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        for (short i_2 = 4; i_2 < 6; i_2 += 4) 
        {
            {
                arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (short)32752)) : (((/* implicit */int) (unsigned char)50))))) + (((((/* implicit */_Bool) var_6)) ? (-9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)103)))))))) ? (min((((((/* implicit */int) (unsigned char)152)) << (((((/* implicit */int) (short)-32754)) + (32774))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (var_4))))) : ((~(((/* implicit */int) max((var_10), (((/* implicit */short) (_Bool)1)))))))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_6 [i_2 + 4] [i_2 + 4] [i_2 + 4])))) ? (((/* implicit */int) ((_Bool) arr_5 [i_2 - 1] [i_2 - 1]))) : (((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 + 2] [i_2])) ? (arr_6 [i_2 - 3] [i_2] [i_2]) : (((/* implicit */int) arr_8 [i_2 - 2] [(unsigned char)1] [i_2 - 2]))))));
            }
        } 
    } 
}
