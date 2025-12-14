/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194139
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
    var_19 &= ((/* implicit */long long int) max((((((/* implicit */unsigned int) var_6)) & (var_18))), (((/* implicit */unsigned int) var_17))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((-(arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) (unsigned char)64))))) ? (((((/* implicit */_Bool) 8529996453454189772LL)) ? (6917529027641081856LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)173)) > (((/* implicit */int) (_Bool)1))))))))));
        var_20 = ((/* implicit */_Bool) max((((max((-8529996453454189772LL), (((/* implicit */long long int) arr_1 [i_0])))) << (((/* implicit */int) ((((/* implicit */int) var_17)) <= (((/* implicit */int) var_16))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)77))))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] = (unsigned char)242;
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_7 [i_1]))) ? (((/* implicit */int) min(((short)-6047), ((short)-10616)))) : (((/* implicit */int) max((var_17), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (var_14) : (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0])), (arr_2 [(unsigned char)16] [i_2])))) : (max((((/* implicit */unsigned int) (_Bool)1)), (1133616320U)))))));
                    arr_10 [10LL] [i_2] [(short)12] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_15), (((/* implicit */unsigned short) (_Bool)1))))) <= (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)43465)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    arr_22 [(unsigned char)7] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_11 [i_3 + 3] [i_4])) : (((/* implicit */int) (unsigned char)103))))) : (3035614006293257304LL)));
                    var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3 + 3] [1U] [1U] [i_3 + 2]))) : (4315223672265920272ULL))))));
        var_24 = ((/* implicit */signed char) ((12803502043032454892ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16116995523378717616ULL)) ? (var_8) : (((/* implicit */long long int) 1862992933)))))));
    }
    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)7)) == (((/* implicit */int) (unsigned char)255)))) ? (((((/* implicit */long long int) ((/* implicit */int) ((signed char) -1862992934)))) + (((-3035614006293257304LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_2), ((unsigned char)254)))))));
}
