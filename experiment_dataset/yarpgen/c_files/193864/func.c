/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193864
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 *= ((/* implicit */unsigned long long int) arr_2 [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)30)))))) : (17179869183LL)));
        var_11 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0]))))) ^ (((((/* implicit */_Bool) 18U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (8796093022207ULL)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_2 [(short)5]))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_9 [i_1] = (short)511;
                var_13 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (((((/* implicit */_Bool) 4294967295U)) ? (18U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))));
            }
        }
        /* vectorizable */
        for (unsigned char i_3 = 3; i_3 < 19; i_3 += 4) 
        {
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_9)))))));
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((18446744073709551615ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
            var_16 = ((/* implicit */signed char) ((unsigned short) arr_6 [i_0] [i_0] [i_3]));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (int i_5 = 3; i_5 < 18; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            arr_21 [8U] [i_3] [i_4] [i_6] [i_5] [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_5] [i_5] [i_5] [(unsigned short)16] [i_5] [i_6])) % (((/* implicit */int) arr_19 [i_5] [i_5] [i_5] [i_5] [i_5] [i_6]))));
                            arr_22 [i_0] [i_3] [i_4] [i_4] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) arr_10 [i_0] [i_3 - 1] [i_3])) : (((/* implicit */int) arr_10 [i_3] [i_4] [i_3]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            arr_27 [i_0] = ((/* implicit */unsigned int) var_7);
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    {
                        arr_32 [i_8] [i_7] [i_8] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                        arr_33 [i_0] [i_8] [i_8] [i_0] [i_8] [i_0] = (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))));
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> ((((~(((/* implicit */int) arr_15 [i_0] [i_8] [i_0])))) + (6)))))) ? (((/* implicit */int) ((short) (unsigned char)255))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_7] [i_8])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_2))))));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_10 = 4; i_10 < 19; i_10 += 4) 
    {
        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((unsigned char) (unsigned char)255)))) ? (min(((-(var_3))), (((/* implicit */long long int) min((((/* implicit */unsigned int) 2147483647)), (4294967295U)))))) : (((/* implicit */long long int) ((var_5) ? (((((/* implicit */int) var_2)) >> (((((/* implicit */int) (unsigned short)65535)) - (65523))))) : (((((/* implicit */int) (signed char)127)) % (((/* implicit */int) (short)(-32767 - 1))))))))));
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            for (int i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                for (signed char i_13 = 2; i_13 < 19; i_13 += 3) 
                {
                    {
                        arr_46 [i_13] [i_12] [i_12] [i_10] = ((/* implicit */signed char) (_Bool)1);
                        arr_47 [i_12] [i_12] [i_12] [i_13] [(unsigned char)20] = ((/* implicit */signed char) ((int) min((4294967295U), (arr_35 [i_10 + 2]))));
                    }
                } 
            } 
        } 
    }
    var_18 -= ((/* implicit */long long int) (unsigned char)255);
    var_19 = ((/* implicit */signed char) 0);
    var_20 = ((/* implicit */unsigned long long int) (signed char)127);
}
