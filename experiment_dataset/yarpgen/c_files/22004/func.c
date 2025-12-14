/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22004
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
    var_18 &= ((/* implicit */unsigned int) var_12);
    var_19 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0]) != (((/* implicit */unsigned int) var_14))))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_9)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)88)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)211))))), ((~(((/* implicit */int) var_11))))));
            arr_5 [i_0] [i_0] = ((/* implicit */_Bool) max((max((max((((/* implicit */unsigned int) (unsigned char)3)), (arr_1 [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (var_14)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_4)))) ? (max((arr_1 [i_0]), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0])))))))));
            arr_6 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18041119710801174121ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned long long int) (+(var_6))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_1])) > (((/* implicit */int) (unsigned char)44))))), ((+(var_8))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-110))))) ? ((~(540431955284459520ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (1ULL) : (((/* implicit */unsigned long long int) arr_1 [i_1]))))))))) < (arr_1 [i_0])));
                arr_10 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_8 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61495))) : (((((/* implicit */_Bool) (short)-19144)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_16))))))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_22 += ((/* implicit */long long int) var_11);
                            var_23 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_3 [i_0] [i_0]))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
            {
                arr_17 [i_0] [20] [i_0] = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_1] [i_5])), (((((/* implicit */_Bool) var_6)) ? (arr_12 [i_1] [i_1] [i_1]) : (arr_1 [i_0]))))), (((/* implicit */unsigned int) ((arr_9 [i_0]) ? (((/* implicit */int) arr_9 [i_5])) : (((/* implicit */int) arr_9 [i_0])))))));
                var_24 = ((/* implicit */unsigned char) ((unsigned long long int) 18446744073709551588ULL));
                arr_18 [i_0] [i_1] = ((/* implicit */signed char) arr_3 [i_0] [i_1]);
            }
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                arr_23 [i_0] [i_0] [(short)18] [i_6] = ((/* implicit */long long int) max(((short)-19144), (((/* implicit */short) (unsigned char)225))));
                var_25 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) ((unsigned short) arr_14 [i_6] [i_1] [i_6] [i_6] [i_6] [i_0]))), (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_1 [i_0]) : (arr_1 [i_1]))))) * (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [(unsigned char)0])) & (((/* implicit */int) var_9))))), (arr_1 [i_6])))));
                arr_24 [i_0] [i_0] [i_6] &= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((short) arr_12 [i_0] [i_1] [i_6]))) : (((int) 2U))))));
            }
        }
    }
}
