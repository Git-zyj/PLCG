/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30237
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
    var_18 -= ((/* implicit */_Bool) var_13);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = (!(((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_0])))))));
                    arr_8 [i_1] [i_1 + 3] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)86)) ? (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 4] [i_1 + 4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) ((signed char) arr_2 [i_0] [i_1 + 4])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)19360)))) ? (((int) (_Bool)1)) : (((/* implicit */int) (!((_Bool)1))))))) ? ((~(((/* implicit */int) ((signed char) var_0))))) : ((-(((/* implicit */int) (unsigned char)17)))));
                                var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -1873898181)) ? (((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (unsigned short)30349)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 6563471137711929778ULL)) ? (((/* implicit */int) (unsigned short)19111)) : (((/* implicit */int) (short)-9084)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) ((_Bool) (signed char)-125))))));
                        arr_19 [i_5] [i_0] [5LL] [i_0] [i_0] [i_0] &= max((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 12028320427250182381ULL)) ? (((/* implicit */int) (short)32722)) : (((/* implicit */int) var_9)))))), (((unsigned int) (unsigned char)196)));
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1708445283U))));
                        arr_20 [i_1] [i_2] = ((/* implicit */signed char) min(((~(((/* implicit */int) var_9)))), (min((-855691227), (((/* implicit */int) arr_17 [i_1 - 1] [i_1 + 2]))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        arr_23 [i_1 + 1] [(signed char)3] [i_1 + 1] [i_1] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)217)))), ((~(((/* implicit */int) var_5))))));
                        arr_24 [i_6] [i_2] [i_1 + 4] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525))) : (10870763722160380267ULL)))));
                        var_23 = ((_Bool) ((_Bool) var_11));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_7 = 1; i_7 < 14; i_7 += 1) 
    {
        var_24 |= ((/* implicit */signed char) ((int) (-(((/* implicit */int) arr_25 [(signed char)14])))));
        arr_27 [i_7] = ((/* implicit */short) ((unsigned long long int) (unsigned short)65528));
        arr_28 [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
        var_25 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
    }
    for (unsigned char i_8 = 1; i_8 < 14; i_8 += 1) 
    {
        var_26 = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (unsigned char)217)))));
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */int) ((unsigned short) -1955186884))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
        arr_32 [i_8] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))))), ((-(arr_26 [i_8]))))), (((unsigned int) arr_31 [i_8]))));
        var_28 = ((/* implicit */signed char) (+(((/* implicit */int) min(((short)-15714), (((/* implicit */short) (_Bool)1)))))));
    }
    for (int i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        arr_35 [i_9] [i_9] = ((/* implicit */short) max((((long long int) max(((signed char)-44), (((/* implicit */signed char) (_Bool)1))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_34 [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_33 [i_9])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
        arr_36 [i_9] [i_9] = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [(unsigned short)6]))))))));
        arr_37 [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_33 [i_9])))) ? (((/* implicit */int) var_11)) : (((var_5) ? (((/* implicit */int) (_Bool)1)) : (1998299158))))))));
    }
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))), (var_15)))) ? (((unsigned long long int) min((var_10), (((/* implicit */short) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
}
