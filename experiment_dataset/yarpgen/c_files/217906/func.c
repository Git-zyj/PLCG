/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217906
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
    var_12 = ((/* implicit */long long int) var_3);
    var_13 = var_9;
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_5))) ? (max((var_7), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : ((-(max((((/* implicit */long long int) var_3)), (-9223372036854775805LL)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * ((-(max((((/* implicit */unsigned int) arr_1 [(short)0])), (arr_0 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(arr_0 [i_0])));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-2568))))) <= (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))), (((short) (short)-2581)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) arr_1 [i_1]);
        var_18 = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_1]));
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? ((-(arr_5 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2])))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_19 = (!(((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_3])));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    {
                        arr_17 [(signed char)2] [(signed char)2] [(signed char)2] [i_4] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_9)) <= (((/* implicit */int) var_6)))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_4)))) <= (((/* implicit */int) ((((long long int) arr_11 [i_2] [i_2] [i_4] [i_4])) >= (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-5))))))))));
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_11 [i_5] [i_4] [i_3] [3ULL]))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)2567)) : (((/* implicit */int) var_9))))), (arr_5 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_2])) != (((/* implicit */int) (signed char)7)))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        var_21 = ((((arr_20 [i_6]) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)11))))) || (((/* implicit */_Bool) arr_20 [i_6])));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (4294967295U) : (((/* implicit */unsigned int) arr_19 [10U]))))) ? (arr_18 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    }
}
