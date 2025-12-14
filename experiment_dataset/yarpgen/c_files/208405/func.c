/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208405
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
    for (int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_11 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((unsigned long long int) arr_2 [i_1 - 1] [i_1 - 1] [i_0 - 1])))));
                var_13 = ((/* implicit */int) ((unsigned short) (+(var_0))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) var_2);
        var_15 ^= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2 - 2])) ? (arr_5 [i_2 + 1]) : (arr_5 [i_2 - 1]))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 4) 
        {
            for (short i_4 = 1; i_4 < 8; i_4 += 4) 
            {
                for (unsigned short i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    {
                        arr_15 [i_2] [i_2 - 1] [(_Bool)1] [i_3] [i_4] [i_5] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) var_4)) == (((((-1) + (2147483647))) >> (((1360394435) - (1360394409))))))))));
                        var_16 = ((/* implicit */int) var_9);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */_Bool) max((var_17), (((((/* implicit */int) arr_10 [i_2] [i_2])) > ((((-(1360394435))) / (var_7)))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        var_18 &= (~(((((((/* implicit */int) arr_17 [i_6] [i_6])) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))));
        arr_18 [6U] = ((((/* implicit */int) arr_4 [4U] [i_6])) > (((/* implicit */int) arr_0 [i_6])));
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 14; i_7 += 2) 
        {
            for (int i_8 = 2; i_8 < 17; i_8 += 3) 
            {
                for (unsigned char i_9 = 2; i_9 < 17; i_9 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 4 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (var_0)));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))));
                            arr_31 [i_10] = ((/* implicit */unsigned int) var_9);
                        }
                        for (unsigned int i_11 = 4; i_11 < 17; i_11 += 4) /* same iter space */
                        {
                            var_22 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
                            var_23 ^= ((/* implicit */short) ((unsigned char) (_Bool)1));
                            var_24 = ((/* implicit */unsigned short) var_10);
                            arr_35 [(unsigned char)15] [(unsigned char)15] [(unsigned short)3] = ((/* implicit */unsigned long long int) arr_32 [3] [i_9] [i_9 - 2] [3] [i_8 - 2] [i_7] [i_6]);
                        }
                        for (unsigned int i_12 = 4; i_12 < 17; i_12 += 4) /* same iter space */
                        {
                            arr_39 [i_12] [i_9] [i_8] [i_7] [i_6] = ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) arr_24 [i_6] [17LL])))));
                            arr_40 [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_6] [i_9 - 1] [i_9 - 1] [i_12] [i_7 + 3])) / (((/* implicit */int) arr_28 [i_6] [i_6] [i_9 - 2] [i_7] [i_12]))));
                            var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2044482535)) ? (12379365646852552055ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            arr_43 [i_6] [i_7 + 4] [i_7 + 2] [i_8] [i_9] [i_6] = ((/* implicit */unsigned long long int) ((unsigned char) arr_23 [i_8] [i_8] [i_8 + 1] [i_8 + 1]));
                            arr_44 [i_6] [i_7] = ((/* implicit */unsigned long long int) 3979708270U);
                            arr_45 [i_6] [i_6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [8U] [(short)1] [i_8 - 1] [i_8 - 1])) ? (arr_36 [i_7 + 1] [i_7] [i_9 - 1] [(signed char)6] [i_8 - 2]) : ((~(var_1)))));
                            arr_46 [i_6] [i_6] [(short)5] [i_6] [0] [i_6] = ((/* implicit */unsigned short) var_6);
                        }
                        arr_47 [i_6] [i_6] [i_6] [i_8] [i_9 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_9]))))) > (arr_2 [(signed char)7] [i_7 + 2] [i_7 + 2])));
                    }
                } 
            } 
        } 
    }
    for (short i_14 = 0; i_14 < 10; i_14 += 2) 
    {
        var_26 = ((/* implicit */signed char) (~((~(((/* implicit */int) ((short) 315259026U)))))));
        /* LoopNest 3 */
        for (unsigned int i_15 = 1; i_15 < 8; i_15 += 2) 
        {
            for (unsigned int i_16 = 1; i_16 < 8; i_16 += 2) 
            {
                for (short i_17 = 1; i_17 < 6; i_17 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) ((3418046830U) != (((760246719U) >> (((-364422425) + (364422450)))))))) * ((-(((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_18 = 1; i_18 < 8; i_18 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((((unsigned int) var_10)) >> (((3487741979U) / (((/* implicit */unsigned int) 236507466))))));
                            arr_60 [i_15] [i_15] [i_16] [i_17] [i_18 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((876920466U) * (4263458741U)))) ? (arr_22 [i_15 + 2] [i_17]) : (arr_54 [i_15])));
                            arr_61 [i_16] [i_15] [i_16] [i_16] [i_15] [i_18 + 2] = (((-(4294967290U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2147483648U)))));
                            arr_62 [1] [1] [i_15] [i_17 + 4] [i_17] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_1)))));
                        }
                        for (int i_19 = 0; i_19 < 10; i_19 += 4) 
                        {
                            arr_65 [i_19] [i_19] [i_14] [(signed char)6] [i_14] [i_15 - 1] [(signed char)6] &= ((/* implicit */long long int) (+(min((((((/* implicit */int) var_3)) - (((/* implicit */int) arr_4 [i_14] [i_14])))), (((/* implicit */int) arr_57 [i_15 + 2] [(unsigned char)9] [i_16] [i_16] [i_16 + 1] [i_17 + 2]))))));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (unsigned char)224))));
                            arr_66 [i_19] [8U] [i_15] [i_16] [i_15] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) arr_24 [i_14] [(unsigned char)6])))));
                        }
                        arr_67 [i_14] [i_15] [8ULL] [i_17] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((~(arr_42 [i_14] [i_14] [i_14] [i_15] [(unsigned char)5] [i_16] [i_17 + 4]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_14] [5] [i_16])))))))))));
                        arr_68 [(unsigned char)8] [i_15] = ((/* implicit */_Bool) var_8);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_20 = 2; i_20 < 21; i_20 += 4) 
    {
        for (unsigned char i_21 = 1; i_21 < 22; i_21 += 4) 
        {
            {
                arr_73 [i_20] [i_21] = ((/* implicit */unsigned int) (signed char)-21);
                arr_74 [i_21] = ((/* implicit */int) var_1);
            }
        } 
    } 
}
