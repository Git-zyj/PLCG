/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216434
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_2 [i_0])) : (arr_1 [i_0]))))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)6))));
    }
    for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) min((2147483618), (((/* implicit */int) (unsigned char)79))));
        arr_7 [i_1 - 2] = ((/* implicit */int) arr_5 [i_1]);
    }
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_9 [i_2]) : (arr_9 [i_2])))))));
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(18446743936270598144ULL)))) ? (((/* implicit */unsigned long long int) arr_10 [i_2])) : (((var_17) ? (arr_9 [(_Bool)1]) : (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (arr_10 [i_2]) : (((/* implicit */int) var_11)))))));
        arr_12 [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((max((((/* implicit */int) (signed char)-24)), (arr_10 [i_2]))) / (((/* implicit */int) min((arr_8 [i_2] [i_2]), (((/* implicit */short) (signed char)-110)))))))), (((((/* implicit */_Bool) ((unsigned char) -2147483624))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [21U]))) | (18446743936270598144ULL))) : (((/* implicit */unsigned long long int) min((-589190030), (((/* implicit */int) var_12)))))))));
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_8 [i_2] [i_2]))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    {
                        arr_27 [i_3] [i_6] [i_5] = max((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [17ULL] [i_6]))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((var_11), (arr_15 [i_3])))) : (arr_10 [i_4]))));
                        var_23 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_23 [16ULL]))) != (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_22 [(unsigned short)17] [i_4] [i_5] [i_6]))) || (((/* implicit */_Bool) ((unsigned long long int) 503316480U))))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) arr_8 [i_3] [(short)7])))) - (((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3] [i_3] [i_3]))))))))) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 589190029)), (6U)))), (min((17073331936383214614ULL), (arr_24 [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-589190034))))));
        var_25 = ((/* implicit */int) ((unsigned int) 18446743936270598140ULL));
        arr_28 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) min((((503316480U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_3]))))), (((503316480U) ^ (((/* implicit */unsigned int) -595792458)))))));
    }
    var_26 = ((/* implicit */long long int) (unsigned short)78);
}
