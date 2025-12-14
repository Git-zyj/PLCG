/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51430
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] [(short)6] [i_0] = ((/* implicit */signed char) ((unsigned short) ((unsigned short) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) var_5)) - (109)))))));
                        var_10 = ((/* implicit */signed char) var_7);
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            var_11 ^= var_4;
                            arr_15 [i_0] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_6 [i_4] [i_4] [i_2])))), ((+(((/* implicit */int) arr_3 [i_4] [i_4])))))) >> (((((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (short)30193)) : (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) arr_13 [i_0] [(short)2] [i_0] [(short)2])) : (((/* implicit */int) (unsigned char)19)))))) - (30183)))));
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)14)) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_6 [i_0] [i_2] [i_4])) : (((/* implicit */int) min(((unsigned char)21), (((/* implicit */unsigned char) var_6)))))))));
                            arr_16 [(unsigned short)6] [(unsigned short)10] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)16), (((/* implicit */unsigned short) var_5))))) ? ((~(((/* implicit */int) ((((/* implicit */int) arr_8 [i_3] [(unsigned char)10] [i_3] [i_0] [(unsigned char)7] [i_3])) <= (((/* implicit */int) (unsigned short)8307))))))) : (((/* implicit */int) ((((/* implicit */int) (short)254)) <= (((/* implicit */int) (unsigned char)234)))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            var_13 += ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) arr_0 [(unsigned short)10]))), ((+(((/* implicit */int) var_7))))));
                            arr_20 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_17 [i_2] [i_1] [(signed char)10] [(unsigned short)8])), (arr_14 [i_1] [(unsigned short)0] [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_18 [i_3]))))) : ((~(((/* implicit */int) var_2))))));
                        }
                        arr_21 [i_3] [i_0] [i_2] [(unsigned char)10] [(unsigned short)4] = ((/* implicit */signed char) ((((/* implicit */int) min((min(((unsigned short)31), (((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_2] [i_3] [i_1])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)167)))))))) < (((/* implicit */int) ((unsigned char) var_6)))));
                        arr_22 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)170));
                    }
                } 
            } 
        } 
        arr_23 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? ((+(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)17723)) == (((/* implicit */int) var_1))))))));
        arr_24 [i_0] = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (unsigned char i_7 = 1; i_7 < 8; i_7 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)3)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_26 [i_0])) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_5)) >> (((((/* implicit */int) (unsigned char)223)) - (220)))))))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        for (short i_9 = 3; i_9 < 10; i_9 += 1) 
                        {
                            {
                                arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
                                var_15 = ((/* implicit */unsigned short) ((signed char) (~((+(((/* implicit */int) var_0)))))));
                                arr_37 [i_8] [(unsigned short)8] [(unsigned char)2] [i_0] [i_8] |= ((/* implicit */unsigned char) ((min((((((/* implicit */int) (short)15676)) ^ (((/* implicit */int) (signed char)68)))), ((~(((/* implicit */int) var_1)))))) | (((((/* implicit */int) arr_35 [i_0] [i_8] [i_8] [i_8])) | (((((/* implicit */_Bool) arr_32 [i_0] [i_6] [i_7] [i_8] [(unsigned short)0] [i_8])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))));
                                arr_38 [i_0] [i_0] [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                                var_16 = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                    arr_39 [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) arr_30 [(unsigned char)6] [i_6] [(unsigned char)6] [(short)3]))))))))));
                    arr_40 [i_0] [(signed char)6] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */int) min((var_2), (((/* implicit */unsigned char) arr_25 [(signed char)5] [(signed char)5] [i_0]))))) != (((/* implicit */int) var_0))))), (min((((/* implicit */unsigned short) ((unsigned char) (short)260))), (arr_28 [i_0] [i_6] [i_0])))));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (unsigned char)239))) + (((/* implicit */int) (unsigned short)51670)))))));
                }
            } 
        } 
    }
    for (short i_10 = 0; i_10 < 18; i_10 += 1) 
    {
        var_18 = ((/* implicit */short) (((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))) * (((/* implicit */int) ((short) arr_42 [i_10] [i_10])))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_41 [i_10])) * (((/* implicit */int) arr_42 [(unsigned short)0] [i_10]))));
    }
    var_20 = ((unsigned char) ((signed char) var_5));
}
