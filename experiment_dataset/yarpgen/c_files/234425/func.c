/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234425
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(var_2)));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 1] [i_2 + 1])) <= (((/* implicit */int) arr_0 [i_0] [i_1 - 3]))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_4 = 4; i_4 < 7; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 1; i_6 < 7; i_6 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) (short)-17934);
                        arr_20 [i_3] [i_3 - 1] [i_3] [i_6] [i_3 - 1] = ((/* implicit */short) var_15);
                        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_3]))))) - (arr_2 [i_6]))))));
                        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_4] [i_4 - 4] [i_4 + 3])))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) (short)17922);
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (short i_8 = 3; i_8 < 8; i_8 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
                    var_23 = ((/* implicit */int) arr_5 [i_3] [(_Bool)1] [i_7]);
                    var_24 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (signed char)127)))) >= (((/* implicit */int) (short)-17934))));
                }
            } 
        } 
    }
    for (long long int i_9 = 1; i_9 < 15; i_9 += 2) 
    {
        var_25 = ((/* implicit */int) (short)-17924);
        arr_28 [i_9] = ((/* implicit */long long int) arr_0 [i_9] [i_9 + 1]);
    }
    for (long long int i_10 = 2; i_10 < 12; i_10 += 2) 
    {
        var_26 += ((/* implicit */int) (signed char)-51);
        var_27 = ((/* implicit */short) var_4);
        /* LoopNest 2 */
        for (signed char i_11 = 1; i_11 < 11; i_11 += 3) 
        {
            for (short i_12 = 1; i_12 < 11; i_12 += 3) 
            {
                {
                    arr_37 [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) (-((~((+(((/* implicit */int) var_5))))))));
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (_Bool)0))));
                    /* LoopSeq 4 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_29 ^= ((/* implicit */short) (~((~(((/* implicit */int) (signed char)-71))))));
                        var_30 = ((/* implicit */unsigned char) (~(arr_30 [i_10])));
                    }
                    for (long long int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) var_2);
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) var_9))));
                        /* LoopSeq 1 */
                        for (short i_15 = 2; i_15 < 10; i_15 += 3) 
                        {
                            var_33 = ((/* implicit */int) var_12);
                            arr_44 [i_15] = ((/* implicit */int) arr_33 [i_11] [i_12]);
                            arr_45 [i_10 - 2] [i_10] [i_10] [i_10] [i_10] [i_10] [(unsigned char)10] &= ((/* implicit */_Bool) (~((+(arr_2 [i_10])))));
                            var_34 = ((/* implicit */signed char) (((-(((/* implicit */int) var_10)))) * (((/* implicit */int) var_3))));
                            var_35 ^= ((/* implicit */_Bool) (~((+(((/* implicit */int) var_13))))));
                        }
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 3) 
                    {
                        var_36 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
                        arr_50 [i_16] = ((/* implicit */unsigned short) var_6);
                    }
                    for (unsigned short i_17 = 2; i_17 < 12; i_17 += 4) 
                    {
                        var_37 &= ((/* implicit */signed char) arr_53 [i_12] [i_17 - 1]);
                        arr_54 [i_10] |= ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_10))))));
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) arr_2 [i_12]))));
                    }
                }
            } 
        } 
        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (signed char)-71))));
    }
    /* LoopNest 3 */
    for (unsigned int i_18 = 4; i_18 < 22; i_18 += 2) 
    {
        for (unsigned short i_19 = 3; i_19 < 21; i_19 += 1) 
        {
            for (signed char i_20 = 0; i_20 < 23; i_20 += 3) 
            {
                {
                    var_40 *= ((/* implicit */short) arr_58 [i_20] [i_19] [i_20]);
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 23; i_21 += 1) 
                    {
                        for (long long int i_22 = 1; i_22 < 22; i_22 += 3) 
                        {
                            {
                                arr_65 [i_18] &= ((/* implicit */_Bool) arr_59 [i_18]);
                                arr_66 [i_21] [i_20] [i_20] [i_18 + 1] = ((/* implicit */unsigned short) arr_60 [i_19 - 2] [i_19] [i_19]);
                                var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1397586113286675703LL)))))))))))));
                                var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
