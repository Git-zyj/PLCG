/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239314
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
    var_17 = ((/* implicit */unsigned int) ((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) max((((signed char) var_2)), (((/* implicit */signed char) ((((/* implicit */int) (short)27177)) <= (((/* implicit */int) (short)17400)))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            arr_6 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_5 [i_1])), (max((((arr_1 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46))))), (var_7)))));
            var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) || (((/* implicit */_Bool) var_16)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_15);
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    arr_14 [i_1] = ((/* implicit */unsigned char) ((short) 4294967295U));
                    var_19 = ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [(short)2] [(signed char)1]);
                    var_20 = ((/* implicit */unsigned int) var_5);
                }
                for (unsigned int i_4 = 2; i_4 < 22; i_4 += 4) 
                {
                    var_21 = ((/* implicit */signed char) arr_3 [i_0]);
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        arr_19 [8U] [8U] [i_2] [8U] [i_0] [i_1] [(short)13] = ((/* implicit */int) arr_8 [i_1] [i_1] [i_1 + 1] [i_1 - 1]);
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((unsigned int) var_4))));
                        var_22 += ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)11))));
                        var_23 = ((/* implicit */unsigned char) arr_16 [21] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                    }
                    for (unsigned int i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        var_24 = (((+(arr_4 [i_6 - 1] [i_1] [i_0]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (var_0))))));
                        var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)250)))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            arr_27 [i_0] [(signed char)19] [(signed char)19] = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)-9906)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7856)))))));
            arr_28 [(short)10] [i_7] = ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((((/* implicit */int) var_12)) >= (((/* implicit */int) (short)-8489)))) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) (signed char)46)))))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_8 = 1; i_8 < 21; i_8 += 4) 
        {
            arr_31 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8509)) ? (((/* implicit */int) (unsigned char)98)) : (((((/* implicit */_Bool) 1018131962U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)12177))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1018131961U)) || (((/* implicit */_Bool) (unsigned char)4))))) : ((-(((/* implicit */int) var_16))))));
            var_27 = ((/* implicit */int) ((short) (~(arr_21 [i_0]))));
            arr_32 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_8 + 2] [i_8 + 2] [i_8 + 2])) ? (arr_9 [i_0] [i_0] [i_8 + 1] [i_8 + 2]) : (arr_9 [i_0] [i_0] [i_8 + 2] [i_8 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((min(((short)-4161), ((short)-4155))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_8] [i_0] [i_0] [i_0])))))))))));
        }
        var_29 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224)))))) > (((unsigned int) var_3))));
    }
    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        arr_36 [i_9] = var_12;
        /* LoopNest 3 */
        for (signed char i_10 = 2; i_10 < 18; i_10 += 4) 
        {
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                for (short i_12 = 1; i_12 < 17; i_12 += 2) 
                {
                    {
                        arr_44 [i_12] [i_12] [(signed char)18] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned char)232)))), (((((/* implicit */int) (short)4159)) > (((/* implicit */int) (short)21681)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10195)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_0)))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) < (((/* implicit */int) var_16))))))))));
                        arr_45 [i_12] [i_12] [i_12] [i_12] = min((((/* implicit */unsigned int) max((((/* implicit */short) (signed char)18)), (var_4)))), (((397272729U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)110))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_13 = 2; i_13 < 14; i_13 += 2) 
    {
        arr_48 [i_13] [i_13 - 1] = ((((/* implicit */_Bool) ((int) -1268008337))) ? ((+(arr_15 [i_13] [i_13] [i_13] [(signed char)9] [i_13 + 2] [i_13 + 1]))) : (var_7));
        var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) | (var_7)));
        arr_49 [i_13 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_15))) ? ((~(2377304908U))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)45))) + (3276835314U)))));
    }
}
