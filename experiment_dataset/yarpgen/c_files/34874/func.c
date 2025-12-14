/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34874
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
    var_18 = max((var_10), (((/* implicit */unsigned short) var_12)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_19 = arr_1 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((9223372036854775807LL) == (var_3))) ? (((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3 + 2] [i_3 - 1] [i_3] [i_3 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_7 [(unsigned char)5] [5] [i_3 + 1] [i_3 + 1]))) : (((/* implicit */long long int) arr_11 [i_3] [i_3] [i_3 + 3] [i_3 + 1] [i_3 + 1] [i_3 + 2])))))));
                                var_21 = ((/* implicit */signed char) 8972563762432012613LL);
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = 927052477043101127LL;
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [4] = ((/* implicit */unsigned long long int) (-((+(var_4)))));
                }
            } 
        } 
        arr_14 [0] = ((int) 9223372036854775807LL);
    }
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        arr_17 [i_5] = (-(min((var_1), (((/* implicit */long long int) ((var_11) & (((/* implicit */int) var_13))))))));
        arr_18 [i_5] &= 1354591743;
    }
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 3) 
    {
        for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            {
                                arr_31 [i_7] [i_7] [i_7] [i_7] [(signed char)12] = max((max((9223372036854775807LL), (((/* implicit */long long int) ((int) (signed char)55))))), (((/* implicit */long long int) (~(arr_25 [(unsigned short)8] [16LL] [i_6 + 1] [i_6 - 3])))));
                                arr_32 [i_7] [i_8] [i_7] [(signed char)2] = ((/* implicit */unsigned int) min(((-(arr_30 [i_6 - 3]))), (((((/* implicit */_Bool) arr_19 [i_6 + 2])) ? (((/* implicit */int) var_12)) : (var_0)))));
                                var_22 = ((/* implicit */int) var_13);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) 4294967285U)) > (-927052477043101130LL))))));
                }
                /* vectorizable */
                for (signed char i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    arr_35 [i_11] [i_7] [i_11] = ((long long int) var_15);
                    var_24 = ((/* implicit */int) (+(16277260999723530465ULL)));
                    arr_36 [i_11] = ((/* implicit */unsigned short) (+((-(6837428503062016643LL)))));
                }
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((max((var_3), (((/* implicit */long long int) 10U)))) * (((/* implicit */long long int) var_4)))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_10)) / (arr_19 [i_7])))) <= (((long long int) arr_34 [i_7])))))))))));
                arr_37 [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) arr_19 [6])) : (var_1)))) ? (-702982687) : (((/* implicit */int) arr_27 [i_6] [i_6 - 1] [12LL] [i_7] [i_7] [(unsigned short)14]))))) * (((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_17)), (var_14)))) : (((((/* implicit */_Bool) 1202117196)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16721))) : (-927052477043101127LL)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -1954400565)) ? (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) 1126733686)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (unsigned char)6)))))) | ((-(((((/* implicit */_Bool) var_3)) ? (2147483647) : (((/* implicit */int) var_12))))))));
    var_27 = ((/* implicit */int) min((var_27), (var_8)));
}
