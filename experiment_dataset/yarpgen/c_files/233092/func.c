/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233092
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
    var_15 = ((/* implicit */long long int) var_11);
    var_16 &= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) (-(var_1)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_17 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned short)16383))));
        var_18 = ((/* implicit */_Bool) ((unsigned short) 2097148));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) (-(min(((-(((/* implicit */int) (unsigned short)16383)))), (min((((/* implicit */int) (unsigned char)13)), (arr_3 [(unsigned short)12] [i_1])))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        arr_12 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)125))));
                        arr_13 [i_1] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) min((arr_7 [i_4]), (((/* implicit */signed char) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
        arr_14 [i_1] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_6 [4] [i_1])) >= (((/* implicit */int) ((short) arr_5 [i_1] [i_1]))))), (arr_4 [i_1] [i_1])));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        var_20 = arr_17 [i_5] [i_5];
        arr_18 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [(signed char)11] [i_5])) >= (((/* implicit */int) arr_8 [i_5] [i_5] [i_5]))));
    }
    var_21 -= ((/* implicit */unsigned char) max((min((((/* implicit */int) (unsigned short)5173)), (((((/* implicit */int) var_11)) & (((/* implicit */int) var_0)))))), (min((((int) (unsigned short)60376)), ((-(var_1)))))));
}
