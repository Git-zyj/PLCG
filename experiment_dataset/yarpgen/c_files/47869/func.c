/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47869
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30600)) << (((1318905522) - (1318905521))))))));
        var_17 = arr_1 [i_0 + 1];
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((0) / (((((/* implicit */_Bool) (unsigned short)21059)) ? (((/* implicit */int) (unsigned short)21085)) : (((/* implicit */int) (_Bool)1)))))) + (max(((+(((/* implicit */int) arr_2 [i_0 - 1])))), (((/* implicit */int) (short)511)))))))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((((int) min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_3])), (arr_5 [i_0] [i_1])))) <= (((/* implicit */int) ((((/* implicit */int) (short)-503)) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_0])) && (((/* implicit */_Bool) var_12))))))))));
                        arr_14 [(unsigned short)8] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_2] [2ULL] [2ULL] [2ULL] [i_3] [2ULL])) : (((/* implicit */int) (short)-1))))) ? ((~(var_4))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21059)))))) : (((unsigned long long int) arr_12 [i_1 + 1] [i_0 - 1]))));
                        arr_15 [i_3] [i_2] [i_2] [(unsigned short)12] = ((/* implicit */short) min(((-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 1635631542)) : (arr_0 [i_2] [i_0]))))), (((/* implicit */unsigned long long int) min((1635631549), (((/* implicit */int) max((arr_2 [i_0]), (var_0)))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 1; i_4 < 19; i_4 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [i_4]))) : (var_4)))), (max((((/* implicit */unsigned long long int) var_13)), (arr_5 [i_4] [12]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-30420)) ? (((/* implicit */int) (_Bool)1)) : ((+(1635631570))))))));
        var_21 = ((/* implicit */unsigned char) arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1]);
        arr_19 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) var_11)) : ((-(((((/* implicit */_Bool) (short)-504)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (short)-32761))))))));
        var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)75))))) + (max((((/* implicit */unsigned long long int) (short)16384)), (5459853367843915100ULL)))));
    }
    var_23 &= ((/* implicit */long long int) var_6);
    var_24 &= ((/* implicit */long long int) var_14);
    var_25 = ((/* implicit */short) min((var_25), ((short)-23)));
}
