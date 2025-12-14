/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207468
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
    var_16 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86))) : (10664621404881335423ULL))), (((/* implicit */unsigned long long int) var_6))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) -8001363434403147900LL)) && (((/* implicit */_Bool) (signed char)95)))) ? (((((/* implicit */_Bool) (signed char)-101)) ? (10664621404881335423ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))))) / (max((((/* implicit */unsigned long long int) -1772254097876919922LL)), (3795189315993650898ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-7653)) : (((/* implicit */int) arr_1 [i_0])))))) / (min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_13 [3ULL] [i_1 - 2] [3ULL] [i_3] [i_4])) ? (((/* implicit */int) (unsigned short)48413)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_4] [i_2])))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_12)))))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_1 + 2])) ? (-1030997286735436978LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(short)12] [i_1] [(short)12] [i_1 + 2])))))) ? (((max((((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])), (18446744073709551612ULL))) / (((((/* implicit */_Bool) (unsigned short)0)) ? (638059658382641526ULL) : (var_12))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) var_6))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * (arr_5 [i_0] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((-2147483634), (((/* implicit */int) (short)-2406))))) ? (max((var_12), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1 + 2] [i_2] [(unsigned short)18])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
                    var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (var_15)))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_12 [i_2] [i_1] [i_2])))) : (((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (unsigned short)61377)))))), (max((((var_4) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_2])))), (((/* implicit */int) arr_1 [i_1 + 3]))))));
                    arr_14 [i_0] [i_0] [17ULL] [i_2] = ((((/* implicit */_Bool) min(((signed char)16), (arr_11 [i_0] [i_1 + 2] [i_2] [i_2] [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)160))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_4 [8U] [i_1] [i_1]) : (((/* implicit */int) (signed char)52))))) ? (((((/* implicit */_Bool) arr_8 [(signed char)10] [(signed char)10] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) 3788366925U)) : (4ULL))) : (((((/* implicit */_Bool) (unsigned short)18178)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)28578)))))) ? (((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)0)))) : (((((/* implicit */int) (signed char)0)) / (((/* implicit */int) (unsigned char)12))))))), (var_13)));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)71), (((/* implicit */unsigned char) (signed char)-6)))))) : (((((/* implicit */_Bool) var_9)) ? (2609134096910528920ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (var_9)))) ? (((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))) : (var_12))) : (((/* implicit */unsigned long long int) var_0))))));
}
