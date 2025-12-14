/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191119
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
    var_10 *= ((/* implicit */int) min((((unsigned long long int) min((((/* implicit */signed char) var_9)), (var_8)))), (((/* implicit */unsigned long long int) ((signed char) min((var_1), (((/* implicit */unsigned int) var_6))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_11 = ((/* implicit */long long int) min((((var_2) >> (((/* implicit */int) min(((unsigned short)2962), (((/* implicit */unsigned short) (signed char)24))))))), (((/* implicit */int) min((((((/* implicit */int) var_0)) >= (((/* implicit */int) var_6)))), (((((/* implicit */int) var_6)) < (var_2))))))));
            arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (max((((/* implicit */unsigned int) arr_1 [i_0])), (var_5)))))) & (((((/* implicit */long long int) ((var_5) >> (((var_7) - (3785832107U)))))) ^ (((long long int) var_3))))));
        }
        for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 3; i_3 < 14; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_12 -= var_7;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 13; i_5 += 4) 
                        {
                            arr_18 [i_2] [i_2] [(short)1] [i_4] [(short)10] = ((/* implicit */long long int) arr_1 [i_4]);
                            var_13 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)30))) / (5677473151343951271LL))) << (((((/* implicit */int) (short)-32024)) + (32038)))));
                            arr_19 [i_0] [i_4] [i_3] [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4] [i_4])) * (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_2)))))) : (var_7)));
                        }
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max((((/* implicit */long long int) ((arr_17 [i_0] [12U] [12U] [i_0] [i_0] [(unsigned short)14] [i_0]) >> (((/* implicit */int) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))), (min((((/* implicit */long long int) (short)-30684)), (9223372036854775807LL))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_26 [i_2] = ((/* implicit */_Bool) (((+(min((((/* implicit */unsigned int) var_3)), (var_1))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1] [i_0])))));
                    arr_27 [i_2] [i_2] [i_2] [i_7] = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */int) ((short) var_0))), (((((/* implicit */int) (short)30685)) * (((/* implicit */int) (unsigned short)39830))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (var_5))) >> (((((unsigned int) arr_16 [i_7] [i_0] [i_6] [i_2] [i_0] [i_0] [i_0])) - (2947123559U)))))));
                    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((_Bool) var_1))), (min((arr_16 [i_0 - 1] [i_0 - 1] [i_6] [i_2 + 1] [i_6] [i_0 - 1] [i_2 + 1]), (arr_16 [i_0 + 1] [i_2 - 1] [(short)5] [i_2 + 1] [i_2] [i_2 - 1] [i_0])))));
                    arr_28 [i_2] [i_2] [i_2] [i_0 + 1] = ((/* implicit */signed char) max((max((13835058055282163712ULL), (((/* implicit */unsigned long long int) 3077511220U)))), (((/* implicit */unsigned long long int) (short)4523))));
                    var_16 = ((/* implicit */_Bool) ((min((arr_7 [i_7] [i_0] [i_0]), (((/* implicit */unsigned int) min((var_0), (((/* implicit */short) var_8))))))) - (var_1)));
                }
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_21 [i_0] [i_0] [i_2 - 1] [i_0 - 1]) / (arr_21 [i_6] [5] [i_2 + 1] [i_0 + 2])))) ? (max((((/* implicit */long long int) var_6)), (arr_21 [5] [i_2 + 1] [i_2 + 1] [i_0 - 2]))) : (((((/* implicit */_Bool) var_6)) ? (arr_21 [i_6] [(short)11] [i_2 + 1] [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                    arr_31 [i_2] [i_2] [i_6] [i_8] [i_6] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) 7849694492642192843LL)) & (min((((/* implicit */unsigned long long int) 2147483636)), (4503599627370495ULL))))) < (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) var_3)))))));
                    arr_32 [i_8] [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */signed char) arr_1 [i_2 + 1])), (var_6)));
                    var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((((/* implicit */int) var_3)) + (((/* implicit */int) var_4))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (arr_0 [(unsigned char)0])))) ? (((((/* implicit */unsigned int) arr_29 [i_2] [i_8] [4ULL] [i_8])) * (var_1))) : (min((var_5), (((/* implicit */unsigned int) var_2))))))));
                }
                var_19 *= ((/* implicit */unsigned long long int) ((signed char) min((((((/* implicit */_Bool) arr_29 [i_0] [(_Bool)1] [i_6] [i_2])) ? (var_1) : (arr_12 [i_0 + 2]))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)91)), ((unsigned short)62555)))))));
                var_20 = ((/* implicit */_Bool) (~(max((((((/* implicit */int) arr_8 [i_2] [i_0])) / (((/* implicit */int) var_9)))), (((/* implicit */int) ((signed char) var_0)))))));
                arr_33 [i_0] [i_2] [i_6] = ((/* implicit */unsigned short) max((((unsigned int) 4294967294U)), (min((((/* implicit */unsigned int) min((var_2), (((/* implicit */int) var_0))))), (((var_7) >> (((((/* implicit */int) var_6)) - (98)))))))));
            }
        }
        arr_34 [i_0] = ((/* implicit */unsigned int) arr_29 [i_0] [i_0] [i_0] [i_0]);
        arr_35 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 2])) + (((/* implicit */int) var_3)))), ((+(((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 2]))))));
    }
}
