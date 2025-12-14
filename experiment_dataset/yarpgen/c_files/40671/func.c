/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40671
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
    var_12 = var_6;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_3] [i_1] [6ULL] |= ((/* implicit */signed char) (_Bool)0);
                        var_13 -= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2021636694)) ? (var_10) : (((/* implicit */unsigned long long int) 2000963605456731213LL))))) && (((/* implicit */_Bool) max((arr_2 [i_0] [i_2] [2LL]), (((/* implicit */long long int) (unsigned char)106))))))));
                        arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) 865920614)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))))))), (((/* implicit */unsigned long long int) ((unsigned int) 11911569489579305500ULL)))));
                        arr_15 [i_2] [i_1] [i_3] [i_3] [i_2] [i_1] = (_Bool)1;
                        arr_16 [i_1] = ((/* implicit */int) min(((_Bool)0), (((arr_6 [i_0] [i_1] [i_2] [i_3]) < (((/* implicit */unsigned long long int) arr_7 [i_2] [i_3]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((min((((((/* implicit */long long int) 12U)) + (arr_2 [i_0] [i_4] [i_4]))), ((~(-1LL))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) % (var_8)))) ? (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) arr_11 [i_4] [i_0] [i_0] [i_0]))))) : ((+(((/* implicit */int) (_Bool)0)))))))));
            var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))) : (max((((/* implicit */long long int) var_6)), (arr_7 [i_0] [6ULL])))))));
        }
        for (signed char i_5 = 3; i_5 < 8; i_5 += 4) 
        {
            var_15 = ((/* implicit */long long int) var_6);
            var_16 |= ((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_17 [i_5 - 3] [i_5 - 3]))) == ((+(min((((/* implicit */int) var_6)), (arr_12 [i_0] [i_0] [i_0] [6LL])))))));
        }
        var_17 -= ((/* implicit */unsigned char) (_Bool)1);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_26 [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(max((294804817), (((/* implicit */int) arr_25 [i_6] [i_6])))))))));
        var_18 ^= ((/* implicit */unsigned char) ((arr_24 [i_6]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6] [i_6])))));
        arr_27 [i_6] = ((/* implicit */unsigned char) var_2);
    }
    /* LoopSeq 1 */
    for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            arr_32 [i_7] [i_7] [i_7] = ((/* implicit */signed char) arr_28 [i_7]);
            arr_33 [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-12))));
        }
        for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            var_19 -= ((/* implicit */_Bool) (~(arr_30 [i_7] [i_9] [i_9])));
            var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (~(-435876470)))) : (var_8)));
            arr_37 [i_7] = ((/* implicit */int) (!(((((/* implicit */_Bool) var_11)) || ((((_Bool)1) || (((/* implicit */_Bool) 435876470))))))));
        }
        arr_38 [i_7] [i_7] = ((/* implicit */unsigned char) 865920614);
        var_21 &= ((/* implicit */unsigned char) ((((_Bool) -4471932180673646747LL)) ? (var_0) : (((/* implicit */int) arr_35 [i_7] [(_Bool)1] [i_7]))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 1; i_10 < 12; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                {
                    var_22 = ((((/* implicit */_Bool) ((long long int) max((((/* implicit */int) (unsigned char)123)), (-1099356845))))) ? (((((/* implicit */_Bool) (-(var_9)))) ? (-435876494) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (unsigned short)14609)));
                    arr_46 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((int) min((((/* implicit */long long int) arr_35 [i_11] [i_7] [(unsigned short)3])), (min((((/* implicit */long long int) arr_35 [i_11] [i_7] [i_11])), (arr_43 [i_7] [i_7] [i_7]))))));
                }
            } 
        } 
    }
    var_23 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? ((((!(((/* implicit */_Bool) (unsigned char)0)))) ? (max((((/* implicit */unsigned int) var_2)), (4294967270U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-8)), (var_7))))))))));
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 23; i_12 += 2) 
    {
        for (unsigned short i_13 = 2; i_13 < 22; i_13 += 2) 
        {
            {
                var_24 = min((((((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (_Bool)1)) : (arr_50 [i_13] [i_13] [i_13]))) ^ (((/* implicit */int) var_3)))), (((/* implicit */int) (_Bool)1)));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(var_1))) + (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)243)), (22))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)255)), (6427744531537163671LL)))) ? (((/* implicit */unsigned int) arr_50 [i_12 + 1] [i_13 - 1] [i_13 + 1])) : (25U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_13] [i_13])))));
                /* LoopNest 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 24; i_16 += 4) 
                        {
                            {
                                arr_61 [i_12] [i_13 - 2] [i_14] [i_15] [i_15] [i_15] [i_16] = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6))))))));
                                var_26 &= ((/* implicit */int) var_7);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_17 = 3; i_17 < 21; i_17 += 2) 
                {
                    for (long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        {
                            arr_67 [i_12] [i_12 - 1] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_55 [i_17 + 2] [i_13 - 1])) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_12 + 1] [i_13 - 1] [i_18])) ? (-5291197909024074796LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ^ (var_9))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 22)) ? (var_1) : (arr_58 [i_13] [i_13 - 2] [i_13] [i_13])))) ? (min((arr_58 [i_13] [i_13] [i_17 + 2] [i_12]), (((/* implicit */unsigned long long int) (signed char)-29)))) : (max((((/* implicit */unsigned long long int) -4126302133062525058LL)), (var_10)))))));
                            arr_68 [i_18] [i_17] [i_13] [(unsigned char)2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_54 [i_12 - 1] [i_17] [i_17 + 1] [i_18])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_50 [i_12 - 1] [i_12] [i_17 + 2])), (var_1))))));
                        }
                    } 
                } 
                arr_69 [i_12] [i_13] = ((/* implicit */unsigned int) ((int) min((((/* implicit */int) (_Bool)1)), (-23))));
            }
        } 
    } 
}
