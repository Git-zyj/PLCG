/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34315
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((min((var_7), (((/* implicit */unsigned int) arr_1 [i_0])))), (((/* implicit */unsigned int) -483841964)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_10 *= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (min((arr_11 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */unsigned int) var_9)))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) min((var_5), (-9223372036854775801LL)));
                    }
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        var_11 = ((short) ((long long int) var_6));
                        var_12 = ((/* implicit */_Bool) min((var_12), (var_2)));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */_Bool) -5831483688117912267LL)) ? (arr_17 [i_1] [13U] [i_5] [i_6]) : (var_5))) >> (((((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_9 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))))) - (1020410842059327004LL))))));
                                arr_24 [i_0] [i_0] [i_0] [i_2] [i_5] [i_0] [i_6] = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_13 = ((/* implicit */signed char) ((max((var_7), (arr_2 [i_0]))) <= (max((((/* implicit */unsigned int) (unsigned short)47454)), (arr_2 [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        arr_27 [i_7] [i_7] = ((/* implicit */long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (4029750117U))));
        arr_28 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65321))))) ? (((((/* implicit */_Bool) var_3)) ? (var_7) : (var_7))) : (var_7)));
    }
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) ? (3401904154U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
}
