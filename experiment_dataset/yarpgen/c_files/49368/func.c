/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49368
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_9 [(short)2] [i_1] [i_1] = var_5;
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_0 - 2] [i_1] [i_2] [i_3] [i_2]))));
                            var_20 |= ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)26334))))) % (var_11));
                        }
                        arr_13 [i_0 - 2] [i_1] [i_2] [i_3] = ((/* implicit */short) (signed char)8);
                    }
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 1] [(short)1] [i_0 - 1] [(short)10])) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_12 [(short)4] [i_0 - 1] [i_0 - 3] [i_0 + 1] [i_0 + 1]))));
                    arr_14 [i_0] [i_0 - 3] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_16)) / (((/* implicit */int) arr_3 [i_0 + 1]))));
                    var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) 975901872U)) && (((/* implicit */_Bool) (unsigned short)45698))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) var_2);
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        var_24 ^= ((/* implicit */short) ((((/* implicit */int) arr_16 [i_5])) - (((/* implicit */int) arr_16 [i_5]))));
        var_25 = ((/* implicit */short) (~(((/* implicit */int) var_1))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_5] [i_5]))));
        arr_17 [i_5] [i_5] = (unsigned short)0;
    }
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) 975901872U)) ? (((/* implicit */int) arr_15 [i_6] [i_6])) : (((/* implicit */int) ((unsigned char) var_0))))));
        arr_22 [i_6] = ((/* implicit */short) ((arr_18 [i_6] [1U]) | (((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_6])))))));
    }
    /* LoopSeq 2 */
    for (short i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_8 = 4; i_8 < 9; i_8 += 2) 
        {
            arr_28 [i_8] [(short)1] = ((/* implicit */signed char) ((unsigned char) arr_16 [i_8 - 2]));
            var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_7] [(unsigned short)9] [i_8 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) / (((/* implicit */int) arr_16 [i_8 - 4]))));
        }
        arr_29 [i_7] = ((/* implicit */unsigned int) arr_3 [(unsigned char)3]);
        /* LoopNest 3 */
        for (unsigned char i_9 = 4; i_9 < 8; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                for (unsigned int i_11 = 1; i_11 < 9; i_11 += 3) 
                {
                    {
                        arr_38 [i_9] [i_9] [i_10] = ((/* implicit */signed char) ((unsigned short) (short)-5679));
                        var_29 = ((/* implicit */unsigned char) var_12);
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((short) (~(((/* implicit */int) (unsigned short)51548))))))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned int) ((short) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7]));
    }
    for (short i_12 = 4; i_12 < 15; i_12 += 4) 
    {
        arr_41 [i_12 - 4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40401)) ? (((/* implicit */int) (short)-26335)) : (((/* implicit */int) var_18))))))))) % (var_3)));
        arr_42 [7U] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-17)) || (((/* implicit */_Bool) arr_21 [i_12 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)31839)))))));
    }
    var_32 = ((/* implicit */unsigned int) var_2);
    var_33 = max((var_13), (((/* implicit */short) ((unsigned char) (+(19U))))));
}
