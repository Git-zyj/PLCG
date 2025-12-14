/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192567
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-20648)) : (arr_5 [i_0] [i_1 - 2] [i_2]))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (arr_2 [i_0])));
                    var_21 ^= ((/* implicit */int) arr_4 [i_0]);
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */unsigned int) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))), (((/* implicit */int) ((((/* implicit */_Bool) min((1901068442), (((/* implicit */int) var_17))))) || (((((/* implicit */int) var_15)) != (580890155))))))));
    var_23 = ((/* implicit */unsigned short) (((-(var_6))) >> ((((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (1763776631))))) + (26)))));
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) ((var_1) >> (((((/* implicit */int) arr_10 [i_3])) - (186)))))) ? (((/* implicit */int) ((unsigned short) var_15))) : (((var_14) ? (((/* implicit */int) arr_10 [i_3])) : (var_8))))) : (((/* implicit */int) ((((/* implicit */int) var_5)) < ((+(((/* implicit */int) (_Bool)1)))))))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_10 [i_3]))));
        arr_12 [i_3] = ((/* implicit */unsigned short) max((min((((/* implicit */int) var_14)), (arr_9 [i_3]))), (((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) arr_9 [i_3])))))));
        arr_13 [i_3] = ((/* implicit */long long int) arr_10 [i_3]);
    }
    for (short i_4 = 2; i_4 < 19; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 2; i_5 < 22; i_5 += 2) 
        {
            for (unsigned short i_6 = 3; i_6 < 22; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_30 [i_4] [i_4] [i_7] [i_7] [i_6 + 1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_4] [i_4] [i_6 - 2] [i_6 + 1]))))) ? (min((min((arr_17 [i_5 - 1] [i_4]), (((/* implicit */unsigned int) (unsigned short)23134)))), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)42878)) : (((/* implicit */int) (unsigned short)7)))))))))));
                                var_25 = ((/* implicit */int) ((unsigned int) (+(arr_17 [i_5 + 1] [i_4]))));
                            }
                        } 
                    } 
                    arr_31 [i_4] [i_5 + 1] = ((/* implicit */short) (+(max((arr_17 [i_4 - 1] [i_5 - 2]), (arr_17 [i_4 + 1] [i_5 + 1])))));
                }
            } 
        } 
        arr_32 [i_4] = arr_25 [i_4] [i_4];
    }
}
