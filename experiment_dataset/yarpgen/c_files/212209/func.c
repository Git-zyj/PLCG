/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212209
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */unsigned int) arr_0 [i_2]);
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 + 4]);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_0] [i_3] [i_3])))))));
            var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3] [i_0] [i_0])) - (((/* implicit */int) arr_9 [i_3] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (3700345842775688290LL))) : (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) (unsigned short)13526)) : (((/* implicit */int) var_1))))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (var_4))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3]))))))))));
            var_17 &= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)75))))));
            arr_10 [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)0))))) ? (3792226474U) : (502740814U)))) ? (((((/* implicit */int) var_7)) | (((/* implicit */int) arr_6 [i_3] [i_3] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_9 [(unsigned short)3] [i_3] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_3] [i_3]))))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            arr_15 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_0]))));
            arr_16 [i_0] [i_4] = ((/* implicit */int) ((502740800U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3)))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    {
                        arr_22 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 502740787U)) ? (3782219980U) : (502740831U)));
                        arr_23 [i_6] [i_5] [(unsigned char)14] [(unsigned char)14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4] [i_4])) ? (arr_19 [i_6] [i_5] [i_4] [i_0]) : (arr_19 [i_0] [i_0] [i_0] [i_0])));
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) arr_2 [(unsigned short)3]));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            arr_28 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) arr_5 [i_7] [i_7] [i_0]);
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (var_10)))))))));
        }
        arr_29 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (var_3)))) && (((/* implicit */_Bool) ((unsigned int) arr_9 [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        arr_32 [i_8] [i_8] = ((/* implicit */signed char) (((_Bool)1) ? (568264093U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))));
        var_19 = ((/* implicit */long long int) (+(arr_4 [i_8] [i_8])));
        arr_33 [i_8] = var_5;
        arr_34 [i_8] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8]))));
    }
    for (int i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        arr_37 [i_9] = ((min((((((/* implicit */_Bool) arr_36 [i_9] [i_9])) && (((/* implicit */_Bool) arr_36 [i_9] [i_9])))), (((((/* implicit */_Bool) 9771868389206158150ULL)) && (var_9))))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-49)), ((short)16721)))) : (((/* implicit */int) var_5)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_40 [i_9] [i_10] = ((/* implicit */unsigned int) -5100167834744511779LL);
            var_20 = ((/* implicit */signed char) -60401757);
        }
    }
    var_21 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 65504U)) ? (((int) 1132711227U)) : (((/* implicit */int) var_12))))) : (var_10)));
}
