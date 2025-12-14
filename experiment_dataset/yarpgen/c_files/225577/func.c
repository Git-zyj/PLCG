/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225577
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) ((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : ((-(((/* implicit */int) arr_1 [i_0]))))));
            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))) / (var_14))))));
        }
        var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))), ((-(((8588093413096991804LL) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) var_1);
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 12; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) arr_8 [i_2] [i_2]);
                    arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (var_3)))) ? (((((((/* implicit */unsigned long long int) var_5)) * (arr_9 [i_3 - 1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-9803), (var_4))))))) : (((/* implicit */unsigned long long int) var_3))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_2] [i_2] [i_3 - 1] [i_3]))))))))));
                    arr_14 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((1688518272434838404LL) < (((/* implicit */long long int) 1977350702U)))) ? (((/* implicit */long long int) ((int) var_4))) : (min((min((((/* implicit */long long int) (short)9822)), (9223372036854775807LL))), (((/* implicit */long long int) var_5))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 2940552628U)) : (var_13))))))), (min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) 3148014183590640530LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((signed char) arr_16 [i_5] [i_5])))));
        var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) 8588093413096991784LL)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (short)9824))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_3))));
        var_24 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 1977350703U)) : (-8588093413096991812LL))) | (((/* implicit */long long int) (~(1977350702U))))));
        var_25 -= ((/* implicit */unsigned short) arr_17 [i_5]);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (long long int i_9 = 1; i_9 < 21; i_9 += 2) 
                {
                    {
                        var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / ((+(var_8)))));
                        var_27 -= ((/* implicit */long long int) (signed char)-32);
                    }
                } 
            } 
        } 
        arr_28 [i_6] = ((/* implicit */_Bool) ((var_6) ? (((/* implicit */long long int) 2122221080U)) : ((~(8588093413096991804LL)))));
        var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)9824))));
        arr_29 [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) == (((/* implicit */int) var_12)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)23008))))) : ((-(arr_18 [i_6] [i_6])))));
    }
    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            arr_36 [i_11] [i_11] = ((/* implicit */unsigned int) ((min((var_8), (((/* implicit */long long int) var_5)))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)243))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_12 = 1; i_12 < 19; i_12 += 3) 
            {
                var_29 = var_0;
                arr_39 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) != ((-(arr_18 [i_10] [i_11])))));
                arr_40 [i_10] = (((!(((/* implicit */_Bool) 4294967295U)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_6))))));
            }
            for (int i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                var_30 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)163)) * (((/* implicit */int) (unsigned char)44))))) ? (((/* implicit */unsigned long long int) var_13)) : (((unsigned long long int) var_3))))));
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */short) min((((/* implicit */long long int) (!(((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 9223372036854775807LL))))))), (((((/* implicit */_Bool) arr_41 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)-13481)))))) : (((((/* implicit */_Bool) var_1)) ? (9181164099798464920LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)196)))))))));
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) ((signed char) (unsigned char)31)))))))));
                            var_33 = ((/* implicit */short) var_8);
                            arr_48 [i_10] [i_11] [i_10] [i_13] [i_13] [i_14] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)59)) ? (2317616593U) : (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)72)) ^ (var_1))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                        }
                    } 
                } 
            }
        }
        arr_49 [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned int) var_5)) / (4294967295U))), (1977350717U))))));
        /* LoopNest 3 */
        for (signed char i_16 = 4; i_16 < 19; i_16 += 3) 
        {
            for (short i_17 = 3; i_17 < 18; i_17 += 2) 
            {
                for (long long int i_18 = 2; i_18 < 19; i_18 += 1) 
                {
                    {
                        arr_60 [i_17] [i_16] [i_17] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(9223372036854775805LL)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) min((arr_57 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]), (arr_57 [i_10] [8ULL] [i_10] [16U] [i_10] [i_18])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (var_5)))))) : (min(((-(4294967282U))), (((/* implicit */unsigned int) ((_Bool) (signed char)-76)))))));
                        arr_61 [i_10] [i_16] [i_16] [i_17] [i_17] [i_18] = ((/* implicit */unsigned char) arr_58 [(unsigned char)15] [i_16] [(unsigned char)15] [i_18]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_19 = 0; i_19 < 17; i_19 += 3) 
    {
        arr_64 [i_19] [i_19] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])))))) & ((-9223372036854775807LL - 1LL))));
        var_34 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_19] [i_19] [i_19] [i_19] [i_19]))));
    }
}
