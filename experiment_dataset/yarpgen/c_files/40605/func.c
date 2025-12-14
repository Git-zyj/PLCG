/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40605
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
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((-(-5434053811575490632LL))) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (min((((/* implicit */unsigned long long int) ((var_12) - (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (min((((/* implicit */unsigned long long int) -5434053811575490632LL)), (var_11)))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_12 [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) ^ (((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)1)))))))));
                        arr_13 [5] [5] [i_2] [i_0] [5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_11)))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (unsigned char)111)))) : ((((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_4 [i_0]) : (((/* implicit */int) var_14)))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_2))))))));
                        arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] = var_1;
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_11))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)127)), (1185915555))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)5)) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) max((arr_11 [i_0]), (((/* implicit */signed char) (_Bool)1)))))))) : (var_7)));
        var_16 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((var_14) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [6U])) : (((/* implicit */int) var_5))))))))) & (min((((arr_6 [i_0] [16U]) / (((/* implicit */long long int) arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])))), (((var_9) ? (((/* implicit */long long int) arr_9 [i_0 - 1])) : (var_4)))))));
        var_17 *= ((unsigned char) min((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-5434053811575490639LL)))));
        arr_16 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((_Bool) arr_5 [i_0]))), (((unsigned int) var_12))));
    }
    /* LoopSeq 3 */
    for (short i_4 = 2; i_4 < 18; i_4 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) var_4);
        var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_17 [i_4]))))) ? (((/* implicit */int) ((signed char) var_9))) : (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_18 [i_4]))))))), (((/* implicit */int) var_6))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 15; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            for (signed char i_7 = 1; i_7 < 13; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 1) 
                    {
                        for (int i_9 = 3; i_9 < 15; i_9 += 2) 
                        {
                            {
                                arr_33 [i_5] [i_5] [i_7] [i_5] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3)))) ? (((((/* implicit */_Bool) arr_6 [i_7] [10ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6])))));
                    arr_34 [i_6] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((var_12) == (((/* implicit */long long int) arr_5 [i_5]))));
                    var_22 ^= ((((/* implicit */int) arr_8 [i_7 + 2] [i_6])) | (((/* implicit */int) arr_8 [i_7 + 1] [i_6])));
                }
            } 
        } 
        arr_35 [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_5] [i_5 + 1] [i_5] [i_5]))));
        var_23 = ((/* implicit */int) ((-5434053811575490641LL) / (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        var_24 = ((/* implicit */long long int) var_8);
    }
    for (unsigned char i_10 = 2; i_10 < 22; i_10 += 2) 
    {
        var_25 -= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_1)))) + (((/* implicit */int) var_9))));
        arr_39 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 5434053811575490639LL))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */long long int) 1784072245)))))) : (min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_38 [i_10]))))))));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            arr_44 [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(var_4)))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_36 [i_10] [(short)21]))))) ^ (var_11))) : (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */int) var_14)) >= (-1520442136)))))))));
            var_26 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_43 [i_10] [2U]))))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_3)))))))), (((((/* implicit */_Bool) arr_43 [i_10] [(unsigned short)24])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_10] [i_10 - 1] [i_10 + 1]))) : ((+(4120744755047902487ULL)))))));
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0)))))));
            var_28 *= ((/* implicit */unsigned char) (-(((unsigned long long int) (_Bool)1))));
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) var_14))));
        }
        var_30 = ((/* implicit */_Bool) min((var_30), ((_Bool)1)));
        arr_45 [i_10] [(_Bool)1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 15082347415373826678ULL)) ? (((/* implicit */int) arr_43 [i_10] [i_10 + 3])) : (var_13)))));
    }
    var_31 = var_4;
}
