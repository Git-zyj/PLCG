/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234722
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
    var_15 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */short) ((unsigned short) arr_3 [i_3] [i_2]));
                            arr_11 [i_0] [i_0] [(unsigned char)3] [i_0] = ((unsigned char) (!(((/* implicit */_Bool) var_7))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        {
                            arr_19 [i_5] [i_0] [i_1 - 3] [i_4] [i_4] [i_5] |= ((/* implicit */signed char) ((((/* implicit */int) min((arr_0 [i_1] [i_1 - 2]), (arr_0 [(short)15] [i_1 - 3])))) << (((((((/* implicit */int) arr_15 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1] [i_1])) & (((/* implicit */int) arr_15 [i_1] [i_1] [i_1 - 2] [i_1 + 1] [i_1] [i_1])))) - (22089)))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_13))))), (var_6)))) == (((/* implicit */int) var_14))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_14))) ? (((((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_1] [i_0] [i_0])) & (((/* implicit */int) arr_9 [i_0] [i_1 - 3] [i_1] [i_1] [i_0])))) : (((((/* implicit */_Bool) (short)12711)) ? (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [(short)7] [i_0] [i_0])) : (((/* implicit */int) var_13))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) ((((((((/* implicit */int) arr_1 [i_1])) - (((/* implicit */int) var_7)))) == (((/* implicit */int) var_2)))) ? (((/* implicit */int) arr_18 [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) var_9))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            {
                                arr_27 [i_0] [(signed char)1] [(signed char)1] [i_0] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_3 [i_1 - 1] [19ULL])) : (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2]))));
                                arr_28 [i_0] [i_1] [i_6] [i_7] [i_0] [i_1] = ((/* implicit */unsigned char) var_8);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) var_2);
                                arr_35 [i_0] [i_0] [(unsigned char)2] [i_1] [i_0] [i_0] = (!(((((/* implicit */int) var_3)) >= (((/* implicit */int) (unsigned char)51)))));
                            }
                        } 
                    } 
                    arr_36 [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_5))));
                }
                var_21 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_30 [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2])) ? (((/* implicit */int) ((unsigned char) arr_1 [18]))) : (((((/* implicit */_Bool) arr_17 [(_Bool)1] [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        for (short i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_11] [i_12] [i_12] [i_14] [i_12])) ? (((((/* implicit */int) (unsigned char)228)) % (((/* implicit */int) var_13)))) : (((/* implicit */int) min((var_11), (var_5))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                                var_23 |= ((/* implicit */unsigned char) (unsigned short)8);
                            }
                        } 
                    } 
                    arr_48 [i_11] [i_11] = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_37 [i_11]))))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned short) var_3))))), ((-((-(((/* implicit */int) (signed char)71)))))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_9))))), (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((+(var_1))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 1) 
    {
        for (unsigned char i_17 = 2; i_17 < 21; i_17 += 2) 
        {
            {
                var_26 &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */long long int) var_1)) : (var_12))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [(unsigned short)7] [i_16])) ? (arr_50 [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_14))))))))));
                var_27 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned short)48957))))));
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_7))));
            }
        } 
    } 
}
