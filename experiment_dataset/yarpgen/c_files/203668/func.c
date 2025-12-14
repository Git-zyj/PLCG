/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203668
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
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((unsigned long long int) 288230376151711743ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))));
                    var_18 = ((/* implicit */unsigned int) ((unsigned char) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4)))) : (var_11))));
                }
            } 
        } 
        arr_7 [i_0 + 1] [(short)7] = arr_6 [i_0] [i_0] [(_Bool)1];
        var_19 -= ((/* implicit */short) var_1);
        var_20 &= ((/* implicit */signed char) min(((+(arr_0 [i_0] [i_0]))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned short)49915)) : (((/* implicit */int) var_14))))) - (var_1)))));
    }
    for (short i_3 = 1; i_3 < 12; i_3 += 3) 
    {
        arr_10 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (unsigned char)4)), (18158513697557839876ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11))))))) ? (((/* implicit */int) arr_5 [i_3] [i_3])) : (((/* implicit */int) ((short) arr_5 [i_3] [i_3 + 3])))));
        arr_11 [i_3] [(short)8] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15621))) * (4046916652U))) << (((((/* implicit */int) var_7)) - (27387)))))));
    }
    var_21 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_5])) ? (arr_0 [i_4] [23ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_4]))))), (((/* implicit */unsigned int) ((unsigned char) var_3))))), (((/* implicit */unsigned int) arr_2 [i_4]))));
                arr_16 [i_4] [i_4] = ((long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_4]))) - (var_3))));
            }
        } 
    } 
}
