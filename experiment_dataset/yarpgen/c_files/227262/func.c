/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227262
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12935076334552230895ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28090))) : (((((/* implicit */_Bool) (unsigned short)5)) ? (-8417956243230564489LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) ? (var_5) : (var_6)));
    var_11 ^= max((9223372036854775807LL), (((/* implicit */long long int) (short)32767)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])), ((~(((2147483647) & (559113059)))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */short) min(((!(max(((_Bool)1), (arr_8 [(_Bool)1] [(_Bool)1] [i_1] [i_2]))))), (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_7 [i_2 + 4] [i_2 + 2] [i_2 + 1]))))));
                    arr_11 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                    var_12 = ((/* implicit */unsigned char) ((int) arr_3 [i_2 + 4]));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_6);
    var_14 &= ((/* implicit */unsigned long long int) (+(((long long int) max((((/* implicit */unsigned char) var_2)), (var_3))))));
}
