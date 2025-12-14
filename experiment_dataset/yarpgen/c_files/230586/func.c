/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230586
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
    var_16 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) (+(var_0)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_17 &= ((/* implicit */long long int) ((short) 1058623112U));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((max((arr_7 [i_1] [i_3 - 1] [i_3] [i_3 + 1]), (((/* implicit */short) (unsigned char)255)))), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) var_7))))))))));
                            var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3 - 1]))))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_3 + 1] [i_3] [i_3] [i_3])) != (((/* implicit */int) arr_7 [i_3 + 1] [i_3] [i_3] [(unsigned short)5])))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))) == (min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (arr_2 [i_0] [i_1] [i_2])))), (max((((/* implicit */long long int) var_15)), (arr_4 [i_1] [i_3])))))));
                            var_21 = ((/* implicit */unsigned short) max((((arr_1 [i_3 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 1] [i_3 + 1]))))), (((/* implicit */unsigned long long int) ((var_8) & (var_8))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) max((min((4294967295U), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) ((int) var_7)))));
                arr_10 [i_1] [i_0] = ((/* implicit */unsigned int) (_Bool)0);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_13 [i_4] = ((/* implicit */long long int) ((arr_12 [i_4]) / (((/* implicit */unsigned long long int) 489339724U))));
        var_24 = ((/* implicit */short) (~(arr_12 [i_4])));
    }
    for (unsigned int i_5 = 3; i_5 < 17; i_5 += 3) 
    {
        arr_16 [i_5] [i_5] = ((/* implicit */_Bool) var_11);
        var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) max((1873738954592574872LL), (((/* implicit */long long int) arr_14 [i_5 + 3]))))) && (((/* implicit */_Bool) max((arr_14 [i_5 + 3]), (((/* implicit */unsigned short) ((short) arr_14 [i_5]))))))));
        var_26 = ((/* implicit */short) arr_15 [i_5] [i_5]);
        /* LoopNest 2 */
        for (unsigned int i_6 = 2; i_6 < 18; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((short) var_7))));
                        var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (8388607U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_5] [i_6] [i_7] [i_8]))))) % (((/* implicit */unsigned int) var_8))));
                        var_29 = ((/* implicit */_Bool) ((long long int) var_15));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        var_30 = ((long long int) arr_25 [i_6 + 2] [i_6 + 2] [i_5] [i_5 + 3] [(unsigned short)8]);
                        arr_30 [i_9] [i_5] [(unsigned short)0] [i_5] [i_5] = ((/* implicit */unsigned short) arr_28 [i_9] [i_5] [i_5] [20LL]);
                    }
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) | (((((/* implicit */int) (unsigned char)0)) << (((var_4) - (1305994223)))))))) : (((unsigned long long int) arr_28 [i_6 - 2] [i_5] [i_6 - 1] [i_6 - 1]))));
                        arr_34 [i_5] [i_5] [(_Bool)1] [i_5] [i_5] = ((/* implicit */unsigned short) (unsigned char)37);
                        var_32 &= ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) min((1571909380), (((/* implicit */int) (unsigned short)35340))))), (max((arr_31 [i_5]), (((/* implicit */unsigned long long int) var_4))))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        arr_37 [(unsigned short)16] [i_5] [i_7] [i_11] = ((/* implicit */unsigned int) max((var_7), (((((/* implicit */_Bool) var_9)) ? (min((var_7), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) 3140153401362991925ULL))));
                    }
                    for (int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        var_34 &= (unsigned short)32240;
                        var_35 = ((/* implicit */unsigned short) (~((~(arr_21 [i_5] [i_5] [i_5 + 4] [i_6])))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_13 = 3; i_13 < 9; i_13 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_14 = 1; i_14 < 9; i_14 += 2) 
        {
            var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) var_9))));
            arr_47 [i_14] [i_14] [i_13] = ((/* implicit */short) ((min((max((var_11), (((/* implicit */unsigned long long int) arr_43 [(unsigned short)5])))), (min((((/* implicit */unsigned long long int) arr_45 [9U] [i_14])), (var_7))))) == (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) arr_22 [i_14 - 1] [i_14 - 1] [i_13 - 1])))))));
            arr_48 [i_13 - 3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23984)) ? (arr_4 [i_14 - 1] [i_13 - 3]) : (((/* implicit */long long int) var_4))))) || (((((/* implicit */int) arr_6 [i_13 - 2])) == (((/* implicit */int) var_12))))));
        }
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_12))) >= (((long long int) ((int) 2305838611167182848ULL)))));
        var_38 = ((/* implicit */long long int) ((unsigned int) arr_5 [i_13]));
    }
}
