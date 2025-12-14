/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237068
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_5 [i_0 - 1] [i_1] [i_0] = ((/* implicit */short) max((min((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_4 [i_0] [i_0 - 1] [i_0 - 1]))), (arr_3 [i_1])));
            /* LoopSeq 1 */
            for (int i_2 = 4; i_2 < 13; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        {
                            var_10 *= ((/* implicit */_Bool) (unsigned char)31);
                            var_11 = (+(var_6));
                        }
                    } 
                } 
                var_12 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252)))));
            }
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    {
                        arr_17 [i_0] = ((/* implicit */unsigned int) (signed char)7);
                        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max((((arr_13 [i_0 - 1] [i_0]) ^ (((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))), (((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                        var_14 *= ((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0 - 1]))) - (var_2)))));
                        var_15 = ((((/* implicit */_Bool) var_8)) || (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_16 = arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1];
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (2147483640) : (((((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1])) * (((/* implicit */int) (unsigned char)255))))));
            }
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    {
                        arr_25 [i_0] [i_8] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) ? ((-(((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_8] [i_8] [i_8])))) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_24 [i_0] [i_1] [i_0])) : (((/* implicit */int) ((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))))) : (2984497591U)));
                        var_18 = ((/* implicit */unsigned int) arr_13 [i_1] [i_9]);
                    }
                } 
            } 
        }
        var_19 = (unsigned char)35;
        var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned char)255)), (var_6)));
    }
    /* vectorizable */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_10 - 1])) ? (14680064U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
        var_22 = ((/* implicit */unsigned int) 1193279456);
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            for (unsigned char i_12 = 3; i_12 < 15; i_12 += 3) 
            {
                for (signed char i_13 = 0; i_13 < 16; i_13 += 4) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_3 [i_11])))) ? (((/* implicit */int) arr_2 [i_10 - 1] [i_12 - 1])) : (((/* implicit */int) var_0))));
                        arr_37 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-705))) ^ (((((/* implicit */_Bool) arr_12 [i_10] [i_11] [i_12])) ? (arr_3 [(unsigned short)4]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10 - 1] [i_10])))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) arr_4 [(unsigned char)0] [i_14] [(unsigned char)0]);
        var_25 *= ((signed char) arr_9 [i_14] [i_14] [i_14] [0] [i_14]);
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_14])) ? (((/* implicit */int) arr_20 [i_14] [i_14] [i_14] [i_14])) : (((int) -3764018607926527624LL))));
    }
    for (int i_15 = 2; i_15 < 19; i_15 += 2) 
    {
        arr_44 [i_15] = ((/* implicit */short) var_1);
        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_41 [i_15]))));
        var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_42 [i_15 - 1]))));
        arr_45 [i_15] = ((/* implicit */short) (~(((/* implicit */int) arr_42 [i_15 + 3]))));
    }
    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) var_9))));
    var_30 = min((var_2), (((/* implicit */unsigned int) var_8)));
}
