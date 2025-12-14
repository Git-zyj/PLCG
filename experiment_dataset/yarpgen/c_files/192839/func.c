/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192839
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (-(((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (short)13880)))))))));
                    var_14 = ((/* implicit */int) max((((arr_0 [i_2]) ? (max((var_12), (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) ((long long int) (_Bool)1)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                    {
                        arr_8 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) var_9);
                        arr_9 [i_0] [i_2] [i_0] [18] [12LL] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) (short)0))))), (max((((/* implicit */long long int) var_11)), (6158513666351086385LL)))))) ? (((/* implicit */int) ((signed char) (unsigned char)215))) : (((/* implicit */int) var_10))));
                        var_15 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_0))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */_Bool) ((long long int) (unsigned char)225));
                        arr_14 [i_0] [6ULL] [3U] [i_2] [3U] [i_4] = ((/* implicit */long long int) var_10);
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(unsigned char)3] [9ULL] [(signed char)14] [i_0])) ? (arr_7 [i_0] [(short)18] [i_1] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [(_Bool)1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))))));
                        var_18 = ((/* implicit */int) ((signed char) ((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))));
                        arr_15 [10] [(unsigned char)19] [i_2] [i_2] = ((/* implicit */short) (+(var_0)));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 16; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [1LL] [i_2] [i_0] = ((((/* implicit */int) max((max((((/* implicit */unsigned char) var_10)), (var_4))), (((/* implicit */unsigned char) var_3))))) & (max((((((/* implicit */int) (_Bool)1)) >> (((var_8) - (11104399949179328981ULL))))), (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (signed char)113))))))));
                                arr_22 [i_0] [(short)11] [(short)11] [(unsigned char)17] [(unsigned char)17] [i_2] [13U] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (3167542355U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) : (var_0)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned short) (short)3433)), ((unsigned short)8472))))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_11)), (var_9))))))) & (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_11)))))));
}
