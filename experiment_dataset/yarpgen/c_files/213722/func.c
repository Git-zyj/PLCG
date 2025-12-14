/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213722
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
    for (int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_8)), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4 - 2] [i_1] [i_2 + 1] [i_3])))))) * (max((var_7), (((/* implicit */unsigned int) var_8))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0]))));
                                arr_16 [(_Bool)1] [i_1] [(_Bool)1] [6ULL] [i_1] [i_1] = ((/* implicit */int) ((short) (~(((/* implicit */int) arr_5 [i_4] [i_4 - 1] [i_4 - 1])))));
                                var_16 = ((/* implicit */unsigned char) 1543323549U);
                                var_17 = ((/* implicit */short) var_2);
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] [18U] [(short)17] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) ((unsigned short) arr_2 [i_0 + 1] [i_0]))), (arr_9 [i_0] [i_0 - 3] [i_0] [i_0 - 3] [i_1]))) == (((/* implicit */unsigned int) min((((/* implicit */int) (short)127)), ((+(((/* implicit */int) (short)-127)))))))));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [(unsigned short)19] [(short)6] [i_5]))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        arr_22 [i_0] [i_1] [i_6] [i_5] |= (((+(((/* implicit */int) ((var_10) > (var_3)))))) == (((/* implicit */int) ((short) arr_13 [i_0 - 1] [i_1] [i_5]))));
                        var_19 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0])) == (((/* implicit */int) var_13))))), ((((_Bool)1) ? (((/* implicit */int) (short)127)) : (((/* implicit */int) (unsigned short)44941))))));
                    }
                    var_20 *= ((/* implicit */signed char) arr_11 [i_0 - 1] [i_1] [i_1] [(unsigned char)14] [i_0 - 1]);
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        arr_25 [i_0] |= min((((unsigned int) (short)127)), (((/* implicit */unsigned int) max((arr_8 [i_0 - 4] [i_0 - 3]), (var_13)))));
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((min((((var_9) << (((653700474U) - (653700474U))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_18 [i_7] [i_5] [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) (_Bool)1)))))) < (((/* implicit */int) ((((/* implicit */int) arr_1 [i_5])) == (((/* implicit */int) arr_20 [(unsigned short)8] [i_0] [i_1] [i_5] [i_5] [i_7]))))))))));
                        var_22 += ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)44941), ((unsigned short)21)))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) == (min((var_9), (((/* implicit */int) var_2))))))) : (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (unsigned short)65512)))) * (((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 1; i_8 < 24; i_8 += 4) 
    {
        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65522))));
                arr_30 [i_8] [i_8] [i_9] = ((/* implicit */_Bool) 2961468619U);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 3) 
    {
        for (int i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            {
                var_24 = (-((-(arr_24 [i_10 - 1] [i_10] [i_10 + 2] [i_10]))));
                var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6))))))))));
            }
        } 
    } 
}
