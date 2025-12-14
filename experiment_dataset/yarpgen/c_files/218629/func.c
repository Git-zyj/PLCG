/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218629
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_14))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_16 -= ((/* implicit */signed char) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))) + (11285265384631970267ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1])))))));
                var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)185)) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            {
                var_18 -= ((/* implicit */unsigned char) (-(((-1839285404937530683LL) & (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_2])))))))));
                arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) (-((-((+(((/* implicit */int) arr_6 [i_2]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 4) 
    {
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 1; i_6 < 12; i_6 += 3) 
                {
                    for (unsigned int i_7 = 1; i_7 < 15; i_7 += 3) 
                    {
                        {
                            arr_22 [i_7] [(unsigned short)14] [i_6] [i_7] = ((((/* implicit */_Bool) 3703429363495109485LL)) && (((((/* implicit */int) arr_16 [i_7] [i_7] [i_7] [i_7])) <= (((/* implicit */int) arr_18 [i_6] [i_6 - 1] [i_6 + 2])))));
                            var_19 = ((/* implicit */short) (-(((((((/* implicit */_Bool) arr_7 [(short)7] [i_5])) ? (((/* implicit */int) arr_6 [i_4])) : (((/* implicit */int) arr_18 [i_6] [i_7] [i_7])))) + (((((/* implicit */int) arr_13 [5] [5] [5])) >> (((((/* implicit */int) arr_5 [i_5] [i_5])) + (26)))))))));
                            var_20 = ((/* implicit */long long int) 2403878928U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 14; i_8 += 2) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                            {
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3628891617U)))))) || (((/* implicit */_Bool) 0U))));
                                arr_31 [i_8] [i_8] [i_8] [i_9] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_15 [i_9])) ? (4747942591532927553LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_4] [i_4] [i_4] [i_4] [i_9]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4])) ? (2403878920U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_4] [i_4 + 1]))))))))));
                                var_22 = ((/* implicit */unsigned char) ((0U) | (((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_8 + 2] [i_8 - 2] [i_8 - 3] [i_8 - 2] [i_8 + 2])))))));
                                var_23 -= ((/* implicit */signed char) (-((((+(arr_11 [(signed char)10]))) ^ (((/* implicit */int) ((((/* implicit */int) arr_6 [i_8])) == (((/* implicit */int) (signed char)-8)))))))));
                                arr_32 [i_10] [i_10] [i_10] [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) -6470583802411342850LL);
                            }
                            for (long long int i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
                            {
                                var_24 -= arr_20 [i_4] [6] [i_4] [i_4];
                                var_25 -= ((/* implicit */unsigned int) (unsigned char)53);
                            }
                            for (long long int i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
                            {
                                var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)-2))) * (arr_28 [0LL] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [(short)14] [i_5] [i_8 + 2] [i_8] [i_8] [i_8] [i_8 - 3]))) - (arr_17 [i_4 + 1] [i_4 + 1] [i_4] [i_4]))))));
                                var_27 -= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                                arr_37 [i_12] [i_9] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) arr_17 [i_9] [i_9 - 1] [i_9] [i_9]);
                            }
                            var_28 += ((/* implicit */signed char) (-(((/* implicit */int) (signed char)2))));
                            var_29 = (unsigned char)205;
                        }
                    } 
                } 
                var_30 = ((/* implicit */short) arr_14 [i_4] [i_4] [i_4 - 2]);
                var_31 += ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_4 - 3])) != (((/* implicit */int) (unsigned char)205)))))) != (arr_28 [i_5] [i_5] [13LL] [i_5] [i_5] [i_5] [i_5])))) < (1742110242)));
            }
        } 
    } 
}
