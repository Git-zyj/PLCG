/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193328
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
    var_14 &= ((/* implicit */int) max(((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (var_13)))))), (((_Bool) max((var_10), (((/* implicit */unsigned long long int) var_0)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) max((min((arr_4 [i_2] [i_0] [i_0] [i_0]), (((/* implicit */long long int) min((arr_2 [i_0]), (arr_2 [i_2])))))), ((~(max((-1LL), (((/* implicit */long long int) arr_0 [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_15 &= ((/* implicit */int) (unsigned short)3340);
                                arr_12 [(_Bool)1] [(_Bool)1] [i_0] [i_3] [i_4] &= ((/* implicit */short) min((((/* implicit */long long int) (~(max((arr_10 [i_4] [i_3] [i_2] [i_1] [7ULL]), (-161644885)))))), (max((((/* implicit */long long int) (signed char)127)), (arr_9 [i_2] [i_0])))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))), ((~(arr_3 [i_1] [i_1] [i_1])))))));
                }
            } 
        } 
        arr_14 [(_Bool)1] = ((/* implicit */long long int) (~(max((arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned short)1]), (arr_3 [i_0] [(signed char)6] [i_0])))));
        var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((_Bool) 706037578))), (arr_1 [i_0] [i_0])));
        arr_15 [i_0] = arr_10 [i_0] [i_0] [i_0] [i_0] [i_0];
        arr_16 [(unsigned short)8] = ((/* implicit */unsigned long long int) arr_5 [6LL] [6LL] [i_0] [i_0]);
    }
    for (signed char i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
    {
        var_17 &= ((/* implicit */signed char) max((((/* implicit */long long int) min((((signed char) arr_17 [i_5])), (arr_17 [i_5])))), (arr_9 [i_5] [i_5])));
        var_18 &= ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) max((arr_11 [3LL] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */int) (signed char)114))))), (((((/* implicit */_Bool) arr_1 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5]))) : (arr_1 [i_5] [i_5])))))));
        var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_5] [i_5]))))), (min((((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_5])), (arr_11 [i_5] [i_5] [i_5] [i_5] [(unsigned short)0])))), (max((arr_4 [i_5] [i_5] [i_5] [i_5]), (arr_4 [(unsigned char)6] [i_5] [i_5] [i_5])))))));
    }
    for (signed char i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
    {
        arr_23 [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_7 [i_6] [i_6] [i_6] [i_6]) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))) && ((!(arr_0 [i_6] [i_6])))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-89)) > (706037578)));
    }
    for (unsigned char i_7 = 2; i_7 < 14; i_7 += 1) 
    {
        var_21 &= ((/* implicit */signed char) min((min((((/* implicit */long long int) -1989763532)), (4216567135754042427LL))), (((/* implicit */long long int) ((((/* implicit */long long int) max((((/* implicit */int) (signed char)114)), (arr_25 [(_Bool)1])))) > (((((/* implicit */long long int) arr_25 [8ULL])) ^ (arr_26 [i_7]))))))));
        var_22 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_24 [i_7 - 1]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7])) ? (((/* implicit */int) arr_24 [(unsigned char)0])) : ((-2147483647 - 1)))))))), (max((((/* implicit */long long int) (~(arr_25 [i_7])))), (((((/* implicit */_Bool) 2147483647)) ? (arr_26 [i_7 - 2]) : (arr_26 [11])))))));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                {
                    arr_32 [i_9] [i_7] [i_9] &= ((/* implicit */int) ((((/* implicit */int) (short)-11960)) < ((-(((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))));
                    var_23 &= ((/* implicit */_Bool) ((((arr_28 [i_8]) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-114)))))) + ((-(min((((/* implicit */long long int) arr_24 [i_9])), (arr_28 [i_9])))))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        for (short i_11 = 0; i_11 < 16; i_11 += 1) 
                        {
                            {
                                var_24 &= ((/* implicit */long long int) (+(min((5872068197568801930ULL), (((/* implicit */unsigned long long int) arr_24 [i_7 - 1]))))));
                                var_25 &= ((/* implicit */_Bool) min(((((~(((/* implicit */int) (unsigned short)31178)))) * (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-114)) && (arr_27 [i_9])))))), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_24 [i_7])))) && (((/* implicit */_Bool) ((unsigned short) arr_24 [i_7]))))))));
                                var_26 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_31 [i_10] [i_9] [i_7] [i_7])), ((+(arr_29 [i_9] [2LL] [i_8])))))) ? (((long long int) (~(arr_28 [i_9])))) : (((((/* implicit */_Bool) ((signed char) arr_24 [i_11]))) ? (((arr_28 [i_7 + 1]) >> (((arr_35 [i_7]) + (681089408874234909LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_27 [i_10])), ((signed char)(-127 - 1))))))))));
                                arr_38 [15ULL] [i_7] [i_9] [i_9] [i_11] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_37 [i_7])) != (18446744073709551615ULL))) ? (((/* implicit */int) arr_33 [i_7] [i_7] [i_7] [i_7] [i_7] [1ULL])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (1163604147)))) != (min((12853034702854779927ULL), (((/* implicit */unsigned long long int) (unsigned short)8)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
