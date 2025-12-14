/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218579
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((unsigned int) var_7)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 1) /* same iter space */
        {
            var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 1])) : ((~(((/* implicit */int) (_Bool)0))))))) ? (((int) var_12)) : (((/* implicit */int) ((unsigned char) max((var_2), (((/* implicit */unsigned int) var_18))))))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_1] [i_1 - 4] [i_1 - 4]))))) ? (((int) var_9)) : (max((((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_1 - 2])), (var_14)))));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (_Bool)1))));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_1 [(signed char)12]))));
        }
        for (unsigned char i_2 = 4; i_2 < 14; i_2 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((1841478694U), (((/* implicit */unsigned int) (_Bool)1)))))));
            arr_7 [i_0] = ((/* implicit */signed char) max((((arr_0 [i_2 - 4] [i_2 - 4]) ? (((/* implicit */int) arr_0 [i_2 - 4] [i_2 - 2])) : (((/* implicit */int) var_11)))), ((~(((/* implicit */int) arr_0 [i_2 + 1] [i_2 + 1]))))));
            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) var_12)) * (((/* implicit */int) var_8)))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 3) 
            {
                for (unsigned int i_4 = 2; i_4 < 14; i_4 += 1) 
                {
                    {
                        var_26 += ((/* implicit */_Bool) var_2);
                        var_27 *= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) arr_2 [i_2 + 1])), (arr_9 [i_0] [i_2] [i_3 - 2] [i_4]))), (((/* implicit */unsigned int) arr_10 [i_0] [i_2] [(unsigned char)2] [i_0]))));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)85)))))))));
                        var_29 += ((unsigned int) ((((/* implicit */_Bool) max((var_18), (arr_4 [i_0] [i_2] [i_0])))) ? (max((((/* implicit */unsigned int) var_11)), (arr_5 [i_2 - 1] [(signed char)4]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-88)))))));
                    }
                } 
            } 
        }
        for (unsigned char i_5 = 4; i_5 < 14; i_5 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2666530710U)) ? (((/* implicit */unsigned int) (-((-(arr_13 [i_0] [(_Bool)1])))))) : (((var_8) ? (max((var_3), (var_4))) : (((/* implicit */unsigned int) 1923996303))))));
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (unsigned int i_8 = 1; i_8 < 14; i_8 += 1) 
                    {
                        {
                            arr_24 [i_0] [i_5] [i_6] [i_6] [3ULL] [i_8 - 1] [i_6] = ((/* implicit */unsigned int) (!(arr_3 [i_8])));
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (-2147483647 - 1)))) ? (max((((/* implicit */int) var_11)), (arr_12 [12U]))) : (((/* implicit */int) (unsigned char)131))))) ? ((+(2064477590793045343ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_16 [i_0] [i_0] [i_7]) : (3352494589U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)94)) ? (arr_14 [i_5] [i_7] [i_7]) : (arr_12 [i_6])))) : (max((((/* implicit */unsigned int) (signed char)-54)), (var_15)))))))))));
                        }
                    } 
                } 
            } 
        }
        var_32 = ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_27 [i_9] = ((/* implicit */_Bool) (~(arr_26 [i_9] [i_9])));
        var_33 = ((/* implicit */signed char) max((17759757937848924263ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 20; i_10 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_11 = 2; i_11 < 20; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_13 = 0; i_13 < 21; i_13 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [i_10] [i_10])))))));
                    var_35 = ((/* implicit */signed char) ((int) (+(var_9))));
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)17))));
                    arr_43 [i_10] [i_11 + 1] [i_10] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_10 - 1] [i_10 + 1])) ? (arr_26 [i_10 - 1] [i_10 + 1]) : (arr_26 [i_10 + 1] [i_10 + 1])));
                    arr_44 [i_10] [i_11] [i_10] [i_10] [i_13] = ((/* implicit */unsigned char) (~(var_3)));
                }
                for (unsigned char i_14 = 0; i_14 < 21; i_14 += 2) /* same iter space */
                {
                    arr_48 [i_10] [i_11 - 2] [i_10] [i_12] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_10 + 1] [i_11 - 2] [i_11 - 1] [i_10] [i_14] [i_14])) ? (arr_47 [i_10] [i_10] [i_12] [i_10]) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [(_Bool)1] [i_11] [i_12] [i_14])))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_11] [i_12]))) : (arr_42 [i_10] [i_10] [i_12] [i_14])))));
                    var_37 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_41 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_11 + 1] [8ULL]))));
                }
                arr_49 [i_10] [i_12] [i_12] [i_12] |= ((/* implicit */signed char) arr_28 [i_12]);
                arr_50 [i_10] = ((/* implicit */int) var_8);
            }
            var_38 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (signed char i_15 = 3; i_15 < 19; i_15 += 1) 
        {
            arr_54 [(_Bool)1] [i_10 - 1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2320344414U)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_30 [i_10]))));
            var_39 = ((/* implicit */unsigned long long int) 0U);
            var_40 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_46 [i_10 + 1] [i_10] [i_10] [i_10] [i_15] [i_10])) : (((/* implicit */int) (unsigned char)78)))));
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 3; i_16 < 19; i_16 += 2) 
            {
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_10])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (((unsigned long long int) var_17))));
                        arr_60 [i_10 - 1] [i_10] [i_10] [i_16] [i_17 - 1] = ((/* implicit */unsigned int) (((~(var_9))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) arr_41 [i_10] [i_15 - 2] [i_15 - 2] [i_15 - 2] [(_Bool)1])))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_18 = 2; i_18 < 19; i_18 += 2) 
                        {
                            var_42 = ((/* implicit */unsigned long long int) (((!((_Bool)1))) ? ((-(((/* implicit */int) var_16)))) : (arr_37 [i_10 - 1] [i_10 - 1] [i_10])));
                            arr_64 [i_10] [i_15] [20] [20] [i_10] = ((/* implicit */unsigned int) arr_58 [i_16 + 1] [i_17 - 1]);
                        }
                        for (unsigned int i_19 = 0; i_19 < 21; i_19 += 1) 
                        {
                            arr_67 [i_16] [i_17 - 1] [i_10] = ((/* implicit */int) ((signed char) arr_62 [i_15] [i_10]));
                            var_43 = ((/* implicit */unsigned char) ((_Bool) (signed char)-66));
                        }
                    }
                } 
            } 
        }
        arr_68 [i_10] = ((/* implicit */int) (-(var_3)));
        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) arr_57 [i_10] [i_10] [i_10 + 1] [(signed char)7]))));
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        arr_71 [i_20] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (_Bool)0))))));
        var_45 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) -135386935))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_20]))) : (16382266482916506273ULL)))));
        var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-38))))), ((+(4294967293U))))))));
        var_47 = var_11;
        arr_72 [i_20] = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) arr_69 [i_20])))));
    }
}
