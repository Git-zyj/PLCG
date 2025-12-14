/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201079
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
    var_18 = ((/* implicit */long long int) max((2147483647), (396082521)));
    var_19 = ((/* implicit */long long int) ((signed char) var_14));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (short i_3 = 3; i_3 < 8; i_3 += 2) 
                {
                    for (signed char i_4 = 1; i_4 < 8; i_4 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11451))) | (var_9))) ^ (((((/* implicit */unsigned long long int) arr_13 [i_0] [0ULL] [i_1] [i_0] [i_2] [i_3 - 1] [i_0])) - (arr_8 [i_0] [i_0] [i_2] [i_4])))));
                            var_21 = ((/* implicit */unsigned short) ((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) || (((/* implicit */_Bool) arr_9 [(short)4] [i_4]))))))));
                            var_22 = ((/* implicit */signed char) arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_3 - 3]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 0)))) || (((/* implicit */_Bool) 1471222911))));
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                    var_25 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) var_13)))));
                    var_26 = ((/* implicit */unsigned long long int) (-(arr_11 [i_5] [i_5] [(_Bool)1] [i_1] [i_0] [i_0])));
                    var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_5] [i_1] [i_2] [i_1] [i_1] [i_0]))));
                }
                for (unsigned long long int i_6 = 3; i_6 < 8; i_6 += 4) 
                {
                    var_28 = ((/* implicit */unsigned long long int) (+(arr_18 [i_6] [i_6] [i_1] [i_1] [i_6] [i_6 + 2])));
                    var_29 = ((/* implicit */signed char) ((unsigned long long int) ((long long int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_6 + 2])));
                    var_30 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_6]);
                }
            }
            var_31 = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_0])) ^ (arr_2 [i_1])));
        }
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_7] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7] [i_0]))) : (((unsigned long long int) 1537785540))));
            var_33 = ((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [(_Bool)1] [3LL] [i_0]);
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_7 + 1] [i_0])) ? (((/* implicit */long long int) var_12)) : (var_4)));
        }
        var_35 = ((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_0] [i_0]))));
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? ((+((-9223372036854775807LL - 1LL)))) : ((+(var_4)))));
    }
    var_37 = ((/* implicit */short) ((max((((/* implicit */int) ((_Bool) var_5))), (max((-3), (((/* implicit */int) var_8)))))) != (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((var_8), (((/* implicit */signed char) var_17))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
    var_38 = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) 1160742161U)))))) & (max((-2638782715029843366LL), (9223372036854775807LL))))), (max((max((((/* implicit */long long int) var_14)), ((-9223372036854775807LL - 1LL)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (var_1)))))));
}
