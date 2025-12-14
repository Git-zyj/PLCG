/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42591
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
    var_17 = ((/* implicit */int) (((((-(((/* implicit */int) var_6)))) % ((-(((/* implicit */int) (_Bool)1)))))) >= ((~(min((((/* implicit */int) (_Bool)1)), (var_8)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) ((max(((_Bool)1), ((_Bool)0))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((~(arr_0 [i_0] [i_0]))) > (((/* implicit */long long int) (-(268435200U)))))))) : (((unsigned int) (_Bool)0))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 9; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */int) (short)16256)) / (((/* implicit */int) ((((/* implicit */int) ((signed char) 2147483647))) != (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))))));
                            var_20 = ((/* implicit */unsigned short) ((signed char) (unsigned char)15));
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))) ^ ((+(4ULL))))))));
                            var_22 -= ((/* implicit */unsigned short) ((int) (unsigned short)29874));
                        }
                        for (unsigned int i_5 = 1; i_5 < 9; i_5 += 2) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_5 + 1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((9223372036854775807LL) ^ (9223372036854775807LL)))) ? (2185584610U) : (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (signed char)41)))))))));
                            var_23 = ((/* implicit */unsigned short) arr_2 [i_0]);
                        }
                        for (unsigned int i_6 = 1; i_6 < 9; i_6 += 2) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */unsigned long long int) min((min((2185584610U), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (arr_18 [i_0] [i_1] [i_1] [i_2] [(unsigned short)1] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_1] [i_0])) : (((/* implicit */int) ((unsigned char) (unsigned char)244))))))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (unsigned short)46101))));
                        }
                        var_26 = ((/* implicit */signed char) ((long long int) ((unsigned int) ((unsigned long long int) arr_14 [i_0] [i_1] [i_0] [i_0] [i_1] [i_3 + 1]))));
                        var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1136560736)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) : (5682095018306980368ULL))))));
                    }
                } 
            } 
        } 
        var_28 += ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) - (9223372036854775807LL))) | (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [7LL] [i_0] [i_0])) ^ (((/* implicit */int) (unsigned char)147)))))))));
    }
}
