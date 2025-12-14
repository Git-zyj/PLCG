/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25923
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)65531)), (((((/* implicit */int) ((unsigned short) var_10))) & (((/* implicit */int) (unsigned short)63181))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        var_17 = var_2;
                        arr_12 [i_0] [i_0] [i_3] = (unsigned short)47817;
                    }
                    arr_13 [(unsigned short)6] [(unsigned short)6] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)60510))));
                }
                for (unsigned short i_4 = 1; i_4 < 16; i_4 += 1) /* same iter space */
                {
                    var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)35702)) ? ((~(((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 3])))) : (((/* implicit */int) min((arr_0 [i_1 - 1] [i_1 + 2]), (arr_0 [i_1 - 4] [i_1 + 1]))))));
                    var_19 = (unsigned short)42979;
                    arr_17 [i_4] [i_4] [(unsigned short)11] = arr_15 [i_0] [i_0] [i_0];
                    arr_18 [i_4 + 2] [i_4 + 2] [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (var_0)))) ? (((/* implicit */int) max(((unsigned short)65535), (arr_15 [i_0] [i_1] [i_4])))) : (((/* implicit */int) arr_3 [i_1] [(unsigned short)13])))))));
                }
                /* vectorizable */
                for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) /* same iter space */
                {
                    var_20 = var_12;
                    var_21 = ((unsigned short) arr_0 [i_1 - 2] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 17; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_27 [i_5] [i_5] [i_1] [(unsigned short)8] [i_7] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)5048)) ? (((/* implicit */int) (unsigned short)5074)) : (((/* implicit */int) arr_16 [(unsigned short)7] [i_5] [i_5 + 1]))));
                                arr_28 [i_0] [i_0] [(unsigned short)10] [i_6] [i_6] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)7209))));
                                arr_29 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (unsigned short)63197))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            {
                                arr_37 [i_0] [i_1 + 1] [i_0] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_1 - 3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)63176))));
                                var_22 = (unsigned short)13584;
                            }
                        } 
                    } 
                }
                for (unsigned short i_10 = 2; i_10 < 16; i_10 += 2) 
                {
                    arr_41 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) ((((/* implicit */int) arr_8 [i_1])) < (((/* implicit */int) (unsigned short)9523))))))), (((((/* implicit */int) (unsigned short)36934)) + (((/* implicit */int) var_12))))));
                    var_23 ^= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_10] [i_10])) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_10] [i_0] [(unsigned short)2])) : (((/* implicit */int) var_16)))) + ((+(((/* implicit */int) arr_26 [(unsigned short)2] [(unsigned short)2] [i_10 + 2] [i_0] [(unsigned short)10])))))) + (((/* implicit */int) max(((unsigned short)1920), (((unsigned short) arr_10 [(unsigned short)2] [i_1 + 2] [i_10 - 2] [(unsigned short)2] [(unsigned short)2] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 2; i_11 < 17; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 1; i_12 < 14; i_12 += 2) 
                        {
                            {
                                arr_47 [i_0] [i_1] [(unsigned short)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)41946))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_11 - 2] [i_12])) ? (((/* implicit */int) (unsigned short)63169)) : (((/* implicit */int) (unsigned short)65535)))))));
                                var_24 = arr_45 [i_0] [i_0] [(unsigned short)6] [i_12 + 2] [i_12];
                                var_25 &= (unsigned short)60521;
                            }
                        } 
                    } 
                    arr_48 [i_0] [i_1] [(unsigned short)14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)60540)) != (((/* implicit */int) (unsigned short)55808)))))))) ? (((/* implicit */int) ((((((/* implicit */int) arr_9 [i_0] [i_0] [i_10] [i_0])) + (((/* implicit */int) var_5)))) >= (((/* implicit */int) arr_46 [i_0] [(unsigned short)3] [i_1 - 3] [i_1 - 3] [i_10] [(unsigned short)3] [i_10 + 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46003)) << (((((/* implicit */int) (unsigned short)2359)) - (2350)))))) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [(unsigned short)16])))))));
                }
                var_26 = arr_44 [i_0] [i_0] [i_1 - 3] [i_1];
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50230)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) max((arr_36 [i_1] [(unsigned short)8] [(unsigned short)8] [i_0] [i_1]), ((unsigned short)6))))))) ? ((-(((/* implicit */int) var_8)))) : (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_24 [i_0] [(unsigned short)2] [(unsigned short)2] [i_0] [i_1 - 3] [i_1] [(unsigned short)9])) : (((/* implicit */int) arr_40 [i_1] [(unsigned short)16])))), (((/* implicit */int) max((arr_6 [i_0] [i_0] [i_1]), (arr_38 [i_0] [i_1]))))))));
                var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
            }
        } 
    } 
    var_29 = var_15;
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_3)))), (((/* implicit */int) ((unsigned short) (unsigned short)59575)))))) ? (((/* implicit */int) max((min((var_5), (var_15))), (var_11)))) : (max((((((/* implicit */int) var_14)) | (((/* implicit */int) (unsigned short)36799)))), (((/* implicit */int) var_4))))));
    var_31 = ((/* implicit */unsigned short) min((var_31), (var_3)));
}
