/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224356
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
    var_16 = ((max((((/* implicit */long long int) ((unsigned char) var_3))), ((+(3900158042580486101LL))))) << (((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_14) : (var_14)))), (var_4))) - (4125415855U))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17777))) : (arr_3 [i_0] [i_1] [i_2])));
                    var_18 = ((/* implicit */unsigned char) var_11);
                    var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_2] [i_0]))))));
                    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                }
            } 
        } 
        arr_6 [i_0] = ((/* implicit */unsigned int) (-(var_13)));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) var_5);
        arr_10 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) + ((-(arr_5 [i_3] [i_3] [i_3])))));
        var_22 = ((/* implicit */unsigned char) (short)17776);
        /* LoopNest 2 */
        for (short i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 1) 
            {
                {
                    arr_17 [i_4] [i_3] [i_4] [i_5 - 1] = ((/* implicit */int) var_1);
                    arr_18 [i_4] [i_4] [i_5 - 1] = ((((/* implicit */_Bool) var_6)) && ((!(((/* implicit */_Bool) var_15)))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_9)))) && ((!(((/* implicit */_Bool) var_14)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -3302722559952467200LL))))) : (var_14))))));
}
