/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5056
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
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)63568)) * (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [13ULL] [i_0]))))) < (((/* implicit */int) (short)0)))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [16LL] [i_0])), (6442621104503918195ULL))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_1] [i_0]))))), (var_6)))));
                    var_22 = ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (2147483647) : (((((/* implicit */int) arr_0 [i_0 - 1])) + (((/* implicit */int) arr_0 [i_0 + 2])))));
                }
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [6LL] [(short)15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (var_0) : (((/* implicit */unsigned long long int) arr_3 [i_0 + 2] [i_0 - 1]))))) ? (max((arr_4 [(short)18] [(short)18] [i_0 + 1] [(unsigned short)1]), (((/* implicit */long long int) ((14U) ^ (((/* implicit */unsigned int) 2147483647))))))) : (max(((~(arr_4 [i_0 + 1] [i_0 + 1] [22ULL] [i_3]))), (((/* implicit */long long int) (short)0))))));
                    /* LoopSeq 4 */
                    for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_13 [i_4] [i_3] [15ULL] [(unsigned short)12] [8LL] [i_4] = ((/* implicit */short) min((min((((((/* implicit */_Bool) 9181808492980326834ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-20))) : (4294967282U))), (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) arr_2 [i_0] [i_1]))));
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_7)))))));
                        var_24 = (short)0;
                        var_25 = ((((arr_4 [i_0] [(unsigned short)5] [19LL] [i_0 - 1]) ^ (arr_4 [14ULL] [i_4] [(_Bool)1] [i_0 + 3]))) / (((/* implicit */long long int) 955786188U)));
                    }
                    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_26 = ((/* implicit */int) arr_5 [i_3] [i_3]);
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [7U] [i_1] [i_3])), (-231065422863398185LL))))))) : (((((((/* implicit */_Bool) arr_5 [i_3] [i_3])) || (((/* implicit */_Bool) 9264935580729224781ULL)))) ? (min((((/* implicit */int) (unsigned char)229)), ((-2147483647 - 1)))) : (((231673462) / (2147483647))))))))));
                        var_28 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_19))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) : (((/* implicit */int) (short)0))))), (var_0)));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) & (min((((/* implicit */unsigned long long int) (short)0)), (arr_17 [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0 + 2] [i_3])))));
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((-2147483645) + (2147483644)))), (((((/* implicit */_Bool) 4775054804928566264ULL)) ? (arr_14 [(short)8] [i_1] [21U] [21U] [i_3] [i_6]) : (arr_14 [i_0] [i_0 + 1] [(short)7] [(_Bool)1] [i_3] [i_6]))))))));
                    }
                    for (short i_7 = 2; i_7 < 22; i_7 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [10] [10] [i_3] [i_3])) ? (((/* implicit */int) ((unsigned short) arr_20 [20ULL] [i_1] [i_1] [i_7] [i_1]))) : (((/* implicit */int) ((9264935580729224783ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 + 3] [i_0 + 2] [i_7 - 1] [i_7]))))))));
                        arr_21 [(unsigned short)3] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_7)) < (((/* implicit */int) arr_0 [i_1])))) || (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) ((unsigned short) arr_17 [i_0] [14ULL] [15ULL] [i_0 + 1] [i_1])))));
                    }
                    var_32 = ((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_1] [i_3] [i_3]);
                }
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) min((9264935580729224777ULL), ((~(9181808492980326822ULL))))))));
                    var_34 = ((/* implicit */unsigned short) max((var_34), (arr_22 [3ULL] [i_8])));
                }
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((-2147483647), (-2147483645)))) ? (((/* implicit */long long int) 0U)) : (7LL))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9264935580729224783ULL)) ? (var_9) : (var_10))))))))));
    var_36 ^= ((/* implicit */unsigned long long int) var_8);
}
