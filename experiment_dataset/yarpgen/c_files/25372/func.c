/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25372
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((((/* implicit */int) (short)-15241)) * (((/* implicit */int) (signed char)-86))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_7)))) * (((/* implicit */int) ((_Bool) var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_11)));
                var_14 = ((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 3])) % (((/* implicit */int) (signed char)-89)))) < (((/* implicit */int) min((arr_4 [i_1 + 2] [i_1]), (arr_4 [i_1 + 2] [i_1 + 4]))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((arr_0 [i_1 + 2] [i_1 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)6585))))))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-86)) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) == (-6379548079335307731LL))))))))))));
                    var_16 -= ((/* implicit */unsigned short) ((signed char) (unsigned char)118));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */short) (-(arr_0 [i_1 + 3] [i_1 - 1])));
                        var_17 += ((/* implicit */short) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_2]))))));
                        var_18 += ((/* implicit */unsigned int) (_Bool)0);
                    }
                    arr_12 [1] [i_2] [i_2] = ((/* implicit */unsigned short) var_9);
                }
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1] [i_0] [i_4]))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((arr_16 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_4)))))))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(arr_18 [i_1 + 2] [i_5 - 1]))))));
                                var_22 -= arr_18 [i_0] [i_1];
                                arr_21 [i_0] [i_1 + 1] [i_5] [i_5] = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 1) 
                {
                    arr_24 [i_7] [i_7] [i_1] [i_7] = ((/* implicit */unsigned char) (-(((arr_0 [i_0] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_7 - 2] [i_7 - 2])))))));
                                arr_30 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned short) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_7 + 1]))) + (var_5)));
                }
                /* vectorizable */
                for (signed char i_10 = 2; i_10 < 10; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 3; i_12 < 10; i_12 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (_Bool)1))));
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_10] [i_10 + 2] [i_10 - 2]))))))));
                            }
                        } 
                    } 
                    arr_37 [i_10] &= ((/* implicit */signed char) arr_3 [i_0] [i_1 + 2] [i_1 + 2]);
                    arr_38 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) ((_Bool) var_11));
                }
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    for (short i_14 = 2; i_14 < 10; i_14 += 2) 
                    {
                        {
                            var_27 += ((/* implicit */signed char) ((((/* implicit */int) ((var_11) < (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_13 + 1] [i_1] [i_13 + 1] [i_14 - 1] [i_13] [i_13])))))) >> (((/* implicit */int) ((((/* implicit */int) arr_43 [i_13 + 1] [i_13 + 1] [i_14] [i_14 + 2] [i_1] [i_13 + 1])) > (((/* implicit */int) arr_43 [i_13 + 1] [i_13 + 1] [i_0] [i_14 + 1] [i_0] [i_14])))))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5860))) % (3488449959U))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
