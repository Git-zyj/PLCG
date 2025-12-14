/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43664
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
    var_17 = var_0;
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) (short)-6536);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_2))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (short)-17425))) - (((/* implicit */int) ((short) (short)6536)))));
                                var_21 = max((((unsigned long long int) (unsigned char)206)), (max((max((9285231405241255714ULL), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4])))), (min((((/* implicit */unsigned long long int) var_11)), (14388847253207215137ULL))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) (unsigned short)65535);
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [(_Bool)1] [6U] [i_0]);
                }
            } 
        } 
        var_23 += ((/* implicit */_Bool) min((9161512668468295902ULL), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)20303)) : (((/* implicit */int) arr_1 [(unsigned short)4]))))), (9285231405241255714ULL)))));
        arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0 - 1])) - ((+(((/* implicit */int) arr_5 [i_0 + 2] [i_0] [i_0]))))));
        var_24 = ((/* implicit */int) var_8);
    }
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((169936538U), (2594519774U)))) <= (((((/* implicit */_Bool) (short)-6536)) ? (arr_17 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) var_7))))));
            var_26 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (2594519762U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned int) arr_18 [i_6]))));
        }
        arr_20 [(short)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (short)-6536)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28987))))) : (((/* implicit */unsigned long long int) min((534773760), (((/* implicit */int) ((short) (unsigned short)65535))))))));
    }
    var_27 = 1572864;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned char i_9 = 1; i_9 < 24; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 22; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */int) ((var_5) + (((/* implicit */unsigned long long int) var_14))));
                                arr_36 [i_7] [(unsigned char)18] [(_Bool)1] [(unsigned char)4] [i_10] [(unsigned char)18] = ((/* implicit */unsigned short) (((_Bool)1) ? (((308075643194624453ULL) + (((/* implicit */unsigned long long int) 19U)))) : (((unsigned long long int) var_16))));
                                var_29 = ((/* implicit */short) ((int) ((unsigned int) arr_30 [i_7] [i_7] [i_7] [i_7])));
                            }
                        } 
                    } 
                    arr_37 [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) -1928964326))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-6553)))) : (((((/* implicit */_Bool) 18138668430514927161ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6))) : (18138668430514927162ULL)))));
                    arr_38 [i_7] [i_8] [i_8] = ((/* implicit */int) (unsigned short)9050);
                    arr_39 [i_7] [i_8] = ((/* implicit */unsigned short) ((1928964299) / (((/* implicit */int) (unsigned char)27))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (~((+(var_6))))))));
        var_31 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_24 [i_7] [i_7])) - (((/* implicit */unsigned long long int) arr_22 [i_7] [i_7]))));
    }
}
