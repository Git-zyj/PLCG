/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210489
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)27376)) && (((/* implicit */_Bool) (unsigned short)27636))))), (((short) arr_4 [i_0] [i_1] [i_0]))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((min((var_4), (arr_6 [i_0] [i_0 + 1] [(unsigned char)10] [i_0]))) / ((-(((/* implicit */int) (unsigned char)251)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (var_7) : (arr_6 [i_0] [i_1] [i_0] [i_0])));
                        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [11LL] [i_1] [i_2] [i_3])) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (signed char)114)))))));
                        arr_10 [i_3] [i_0] [0ULL] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_0] [i_0])) ? (var_7) : (((/* implicit */int) (unsigned short)37916))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_2] [(unsigned short)12] = ((/* implicit */short) ((((5895640194245994666LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-92))))) ? (792023231117467099LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)29)), ((short)11188)))))));
                        var_24 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) arr_0 [i_0 + 1])), (-792023231117467095LL))), (((/* implicit */long long int) max((arr_11 [i_0 - 1] [i_0 - 1] [i_0]), (var_2))))));
                        arr_14 [i_0 - 2] [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27615))) - (15325474732225030794ULL))) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)106)), (-5793929996289417924LL)))))))));
                        var_25 = ((/* implicit */unsigned short) min(((unsigned char)0), (min((max((((/* implicit */unsigned char) (signed char)-92)), ((unsigned char)149))), (((/* implicit */unsigned char) (signed char)-49))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (signed char i_7 = 3; i_7 < 14; i_7 += 1) /* same iter space */
                            {
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((long long int) (signed char)65)))));
                                arr_24 [7U] [(unsigned char)10] [i_0] [i_0] [i_1] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_0] [i_0 + 1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_20 [i_0] [i_0 - 1] [i_7] [i_7 - 1] [i_0])) : (var_0)));
                                arr_25 [i_0] [i_1] [i_1] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_7 + 1] [i_7 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_19)));
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_5] [0ULL] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-792023231117467095LL) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_16)))));
                            }
                            /* vectorizable */
                            for (signed char i_8 = 3; i_8 < 14; i_8 += 1) /* same iter space */
                            {
                                var_27 = ((/* implicit */unsigned char) ((unsigned int) ((-792023231117467091LL) + (((/* implicit */long long int) ((/* implicit */int) var_15))))));
                                var_28 = var_0;
                                var_29 = arr_22 [i_0 + 1] [i_0 - 1] [i_8 + 1];
                                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 792023231117467085LL)) ? (792023231117467085LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))));
                            }
                            arr_29 [i_0] [(unsigned short)3] [i_0] [(unsigned short)3] = min((((arr_17 [i_6] [i_1] [i_0]) / (((/* implicit */unsigned long long int) ((var_14) ? (792023231117467085LL) : (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_5]))))))), (((/* implicit */unsigned long long int) (short)-1)));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) var_13))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        var_32 = ((/* implicit */unsigned char) min((min((max((((/* implicit */long long int) var_14)), (8505933012012018069LL))), (((792023231117467085LL) % (((/* implicit */long long int) arr_31 [i_9])))))), (((/* implicit */long long int) ((unsigned short) ((_Bool) 2026086603871111882ULL))))));
        var_33 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [i_9]))))), (((((/* implicit */_Bool) arr_32 [0LL])) ? (arr_32 [i_9]) : (arr_32 [i_9])))));
        var_34 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) 2866601400U)) || ((!(((/* implicit */_Bool) var_11))))))), (((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) (_Bool)0)) : (-1762072952)))));
        var_35 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) min((var_18), (((/* implicit */int) min(((unsigned short)13418), (((/* implicit */unsigned short) (_Bool)1)))))))) | (var_3)));
        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)13411)) : (((/* implicit */int) (unsigned char)203)))))))))));
    }
}
