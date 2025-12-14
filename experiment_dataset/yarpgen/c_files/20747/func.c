/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20747
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_2)))))) / (var_8))), (var_6))))));
    var_11 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = (-(((/* implicit */int) (unsigned short)55070)));
        var_12 -= ((/* implicit */long long int) ((unsigned int) arr_0 [i_0] [i_0]));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10437)))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((arr_5 [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55070)))))));
        arr_8 [(signed char)0] [(signed char)0] = ((long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 0LL))));
        var_14 ^= ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-83))) : (0LL));
        var_15 = (-(arr_5 [i_1 + 1]));
    }
    for (signed char i_2 = 3; i_2 < 10; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 4) 
        {
            for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                {
                    arr_15 [i_3] [i_3 - 2] [i_4] [11LL] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) | (((/* implicit */int) arr_13 [i_2 - 1] [i_2 - 1] [i_2 - 2])))) < (((/* implicit */int) arr_9 [i_3] [i_4 - 1]))));
                    var_16 ^= ((/* implicit */long long int) (signed char)50);
                    arr_16 [i_2] [i_3] [i_3] [i_4 - 1] = ((/* implicit */_Bool) var_7);
                    var_17 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (signed char)-103)), (9174746906027161152ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)93)), ((short)18319))))));
                }
            } 
        } 
        arr_17 [(_Bool)1] = ((/* implicit */long long int) ((unsigned long long int) ((arr_9 [i_2 + 2] [i_2 - 2]) ? (((((/* implicit */_Bool) arr_13 [11] [i_2] [i_2])) ? (arr_5 [i_2]) : (arr_5 [i_2]))) : (((((/* implicit */_Bool) var_4)) ? (6026013598201419846LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58185))))))));
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 10; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((min((arr_22 [i_2 - 1]), (arr_11 [i_2 + 1]))) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    arr_24 [i_2] [i_6 + 1] [i_2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_18 [i_5 + 1]), (arr_18 [i_5 + 2])))) ? (((/* implicit */int) ((unsigned short) 2973846007886584579LL))) : (((/* implicit */int) max(((unsigned short)55081), (((/* implicit */unsigned short) (short)-18320)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        arr_28 [i_2] [i_7] [i_5] [i_6] [i_7] [i_7] &= ((/* implicit */unsigned short) arr_18 [i_5]);
                        var_19 *= ((/* implicit */unsigned short) var_1);
                    }
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) -1165244658309732679LL)) ? (((4562225609592489709LL) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2]))))) : (((((/* implicit */_Bool) arr_26 [i_5 + 1] [i_5] [i_5 + 2])) ? (var_8) : (((/* implicit */long long int) arr_26 [i_5 + 2] [i_5] [i_5 + 1]))))))));
                        arr_33 [i_5] [i_5] [i_6] [i_8] = ((/* implicit */_Bool) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2]))) - (67092480ULL))), (((/* implicit */unsigned long long int) arr_30 [i_6 - 1] [i_5 + 1] [i_5 + 1] [i_8] [i_2] [i_2 + 2])))) * (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_31 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)18348)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58185))) != (9223372036854775807LL)))))))));
                        arr_34 [i_2] [i_2] [i_5] [i_8] = 6LL;
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
        arr_35 [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26355))) : ((-9223372036854775807LL - 1LL))))) ? (arr_11 [i_2]) : (((/* implicit */long long int) 23)))) > (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned char) arr_29 [i_2] [i_2]))))) ? ((((_Bool)0) ? (1353547388549677851LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_11 [i_2])) ? (5575530014675461684LL) : (-1LL)))))));
    }
    var_22 = ((/* implicit */signed char) var_7);
}
