/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217650
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = var_8;
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (3498005612U)))))) > (arr_4 [i_1])));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_2]))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) min((5028246056604844498ULL), (16012676568079222138ULL)))))));
                    var_15 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(397920700U)))), (((((arr_13 [i_3]) + (9223372036854775807LL))) << (((((-7455164771892455332LL) + (7455164771892455367LL))) - (35LL)))))));
                    arr_23 [i_5] [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned int) -932378514)) : (1078501788U)))))), (max((((/* implicit */long long int) (short)12408)), (arr_13 [i_5])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_6 = 3; i_6 < 8; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) 932378511);
                        arr_27 [i_3] [i_4] [i_5] [i_6] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (unsigned short)19317)) / (((/* implicit */int) var_5)))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 1; i_8 < 9; i_8 += 3) 
                        {
                            arr_32 [i_4] [i_8] = ((/* implicit */unsigned short) 2434067505630329454ULL);
                            var_17 = ((/* implicit */long long int) (~((-(18389586798240567831ULL)))));
                        }
                        var_18 = ((/* implicit */unsigned int) ((((-472952690460307059LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))))) ? (2662937247220790681LL) : (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_5]), ((unsigned short)19317)))))));
                        arr_33 [i_3] [i_3] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) (!(((/* implicit */_Bool) 2434067505630329459ULL)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) -2121823114)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) (signed char)-77)))) <= (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) ((short) var_2))) ? ((+(671755275))) : (((/* implicit */int) arr_28 [i_3] [i_3] [i_3] [i_3]))))));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            arr_37 [i_9] [7U] [7U] [i_7] [7U] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (var_9))), ((!(((/* implicit */_Bool) arr_36 [i_9] [i_9] [i_5]))))));
                            var_19 = ((arr_25 [i_3] [i_4] [i_5] [i_4]) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_25 [i_9] [i_4] [i_9] [i_9])))));
                            arr_38 [i_3] [i_3] [i_3] [i_3] [i_9] = ((/* implicit */unsigned int) min((((((var_10) >> (((1078501788U) - (1078501766U))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-80)) || (((/* implicit */_Bool) (short)32767)))))))), (((/* implicit */long long int) (_Bool)1))));
                        }
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        var_20 = var_9;
                        var_21 -= ((/* implicit */_Bool) ((short) ((arr_24 [i_3] [i_3] [i_3]) <= (((/* implicit */unsigned long long int) 671755243)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                        {
                            arr_43 [i_11] [i_11] [i_10] [i_5] [i_5] [i_4] [i_3] |= (short)21530;
                            arr_44 [i_3] [i_4] [i_5] [0] [i_10] [i_10] [i_4] = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_39 [i_4] [i_5] [i_10] [i_11]))))), (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_12))))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
                        {
                            arr_48 [i_3] [i_4] [i_5] [i_10] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_1))))), (var_0)))) == (((/* implicit */int) var_11))));
                            arr_49 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) 57157275468983785ULL);
                            var_22 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */long long int) -1856079125)), (var_4)))))));
                            arr_50 [i_3] [i_4] [i_5] [i_10] [(unsigned char)0] [i_12] = ((/* implicit */int) var_0);
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                        {
                            arr_53 [i_3] [i_10] = ((/* implicit */unsigned long long int) var_8);
                            var_23 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_45 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (signed char i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            arr_56 [i_14] = arr_9 [i_10];
                            var_24 = ((/* implicit */unsigned long long int) 3671371998774939717LL);
                            var_25 -= ((/* implicit */unsigned char) var_3);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) 
                        {
                            {
                                arr_62 [i_16] [i_4] [i_5] [i_15] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_51 [2U] [i_4] [8ULL] [i_5] [i_15] [i_16] [i_16]), (arr_51 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))) ? (((/* implicit */int) (short)16757)) : (((/* implicit */int) (unsigned char)213))));
                                var_26 |= ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-49))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
