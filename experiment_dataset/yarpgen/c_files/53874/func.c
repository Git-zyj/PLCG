/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53874
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_10 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_1)), (max((((/* implicit */unsigned long long int) 264384723911329810LL)), (12136511700212431231ULL)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_9)) - (((/* implicit */int) var_3))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_2 + 1] [i_2 + 1]))))) : (max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_3)))), (((/* implicit */int) max(((short)-31645), (arr_4 [i_0] [i_1]))))))));
                                var_12 -= ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (var_5)));
                                var_13 = ((/* implicit */int) max((((/* implicit */unsigned short) max(((signed char)-56), (max(((signed char)-117), ((signed char)80)))))), ((unsigned short)40654)));
                                arr_12 [i_2 - 2] [i_0] = ((/* implicit */unsigned long long int) max((max((((arr_8 [(short)1] [i_3] [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57530)))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_3])))))));
                            }
                        } 
                    } 
                    arr_13 [i_2 - 2] [i_0] [i_2] = ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
                    var_14 = ((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1 - 1] [i_0] [i_0 - 1]);
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 22; i_5 += 3) 
                    {
                        for (signed char i_6 = 1; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_19 [i_1 + 1] [i_1 - 1] [i_0] [i_1] [i_1] [i_1] [(signed char)16] = ((/* implicit */int) ((long long int) max((min((12650433317369138319ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_6] [i_0] [i_5] [i_0] [i_6])))), (((/* implicit */unsigned long long int) var_3)))));
                                var_15 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23845))) : (2726677404U)));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned int) -9172846404051181640LL))), (((((/* implicit */_Bool) (+(arr_11 [i_7] [i_7] [i_8] [i_8] [i_9])))) ? (((arr_26 [(unsigned char)3] [i_8] [3LL]) * (((/* implicit */unsigned long long int) -8533999098202613867LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64731))) / (21101647U))))))));
                    arr_28 [i_7] [i_7] [i_7] = ((/* implicit */short) arr_2 [i_7] [i_7]);
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
                        {
                            arr_33 [i_7] [i_9] [(short)7] = ((/* implicit */long long int) (unsigned char)249);
                            var_18 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_27 [1LL] [i_7] [i_11])) <= (var_6))))));
                            arr_34 [i_7] = (((((!(((/* implicit */_Bool) (unsigned short)6)))) || (((/* implicit */_Bool) (unsigned char)247)))) ? (min((((/* implicit */int) (short)15463)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_7] [i_7])))))) : ((((!(((/* implicit */_Bool) 2056423563)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_7] [(short)16] [i_7] [i_9] [i_7] [(unsigned char)9]))))) : (((/* implicit */int) arr_32 [i_11] [3ULL] [i_9] [i_8] [i_7])))));
                            arr_35 [15ULL] [15ULL] [(unsigned short)6] [(short)5] [i_11] [i_7] [(unsigned short)0] = ((/* implicit */unsigned int) ((_Bool) arr_2 [i_7] [i_7]));
                            arr_36 [i_7] [i_10] [i_10] [i_10] [i_7] [i_10] [9U] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (signed char)4))));
                        }
                        for (long long int i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */signed char) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            arr_39 [i_7] [i_7] [i_7] [i_7] [i_9] [i_10] [i_12] = ((/* implicit */long long int) arr_22 [i_7] [i_8]);
                        }
                        arr_40 [i_7] [i_9] [(unsigned char)1] [i_8] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (short)14499))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)55)), (arr_4 [i_7] [i_7])))) : (((((/* implicit */_Bool) arr_18 [i_10] [2U])) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) var_1))))))) ^ (((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27691))) : (max((((/* implicit */long long int) (unsigned short)940)), (-1392698469995575962LL)))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((-381403004) >= (((/* implicit */int) (_Bool)1)))))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) max((arr_7 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned int) var_3))))) : (65535LL))) << (((arr_5 [(_Bool)1]) - (3381969068U))))))));
                        arr_43 [i_7] [i_7] [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) arr_22 [i_7] [i_13]);
                    }
                }
            } 
        } 
    }
    var_22 = ((/* implicit */signed char) var_9);
    var_23 = var_3;
}
