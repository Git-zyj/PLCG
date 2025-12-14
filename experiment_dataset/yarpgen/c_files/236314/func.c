/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236314
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
    var_20 = ((/* implicit */_Bool) var_12);
    var_21 = ((/* implicit */signed char) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)63)), (var_0)))) << (((((/* implicit */int) min(((unsigned short)43381), ((unsigned short)22141)))) - (22135))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_22 = ((unsigned int) min((arr_2 [i_0 + 1]), (((/* implicit */unsigned short) arr_1 [i_0 + 1]))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0 - 1]))) + (min((arr_0 [i_0 + 1]), (((/* implicit */unsigned long long int) var_6))))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (short)32761))) & (((/* implicit */int) ((((/* implicit */int) (short)24576)) < (((/* implicit */int) arr_1 [i_0 - 1])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) arr_6 [i_1]))));
        arr_8 [i_1] = ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) + (arr_5 [i_1] [i_1])));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) || (((/* implicit */_Bool) arr_6 [i_1]))));
        arr_9 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)43381))));
    }
    for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) (short)-7435);
        /* LoopSeq 1 */
        for (short i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            arr_14 [i_2] = ((/* implicit */unsigned int) var_14);
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3 + 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3 + 2])) || (((/* implicit */_Bool) arr_10 [i_3 - 2])))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            var_27 = var_6;
            /* LoopNest 3 */
            for (unsigned int i_5 = 1; i_5 < 20; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) arr_15 [i_2 + 2]);
                            arr_24 [i_5] [i_7] = ((/* implicit */short) arr_21 [i_2 - 2] [i_2 + 1] [i_5 + 2] [i_5 + 2] [i_7]);
                            arr_25 [i_2] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((signed char) var_14));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) var_18)) * (((/* implicit */int) (unsigned char)116))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_2 + 1])) ? (arr_12 [i_2 - 2]) : (((/* implicit */unsigned long long int) arr_10 [i_2 + 2]))));
            arr_28 [(unsigned char)2] [(unsigned char)2] = ((/* implicit */long long int) var_3);
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)60))))) : ((-(((/* implicit */int) arr_13 [i_2 - 1] [i_2 - 1] [i_8]))))));
        }
    }
    var_32 = ((/* implicit */_Bool) var_12);
}
