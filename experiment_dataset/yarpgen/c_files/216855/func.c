/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216855
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((72057593501057024ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((2772576855610305014LL) != (arr_0 [i_1]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? (max((arr_1 [i_0]), (((/* implicit */long long int) (unsigned char)96)))) : (((/* implicit */long long int) arr_5 [i_1])))))));
                var_17 = 4229779589128479350LL;
                arr_7 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_18 = ((((/* implicit */_Bool) ((arr_4 [i_2 - 1] [i_1] [i_3 + 3]) | (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 1] [i_1] [i_0])))))) ? (((((/* implicit */_Bool) (~(arr_0 [i_3])))) ? ((-(arr_4 [i_0] [i_1] [2LL]))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)224), (var_1))))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((((-2772576855610305027LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_9 [i_3] [i_2] [i_1])) - (130))))) : (((long long int) arr_5 [i_1])))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_15 [i_3] [i_1] [i_1]))) ? (arr_15 [i_0] [i_1] [i_0]) : (((2772576855610305028LL) >> (((arr_15 [i_0] [i_1] [i_2 + 1]) - (8803196274267507338LL)))))));
                                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3 - 1] [i_1] [(unsigned short)8] [i_3 + 1])) >> (((((/* implicit */int) arr_14 [9] [i_3 - 3] [(unsigned short)9])) - (48045))))))));
                                arr_17 [i_1] [i_2 - 2] [(_Bool)1] [i_2 + 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [3LL] [i_0] [i_4])) ? (((/* implicit */int) arr_14 [0LL] [(unsigned char)8] [(unsigned char)8])) : (((/* implicit */int) var_2))))))))));
                                arr_18 [i_0] [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0] [i_1]))) << ((((~(arr_4 [i_3] [i_2] [i_1]))) + (9169884885949954473LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_4] [i_1] [i_0])) ? (-2772576855610305009LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) >= ((+(var_12))))))) : (min((-3101618691102605096LL), (-2511534073699616485LL)))));
                            }
                            var_20 = ((/* implicit */int) ((unsigned int) min((arr_4 [(unsigned short)3] [i_0] [i_0]), (((/* implicit */long long int) (~(805306368)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((unsigned short) 7752942971979165224LL));
}
