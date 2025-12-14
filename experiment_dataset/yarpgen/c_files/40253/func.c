/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40253
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
    var_18 = ((/* implicit */int) ((var_0) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))));
    var_19 = ((/* implicit */unsigned int) var_7);
    var_20 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) ((short) (+(var_0))))) - (2424)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((max((((int) (unsigned char)254)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)238)))))) / (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) /* same iter space */
        {
            var_21 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [12U])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_1 + 1])) : (((/* implicit */int) arr_0 [12U]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(signed char)4])) && (((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1 + 1])))))) : (min((var_15), (((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_1 + 4])))));
            var_22 = ((/* implicit */short) ((((var_16) != (((/* implicit */int) arr_7 [i_1] [i_1 - 2])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_7 [i_1 - 2] [i_1 + 3])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 3]))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                var_23 = ((/* implicit */short) 627936780U);
                var_24 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_9 [i_2] [i_1 - 2] [i_2])))) | ((~(((unsigned int) (unsigned short)6569))))));
            }
            arr_11 [i_0] [(unsigned short)19] = ((/* implicit */_Bool) ((int) max(((~(((/* implicit */int) var_8)))), (((int) var_12)))));
        }
        for (unsigned int i_3 = 2; i_3 < 18; i_3 += 1) /* same iter space */
        {
            var_25 -= ((/* implicit */short) arr_12 [i_0 + 1] [i_3 + 2]);
            var_26 = ((/* implicit */signed char) arr_12 [i_0 + 1] [i_3 - 2]);
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (~(var_15))))));
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                var_28 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (unsigned short)1023)))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)21))));
                    arr_22 [i_0 - 1] [i_0] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (1080798656U)));
                }
            }
        }
        for (int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_15 [(unsigned short)18]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))) ? (((arr_15 [(unsigned char)0]) ? (((/* implicit */int) arr_16 [i_7] [i_0 - 1] [i_7])) : (((/* implicit */int) arr_16 [i_0] [(unsigned char)12] [i_7])))) : (((/* implicit */int) ((_Bool) arr_16 [i_0 + 1] [i_0] [(unsigned char)18])))));
            arr_25 [i_0] = ((/* implicit */short) (((+(((/* implicit */int) var_14)))) ^ (((/* implicit */int) var_11))));
            arr_26 [(_Bool)1] &= ((/* implicit */unsigned int) max(((+(((arr_15 [(unsigned char)2]) ? (((/* implicit */int) (unsigned short)35426)) : (((/* implicit */int) var_8)))))), (min((((((/* implicit */int) (unsigned char)11)) >> (((/* implicit */int) var_3)))), (((((/* implicit */int) var_7)) * (((/* implicit */int) (unsigned char)255))))))));
            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (_Bool)1))));
            arr_27 [i_0] [(short)16] [i_0] = ((/* implicit */short) (((+((~(((/* implicit */int) (unsigned short)65515)))))) ^ ((+(((int) (unsigned char)0))))));
        }
    }
    for (int i_8 = 1; i_8 < 21; i_8 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */_Bool) (+((+(((int) (short)-4499))))));
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_19 [i_8 - 1] [i_8] [i_8]), (((/* implicit */long long int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) != (arr_19 [i_8] [i_8] [i_8 + 1]))))) : ((~(arr_19 [i_8] [i_8] [i_8 + 1]))))))));
    }
    for (signed char i_9 = 3; i_9 < 8; i_9 += 3) /* same iter space */
    {
        arr_34 [i_9] [i_9] = min((1801835746), ((-(((/* implicit */int) arr_14 [i_9 - 2] [i_9 - 3])))));
        arr_35 [i_9 + 2] = ((/* implicit */unsigned char) var_0);
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) max((((((((/* implicit */_Bool) 3214168634U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)30110)))) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)35390)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))))));
                        var_35 = ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) arr_41 [i_9] [(signed char)8] [i_9] [i_10] [i_11] [i_12])) : (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_11])) : (((/* implicit */int) (unsigned char)255)))), ((~(((/* implicit */int) var_8)))))));
                        var_36 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)118)), (((((/* implicit */_Bool) var_14)) ? ((~(var_2))) : (((/* implicit */int) arr_28 [i_9 - 1] [i_9 + 2]))))));
                        arr_44 [i_9 + 2] [i_10] [i_11] = max(((~(((/* implicit */int) arr_28 [i_9 + 1] [i_9 - 3])))), (min((((/* implicit */int) var_7)), ((~(((/* implicit */int) arr_5 [i_10] [i_12])))))));
                    }
                } 
            } 
        } 
        arr_45 [i_9 + 2] [(short)2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_9] [i_9 - 3] [i_9 + 2])) ? (((/* implicit */int) arr_36 [i_9 - 1] [i_9 + 1] [i_9])) : (((/* implicit */int) arr_1 [10LL])))))));
    }
    /* vectorizable */
    for (signed char i_13 = 3; i_13 < 8; i_13 += 3) /* same iter space */
    {
        arr_49 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_46 [i_13]))))) ? ((+(var_0))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? ((-(arr_30 [(signed char)21]))) : (((/* implicit */int) var_9))));
    }
}
