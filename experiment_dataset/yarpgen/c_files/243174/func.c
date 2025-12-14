/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243174
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
    var_12 = ((/* implicit */long long int) min((((((((/* implicit */_Bool) 15322170070017083170ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40809))) : (var_4))) != (((((/* implicit */_Bool) var_9)) ? (-3552957114694589721LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (((_Bool) (unsigned short)8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (unsigned short)65527)))));
        arr_2 [i_0 - 1] = ((/* implicit */short) -1LL);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */short) var_1);
            arr_6 [(short)9] [i_1] [i_0 + 1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4294036420U)) | (27ULL)))) ? (((-3552957114694589715LL) ^ (((/* implicit */long long int) 4294036420U)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0]))))))));
            var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1])) || (((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 - 2]))));
            arr_7 [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) -3552957114694589750LL)) || (((/* implicit */_Bool) 930875U))));
        }
        arr_8 [(unsigned short)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (arr_3 [i_0] [i_0 - 1])));
    }
    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned short)34689))));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (((+(((((/* implicit */long long int) ((/* implicit */int) (short)17058))) ^ (var_2))))) == (var_2))))));
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_12 [i_2] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5083))) ^ (min((((/* implicit */unsigned int) var_9)), (var_3))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (signed char i_4 = 2; i_4 < 9; i_4 += 4) 
            {
                {
                    arr_19 [i_2] [i_4] = ((/* implicit */_Bool) (((-((-(((/* implicit */int) (signed char)0)))))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2]))) <= (var_2))))));
                    arr_20 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) var_8);
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (min((((/* implicit */unsigned int) var_0)), (930856U))))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_28 [(signed char)14] [i_6 + 1] [i_6 + 1])))) ? (min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) ((short) var_4))))) : (min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_30 [(signed char)11] [i_7] [i_6] [i_8] [i_6] [i_6]))))))))))));
                        arr_31 [i_5] [i_6 + 1] [i_5] [i_8] [i_5] [i_7] = ((/* implicit */unsigned int) (~((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_8)))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                    {
                        arr_34 [i_9] [i_9] [i_5] [i_5] [(signed char)5] [(signed char)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_29 [i_5] [i_7] [i_5] [i_5] [i_5]))) ? (((/* implicit */int) ((signed char) 3552957114694589727LL))) : (((/* implicit */int) ((signed char) (unsigned short)19615)))))) || (((/* implicit */_Bool) ((unsigned long long int) min(((signed char)-1), ((signed char)-1)))))));
                        var_19 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49156))) < (-13LL)))), ((~(((/* implicit */int) (_Bool)1))))));
                        arr_35 [i_5] [i_7] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8260)) && (((/* implicit */_Bool) var_7))))), (max((min((((/* implicit */unsigned long long int) (unsigned short)5091)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_23 [i_6 + 1] [7LL] [i_6 + 1]))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        for (long long int i_11 = 1; i_11 < 23; i_11 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) (+(max((((/* implicit */long long int) min((((/* implicit */short) var_6)), (arr_26 [i_7] [i_7] [i_5] [i_10])))), (min((((/* implicit */long long int) var_0)), (var_2)))))));
                                var_21 = ((/* implicit */signed char) 2218171917929453211ULL);
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15672180651454127871ULL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65533), (((/* implicit */unsigned short) (short)14686))))))));
                                var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_27 [18ULL] [i_6] [i_6])) / (((/* implicit */int) arr_27 [i_5] [i_6 + 1] [i_6 + 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
