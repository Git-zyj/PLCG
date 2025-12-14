/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227461
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0]))));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) 13ULL)));
            var_13 = arr_0 [i_1] [i_0];
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_2] [i_1] [i_2] = ((/* implicit */signed char) -2007477815374238090LL);
                    arr_14 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1]);
                }
                for (int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                {
                    var_14 -= ((/* implicit */unsigned long long int) arr_12 [i_0] [i_2] [i_2]);
                    arr_17 [i_2] = ((/* implicit */unsigned short) (~(18446744073709551615ULL)));
                    arr_18 [i_2] [i_2] = ((/* implicit */int) var_10);
                    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_1 [i_2])))))));
                }
                var_16 = ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_2] [i_0])));
            }
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */int) ((arr_19 [i_0] [i_1] [i_0]) > (arr_19 [i_5] [i_1] [i_0])));
                var_18 ^= ((/* implicit */unsigned int) (((+(var_5))) > (22ULL)));
                var_19 = ((/* implicit */unsigned int) arr_5 [i_5] [i_1]);
                var_20 = ((/* implicit */signed char) arr_12 [i_5] [i_1] [i_0]);
            }
        }
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (unsigned int i_7 = 3; i_7 < 13; i_7 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_4))));
                    var_22 += ((/* implicit */signed char) ((unsigned long long int) var_12));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 14; i_9 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(2431684941U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_24 [i_0] [i_9 + 1] [i_7 - 1] [i_8])));
                                arr_31 [i_9] = ((/* implicit */unsigned int) arr_20 [i_9] [i_0] [i_0] [i_0]);
                                var_24 = ((/* implicit */signed char) ((var_5) / (arr_28 [i_8])));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_0] [i_6] [i_7])) ? (arr_16 [i_9 + 1] [i_8] [i_9] [(unsigned short)11] [i_7 + 1] [i_9]) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_9)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            {
                                var_26 = (-(-164752625));
                                arr_38 [i_11] [i_11] [i_10] [i_7] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30139)))))) > (arr_0 [i_7 - 3] [i_6])));
                                var_27 = ((/* implicit */unsigned short) ((long long int) var_4));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_28 = ((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0] [i_0]);
            arr_41 [i_12] [i_12] = ((/* implicit */int) ((11068274170725357076ULL) < (arr_24 [i_12] [i_12] [i_0] [i_12])));
            var_29 = ((/* implicit */int) min((var_29), ((-(var_9)))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            var_30 = (!(((/* implicit */_Bool) arr_9 [i_0] [i_13] [i_13])));
            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_1)))))));
        }
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((unsigned short) 1863282329U)))));
        arr_45 [i_0] [i_0] = ((/* implicit */int) ((arr_9 [0ULL] [i_0] [0ULL]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (short)10246))))))));
    }
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (var_7)))) ? (min((1863282354U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2007477815374238089LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (var_11))))));
    var_34 = ((/* implicit */unsigned long long int) 1863282356U);
    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (min((((/* implicit */long long int) (-(var_9)))), (max((2007477815374238071LL), (((/* implicit */long long int) var_0))))))));
    var_36 = max((max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) -344184355))))))), (((/* implicit */unsigned long long int) 2431684941U)));
}
