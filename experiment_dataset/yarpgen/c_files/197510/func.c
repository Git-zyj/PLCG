/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197510
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)13964)) ? (((/* implicit */int) (short)13964)) : (((/* implicit */int) (signed char)18))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = min((((/* implicit */int) min((arr_2 [i_0 + 1] [i_0 - 1]), (((/* implicit */short) var_3))))), (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) (short)-13964)) : (var_14))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((signed char) (short)13964)))));
    }
    for (long long int i_1 = 1; i_1 < 22; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (signed char i_3 = 2; i_3 < 22; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) var_7);
                        arr_16 [i_3] [1ULL] [(signed char)4] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_2] [i_3])) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1] [i_3])) : (((/* implicit */int) arr_13 [(unsigned char)11] [i_3 + 1] [i_3]))))));
                        var_18 = ((/* implicit */_Bool) (short)13960);
                        arr_17 [i_1] [17LL] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */long long int) arr_4 [(unsigned char)2]);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (short)13962))) ? (((/* implicit */int) ((short) ((((/* implicit */int) var_4)) - (((/* implicit */int) (short)-13961)))))) : (((/* implicit */int) (short)-19846)))))));
    }
}
