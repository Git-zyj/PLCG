/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198849
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) max((var_16), (var_1)))), (min((var_4), (((/* implicit */unsigned short) var_7))))))) ? (4070627528U) : (224339768U)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) var_14)))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0])) : ((+(((/* implicit */int) arr_1 [i_0]))))));
        var_19 &= ((/* implicit */int) var_0);
    }
    for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    {
                        arr_11 [i_1] [i_1 - 2] [i_2] = ((/* implicit */short) 4070627528U);
                        arr_12 [i_1 - 2] [i_1] [i_3] = ((/* implicit */_Bool) (unsigned char)49);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) max((max((arr_7 [i_1 + 1] [i_1] [i_1] [i_1 + 1]), (((/* implicit */int) arr_9 [i_1 - 2] [i_1] [i_1] [i_1 - 2])))), (max((min((arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]), (-139254971))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 2])))))))));
    }
    var_21 = ((/* implicit */unsigned int) max((min((5243397009620357670ULL), (((/* implicit */unsigned long long int) (short)12025)))), (((/* implicit */unsigned long long int) var_11))));
    var_22 ^= ((/* implicit */unsigned char) 224339768U);
}
