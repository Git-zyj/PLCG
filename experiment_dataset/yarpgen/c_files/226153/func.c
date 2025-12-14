/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226153
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
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (arr_4 [i_0] [i_1])))) ? (((/* implicit */int) ((var_4) && (((/* implicit */_Bool) (signed char)-4))))) : (((/* implicit */int) var_10))))) >= (3991908993U)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 8; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [(unsigned char)0] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (-852026661)));
                                arr_17 [i_0 - 1] [(unsigned char)3] [i_4] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)24)) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 + 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max(((signed char)-4), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_1])) || (((/* implicit */_Bool) -6733297446426236284LL))))))))) >= ((-((+(var_3))))))))));
                                arr_24 [i_0] = ((/* implicit */short) (+(((((/* implicit */int) arr_21 [i_0 - 1] [i_0] [8U] [9ULL] [i_0] [i_0])) + (((/* implicit */int) (unsigned short)58961))))));
                                var_14 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (((-2147483647 - 1)) ^ (((/* implicit */int) arr_21 [i_0] [(_Bool)1] [i_1] [i_2] [4LL] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [(_Bool)1] [i_1])) > (((/* implicit */int) (unsigned short)6575))))) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0 - 3] [i_0] [i_0 - 3])))));
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 9; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            {
                                var_16 += ((/* implicit */signed char) (~(((arr_15 [i_1] [i_7 - 1] [i_8 + 1] [i_8 + 1] [6U] [i_8] [(signed char)6]) - (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_1] [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8])))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 3907590197U)) && (((/* implicit */_Bool) (unsigned char)128))))) < (((/* implicit */int) max((var_4), ((!(((/* implicit */_Bool) arr_21 [0LL] [i_1] [i_2] [i_1] [i_2] [i_8])))))))));
                                var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0 - 1] [(_Bool)1] [(_Bool)1] [(unsigned short)4] [(signed char)10] [i_0])) ? (((/* implicit */int) arr_26 [(signed char)7] [i_1] [i_0] [i_1] [(unsigned short)8])) : (((/* implicit */int) (signed char)-14))))) / (arr_15 [i_0] [i_0 - 3] [i_0] [i_7] [(_Bool)1] [(_Bool)1] [i_7 - 1]))) / (((/* implicit */long long int) 3173725018U))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_9 = 3; i_9 < 10; i_9 += 3) 
                {
                    var_19 = ((/* implicit */long long int) arr_28 [i_0] [i_1] [i_1] [i_1]);
                    var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_11 [i_9])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_33 [i_0 + 1] [i_1] [i_9 - 1] [i_9 + 1]))))) ? ((((!(arr_8 [i_1]))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_9 - 3] [i_0 - 2] [i_0])))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))) < (min((arr_15 [i_0] [i_0] [i_1] [i_1] [2ULL] [i_9] [i_9]), (((/* implicit */long long int) (unsigned char)128))))))))))));
                    var_21 = ((/* implicit */signed char) (+(((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_9]))))) ^ (((/* implicit */int) (unsigned char)213))))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_39 [i_0 - 3] [i_0 - 3] [(_Bool)1] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_20 [i_10] [4LL] [i_1] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-19014)))) : (((/* implicit */int) ((((/* implicit */_Bool) 787335660U)) && (((/* implicit */_Bool) (signed char)15))))))), (((/* implicit */int) (unsigned short)58944))));
                    arr_40 [i_1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)76)) ? (arr_5 [i_0 - 2] [i_0]) : (arr_5 [i_1] [i_0]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned short)38581)))))));
                }
                /* vectorizable */
                for (unsigned short i_11 = 1; i_11 < 8; i_11 += 2) 
                {
                    var_22 = ((/* implicit */short) (signed char)-25);
                    arr_44 [i_0] = ((/* implicit */short) (((+(((/* implicit */int) var_1)))) - (((/* implicit */int) arr_30 [i_0] [i_0 - 1] [(unsigned short)7] [(unsigned short)10] [i_0 - 2] [(unsigned char)8]))));
                    var_23 = ((/* implicit */long long int) ((signed char) arr_34 [i_0]));
                }
                var_24 = ((/* implicit */unsigned short) (+(arr_37 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 2])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_12 = 1; i_12 < 10; i_12 += 1) 
    {
        for (unsigned int i_13 = 2; i_13 < 7; i_13 += 4) 
        {
            {
                arr_50 [i_12] [i_12] [i_13 - 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_12] [i_12])) ? (((/* implicit */int) (signed char)-82)) : (-2042024328)))) && ((!(((/* implicit */_Bool) arr_11 [i_13 + 4])))))) ? (((/* implicit */int) max((((/* implicit */short) arr_18 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 + 1])), (arr_30 [i_12 - 1] [5U] [(unsigned short)8] [i_12 - 1] [i_12 - 1] [i_13 - 2])))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 3173725042U)))))))));
                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_4 [i_13 - 2] [i_13 - 1]))))));
            }
        } 
    } 
    var_26 -= var_6;
    var_27 = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18674))) + (var_9))))) <= (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_6))))));
}
