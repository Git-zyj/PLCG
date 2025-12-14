/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35841
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
    var_13 = ((/* implicit */_Bool) var_10);
    var_14 = ((/* implicit */int) var_6);
    var_15 = max((((/* implicit */long long int) var_1)), (var_11));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = arr_1 [i_0] [i_0];
        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-19))))) : (arr_0 [i_0])));
        arr_3 [(signed char)6] [i_0] = ((/* implicit */_Bool) max((((((((/* implicit */int) var_6)) != (((/* implicit */int) var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (_Bool)0))))) : (arr_0 [i_0]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1] [i_0]))) : (var_11)))) ? (((var_0) >> (((/* implicit */int) (_Bool)1)))) : (max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_0 [(_Bool)1])))))));
        arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0])))))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)12328))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_8 [i_1] = ((((/* implicit */int) max((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1])))) << (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (2142562546))));
        var_17 = ((/* implicit */short) arr_6 [i_1]);
        var_18 = ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_5 [i_1])), (arr_6 [i_1]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (short)-2792)))))));
        var_19 = ((/* implicit */int) (-(max((15U), (((/* implicit */unsigned int) max((var_5), (-2142562542))))))));
    }
    for (short i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            var_20 = 2039524614;
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                var_21 = ((/* implicit */long long int) arr_10 [i_3 + 1] [i_2 - 1]);
                arr_17 [i_3] [i_3] = ((/* implicit */signed char) 4294967291U);
                var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_9 [i_3]) || (arr_9 [i_2 - 1]))))));
            }
            for (signed char i_5 = 2; i_5 < 21; i_5 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */signed char) arr_10 [i_2 + 2] [i_3 + 1])), (arr_18 [i_5] [i_3] [i_2] [i_2])))) - (((((/* implicit */_Bool) (+(var_10)))) ? ((-(((/* implicit */int) (signed char)-3)))) : (((/* implicit */int) min(((unsigned short)36597), (((/* implicit */unsigned short) (_Bool)1)))))))));
                var_24 = ((/* implicit */_Bool) max((((/* implicit */int) arr_14 [i_5 - 2])), (((((/* implicit */_Bool) 30786325577728LL)) ? (((/* implicit */int) ((var_12) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-66)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_5])) : (((/* implicit */int) arr_19 [(_Bool)1] [(_Bool)1] [i_2]))))))));
            }
            arr_20 [i_3] = ((/* implicit */unsigned short) var_3);
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            var_25 = ((/* implicit */long long int) (short)4095);
            arr_24 [i_2] [i_6] = ((/* implicit */signed char) ((((((/* implicit */int) var_3)) * (((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) (signed char)63))));
        }
        arr_25 [i_2] = ((/* implicit */unsigned short) ((arr_9 [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_15 [i_2 + 1] [i_2] [0ULL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2]))) : (1U)))) : (10ULL)))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_2] [i_2])), (arr_14 [i_2 - 1]))))))) + (((((((/* implicit */_Bool) arr_23 [i_2])) || (((/* implicit */_Bool) arr_15 [i_2] [i_2 + 1] [(unsigned short)22])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_2])) ? (((/* implicit */int) (unsigned short)0)) : (var_5)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2]))) / (arr_22 [i_2 + 1])))))));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((signed char) var_3)))))) ? (((/* implicit */int) (!(((_Bool) 1571178595209707141LL))))) : (-269565294)));
}
