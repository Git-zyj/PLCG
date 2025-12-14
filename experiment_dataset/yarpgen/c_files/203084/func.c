/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203084
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
    var_18 &= ((/* implicit */unsigned long long int) var_9);
    var_19 = ((/* implicit */short) ((((/* implicit */int) (!(var_4)))) << (((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_3) : (var_10))))) - (132)))));
    var_20 |= ((/* implicit */int) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) 6852253994298548756ULL));
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69))) > (arr_3 [i_0] [i_0])));
            var_21 = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))) : (4087858498283001294ULL)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (int i_3 = 2; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) % (732586874)));
                        var_22 = ((/* implicit */short) ((unsigned char) ((134086656) ^ (arr_7 [i_3] [18] [i_1] [i_0]))));
                        arr_13 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] = ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (arr_0 [i_0] [i_1])));
                    }
                } 
            } 
            arr_14 [i_1] [i_0] = arr_11 [i_0] [i_0];
        }
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-741997223)))) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) -422131795)) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
    }
    for (short i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((max((-134086680), (((/* implicit */int) (unsigned char)215)))), (((/* implicit */int) ((max((((/* implicit */int) arr_17 [i_4])), (-134086657))) == (((/* implicit */int) ((_Bool) var_2)))))))))));
        arr_19 [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_4]))))) + (min((((/* implicit */unsigned int) (signed char)-78)), (1028860737U)))));
        var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_15 [i_4])) * (((unsigned int) (short)10382))))), (15925155988397569621ULL)));
        var_26 = ((((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_4] [i_4])) ? (((/* implicit */int) arr_10 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_1)))) & (((/* implicit */int) arr_10 [i_4] [i_4] [i_4])));
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_6 = 4; i_6 < 11; i_6 += 4) 
        {
            var_27 -= ((/* implicit */_Bool) ((int) arr_17 [i_6 - 1]));
            var_28 = ((/* implicit */unsigned int) min((var_28), (((((/* implicit */unsigned int) -134086687)) - (2731402883U)))));
            arr_26 [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1194555319)) / (((unsigned int) var_2))));
            var_29 -= ((/* implicit */signed char) ((unsigned int) arr_7 [i_6 + 1] [i_6] [i_6 - 1] [i_6 - 2]));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    arr_33 [i_5] [i_5] [i_7] [i_8] [i_7] = (+(6829988500349094752ULL));
                    arr_34 [i_6] [i_6] = ((/* implicit */unsigned char) (_Bool)1);
                }
                var_30 = (((+(11386796076452790132ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))));
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_25 [i_7] [i_7] [i_7]))));
                var_32 = ((/* implicit */int) ((var_9) != (-1194555313)));
            }
        }
        arr_35 [i_5] &= ((int) -134086680);
    }
}
