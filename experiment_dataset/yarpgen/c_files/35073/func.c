/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35073
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) (!(((/* implicit */_Bool) min((15183437662847535549ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (-(max((((unsigned long long int) 161128651614962387ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_2 [i_0] [i_0])))))))))));
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((-588238348) + (588238356))) - (8)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (arr_3 [i_0] [(_Bool)1])))))));
    }
    for (signed char i_1 = 1; i_1 < 24; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 24; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 1; i_5 < 22; i_5 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (arr_17 [i_2] [i_3 - 1] [i_1 + 1] [i_2]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3])))))), (var_9)))))))));
                            arr_19 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] [i_4] [i_5 + 3] = ((/* implicit */signed char) max((((arr_16 [i_1] [i_1] [i_1] [i_1 - 1] [i_5 + 2] [i_5 + 2]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_16 [i_1] [i_1] [(signed char)13] [i_1 - 1] [i_5 - 1] [i_1])))), (max((-588238362), (((/* implicit */int) (_Bool)1))))));
                            arr_20 [i_1] [i_1] [i_2] [i_2] [i_4] [4] = ((/* implicit */signed char) (-(-588238362)));
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((((((/* implicit */int) var_5)) * (((/* implicit */int) var_4)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((588238347), (-588238362))))))))))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 24; i_6 += 2) 
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_4] [1] = ((/* implicit */_Bool) max((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (var_1))) || (var_3)))), ((~(((/* implicit */int) (signed char)35))))));
                            var_15 = ((/* implicit */short) min((var_15), (max((((/* implicit */short) (!(((/* implicit */_Bool) var_6))))), (max((((/* implicit */short) arr_15 [i_3] [15U] [i_3])), (var_7)))))));
                            arr_25 [i_4] [i_1 - 1] [i_4] [i_4] [13U] [13U] [13U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-46))));
                            arr_26 [i_1] [6] [6] [i_1] [i_4] = ((((/* implicit */_Bool) min((588238347), (-1)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)));
                        }
                        var_16 |= ((/* implicit */short) -1932008007);
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((arr_9 [i_3 - 1] [i_4 + 1] [i_1 - 1]) / (((/* implicit */unsigned long long int) var_9)))) > (((/* implicit */unsigned long long int) min((arr_4 [i_1]), (((/* implicit */int) (_Bool)0))))))))));
                        arr_27 [i_1] [12] [i_4] [(signed char)4] = ((/* implicit */short) arr_9 [i_4 - 1] [i_3 + 2] [i_1 + 1]);
                        arr_28 [i_1] [i_1] [i_4] [i_4] = ((/* implicit */short) ((_Bool) min((var_9), (min((((/* implicit */int) arr_23 [19ULL] [i_4] [(short)12] [19ULL] [19ULL])), (-583246478))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    {
                        arr_36 [i_7] [(_Bool)1] [i_8] [(_Bool)1] = ((/* implicit */_Bool) min((1058409438U), (((/* implicit */unsigned int) (signed char)-46))));
                        arr_37 [i_1] [i_7] [i_8] [i_7] = ((/* implicit */_Bool) var_1);
                        var_18 = min((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) 520093696U)) ? (((/* implicit */int) (short)-2155)) : (((/* implicit */int) var_2)))))), ((~(arr_4 [i_1 - 1]))));
                        var_19 = max((arr_12 [i_1 - 1] [i_1] [i_1] [i_1 + 1]), (arr_12 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            for (short i_11 = 4; i_11 < 22; i_11 += 2) 
            {
                for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    {
                        arr_47 [i_1] = ((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_1]);
                        arr_48 [i_1] [i_1] = min((((/* implicit */unsigned int) (_Bool)1)), (63U));
                        arr_49 [i_1] [i_10] [i_11] [15U] = ((/* implicit */short) ((((/* implicit */int) (signed char)-35)) / (((/* implicit */int) (short)15663))));
                    }
                } 
            } 
        } 
    }
    for (int i_13 = 3; i_13 < 23; i_13 += 1) 
    {
        arr_54 [i_13] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_13])) ? (((/* implicit */int) arr_14 [i_13] [i_13] [i_13] [i_13 - 3])) : (arr_4 [i_13]))), (((/* implicit */int) (!(var_2))))));
        var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_52 [(signed char)18] [i_13 - 2]), (arr_52 [i_13] [i_13 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_13 + 1]))))) : (min((((/* implicit */int) var_5)), (arr_4 [i_13 - 3])))));
        arr_55 [i_13] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) min((arr_17 [24U] [24U] [i_13] [i_13]), (((/* implicit */unsigned long long int) (_Bool)1))))) || (((/* implicit */_Bool) min((((/* implicit */short) arr_6 [(_Bool)1] [(_Bool)1])), (var_7))))))));
    }
    for (int i_14 = 1; i_14 < 20; i_14 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_15 = 4; i_15 < 23; i_15 += 2) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_21 ^= ((/* implicit */short) arr_44 [i_15 + 1] [i_15 + 1] [i_15] [i_15] [i_15]);
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (int i_18 = 4; i_18 < 22; i_18 += 2) 
                        {
                            {
                                arr_69 [i_14] [i_14] = ((/* implicit */unsigned int) (!((_Bool)1)));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (+(min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (!(var_3)))))))))));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_57 [i_14 + 4])))), ((~(((/* implicit */int) arr_57 [i_14 + 4])))))))));
                                var_24 = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */unsigned long long int) max((8), (((/* implicit */int) (_Bool)0))))) : (max((arr_7 [i_14] [i_14]), (((/* implicit */unsigned long long int) var_3))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) ((2016U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
        var_26 -= ((/* implicit */signed char) min((min((((((/* implicit */unsigned long long int) arr_39 [i_14] [9ULL])) ^ (var_1))), (((/* implicit */unsigned long long int) ((var_9) & (((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) var_5))))) < (arr_60 [i_14 + 4] [i_14] [3ULL]))))));
    }
    /* LoopNest 3 */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        for (unsigned int i_20 = 0; i_20 < 11; i_20 += 2) 
        {
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                {
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) max((((/* implicit */unsigned int) (!(arr_30 [i_19] [i_20] [i_19])))), (((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (var_9)))) : ((~(324304626U))))))))));
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_9 [i_19] [i_19] [i_21]))));
                }
            } 
        } 
    } 
}
