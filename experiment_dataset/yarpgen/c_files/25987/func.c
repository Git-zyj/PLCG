/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25987
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
    var_18 = ((/* implicit */int) var_17);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)20897))) * (0U)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) (-((-(max((var_16), (((/* implicit */unsigned long long int) var_12))))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                for (unsigned int i_3 = 3; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */short) arr_8 [i_0] [i_1] [i_2]);
                        var_22 += ((/* implicit */short) 0U);
                        arr_12 [i_0 + 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1303286811)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (11U)))) ? (var_8) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_23 = ((/* implicit */short) max(((~((~(4294967295U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_4] [i_4])), (var_16)))))))));
        arr_16 [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4]))) & (var_1)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_4])) * (((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4]))))) : ((~(4294967295U)))))));
        var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_4])))), (((/* implicit */int) ((short) 4294967295U)))));
        /* LoopSeq 1 */
        for (long long int i_5 = 4; i_5 < 11; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                arr_21 [i_5] [i_5] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_10))))));
                arr_22 [i_5] [i_5 + 1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_12))) ? (((((/* implicit */unsigned long long int) arr_5 [i_4] [i_6])) * (((2414778419147408944ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)32758)), (4294967295U))))));
            }
            arr_23 [i_5] [i_5 + 1] [i_5] = ((/* implicit */int) (((!(((/* implicit */_Bool) min((3598514990U), (((/* implicit */unsigned int) arr_6 [i_4] [i_5] [i_5 - 2] [i_5]))))))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) arr_5 [i_4] [i_5])) ? (1U) : (6U))) : (((unsigned int) var_4)))) : (((((/* implicit */_Bool) arr_17 [i_5 - 3] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (4294967282U)))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    {
                        arr_31 [i_4] [i_7] [i_8] [i_9] = min((((/* implicit */long long int) ((var_0) ? (((/* implicit */int) arr_6 [i_4] [i_7] [i_8] [i_9])) : (((/* implicit */int) ((_Bool) arr_6 [i_4] [i_9] [i_8] [i_9])))))), ((((+(2769223883364978274LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_12)) : (-1)))))));
                        var_25 = ((/* implicit */short) (~(((/* implicit */int) ((short) ((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))));
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) ((((/* implicit */int) var_7)) << (((((/* implicit */int) (unsigned short)31257)) - (31247)))))))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) 172704204U))));
}
