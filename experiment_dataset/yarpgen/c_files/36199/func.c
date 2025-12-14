/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36199
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_17 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) 8652288382321181794ULL)) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) var_9)))))), (((/* implicit */int) (!(((/* implicit */_Bool) 3635403730U)))))));
                    var_18 = ((/* implicit */int) var_16);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_19 ^= ((/* implicit */unsigned short) var_15);
                        arr_12 [i_1] = ((/* implicit */unsigned int) ((long long int) min((((/* implicit */long long int) var_9)), (arr_2 [i_0]))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_15 [i_4] [i_4] [i_4] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (arr_3 [i_4])))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (max((var_15), (-4869024176958252726LL))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (2153709998U))))))));
                        arr_16 [i_0] [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) (~((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))))));
                        arr_17 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */int) ((signed char) min((((((/* implicit */_Bool) arr_4 [i_1])) ? (var_13) : (arr_2 [i_0]))), (((/* implicit */long long int) var_8)))));
                    }
                }
                for (signed char i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_1] [i_5] = arr_8 [i_1];
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) 2489314802U)))));
                }
                for (signed char i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 23; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-89)) == (((/* implicit */int) (signed char)34))))), (2153709998U))), (min((((/* implicit */unsigned int) (unsigned char)0)), (3635403727U)))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_7))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (max((((/* implicit */unsigned int) var_11)), (((3130476498U) - (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_23 [i_0] [i_1] [i_6])))))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (+(arr_5 [i_0])))), (15467556874924448170ULL))))))));
                }
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (arr_24 [i_0] [i_1] [i_1] [i_10]))) + (arr_32 [i_1] [i_11 - 1])))) | (((((min((-5981371957865632627LL), (-5981371957865632653LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) 2153709992U)) || (((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_10] [i_11])))))))));
                                var_26 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((-2529063189351671853LL) >= (((/* implicit */long long int) arr_11 [i_9] [i_10] [i_0]))))), (min((var_10), (((/* implicit */unsigned long long int) var_15))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)255))));
                                arr_40 [i_11] [i_11] [i_11] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) 3953072371U)) / (var_13)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) arr_38 [i_0] [i_1] [i_1] [i_10] [i_11]))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) min((var_8), (((/* implicit */short) arr_14 [i_0] [i_1] [i_1]))))))))) : (1105364489294506308ULL)));
                                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) var_5))));
                                arr_41 [i_0] [i_1] [i_1] [i_1] [i_11] = ((/* implicit */long long int) 1105364489294506313ULL);
                            }
                        } 
                    } 
                    arr_42 [i_1] [i_1] [i_0] = ((/* implicit */signed char) (-(arr_20 [i_0] [i_1] [i_0])));
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) && (((/* implicit */_Bool) 8242307717703410780ULL)))))));
                    var_29 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_30 [i_1] [i_1] [i_9])) : (((/* implicit */int) arr_28 [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) & (var_15))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_9] [i_9])) ? (-5981371957865632653LL) : (var_13))))), (((/* implicit */long long int) var_11))));
                }
                arr_43 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) 1894261150)), (((long long int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5))))));
}
