/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220058
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) (_Bool)1))))))) ? ((-((+(((/* implicit */int) arr_3 [i_1] [i_2])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_2] [i_3 - 2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)238)))))))) ? (((/* implicit */int) (unsigned short)7514)) : (((/* implicit */int) (short)-836))));
                                arr_17 [i_0] [i_2] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((arr_5 [i_0] [i_0]) - (1540831239))))))))));
                            }
                        } 
                    } 
                    var_21 &= ((/* implicit */unsigned int) (unsigned short)58033);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_22 -= (+(((((((/* implicit */int) (unsigned short)46200)) > (((/* implicit */int) (unsigned short)19331)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_5]))) : (arr_18 [i_5]))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_24 [i_5] [i_5] [(short)24] = ((/* implicit */unsigned char) arr_18 [i_5]);
            arr_25 [i_5] = ((unsigned long long int) (_Bool)1);
        }
        arr_26 [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1030908962732263747LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_10)))) & (8LL)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5]))) / (4ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (var_4)))));
    }
    var_23 = ((/* implicit */unsigned char) var_10);
}
