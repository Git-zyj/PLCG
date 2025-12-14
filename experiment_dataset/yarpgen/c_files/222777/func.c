/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222777
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
    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)24927)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) max((var_3), (min((arr_0 [i_0]), (((/* implicit */unsigned short) var_1)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) max((((signed char) ((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (1433614951U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))), (((signed char) arr_6 [i_0] [i_1] [i_2]))));
                    arr_8 [i_0] = ((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (((/* implicit */signed char) var_10)))))) <= (min((18446744073709551593ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))))), (max((var_8), (((/* implicit */signed char) arr_6 [i_2] [i_1] [i_0]))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) -7597595638544303336LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)22), ((signed char)23))))) : (((((/* implicit */unsigned long long int) 2093056U)) + (arr_5 [16LL] [16LL] [0ULL]))))), (((/* implicit */unsigned long long int) var_6))));
                    arr_10 [i_1] [i_2] [9U] = ((/* implicit */_Bool) var_8);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))), (max((((((/* implicit */_Bool) 127U)) ? (8522396549877147882ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_0])), (var_6))))))));
                        var_14 -= ((/* implicit */signed char) max(((+(arr_5 [i_0] [i_2] [i_2]))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92))) : (18ULL)))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_4 [i_1] [i_3])), (arr_11 [i_0] [i_0] [i_2] [i_3]))))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((4294967154U) - (126U)))) : (min((8522396549877147850ULL), (((/* implicit */unsigned long long int) -9069541997306140999LL))))))));
                            var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8522396549877147848ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)1023))))) <= ((+(min((((/* implicit */unsigned int) (signed char)110)), (var_0)))))));
                            var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_1))))) || (var_1))) ? (min((((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [16U] [16U]))) * (var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            arr_21 [i_5] [i_1] [i_0] [i_1] [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) (short)21179)) >> (((8522396549877147845ULL) - (8522396549877147837ULL)))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (signed char)97))));
                            var_19 -= ((/* implicit */signed char) (unsigned char)75);
                            arr_22 [i_0] [i_2] [i_0] |= ((/* implicit */_Bool) max((((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_18 [i_0] [i_3] [(short)14] [(signed char)18] [i_0]))))) * ((~(279161692003905586LL))))), (((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))))));
                            var_20 = ((/* implicit */long long int) (-(((max((9924347523832403764ULL), (((/* implicit */unsigned long long int) arr_12 [(short)6] [i_0] [i_0] [i_3])))) >> (((arr_14 [i_5] [i_3] [i_2] [i_1] [i_0]) - (2321257536792650614ULL)))))));
                        }
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */short) (+(min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))) : (-8731946560516916319LL)))))));
        var_22 = ((max((((/* implicit */unsigned int) max(((signed char)127), (((/* implicit */signed char) var_10))))), (var_6))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            var_23 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */int) var_8)), ((-(((/* implicit */int) var_3))))))), (((((((((/* implicit */_Bool) var_4)) ? (arr_12 [i_6] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6]))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((unsigned char) var_5)))))));
            var_24 = ((/* implicit */_Bool) min((((min((((/* implicit */unsigned long long int) var_6)), (9924347523832403731ULL))) % (((/* implicit */unsigned long long int) max((-1449685145427211550LL), (((/* implicit */long long int) var_7))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)0))) ? (((/* implicit */int) ((((/* implicit */_Bool) -7317613424653004781LL)) || (((/* implicit */_Bool) (unsigned char)0))))) : (((/* implicit */int) (!(var_10)))))))));
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) ((arr_17 [8LL] [8LL] [8LL] [(_Bool)1] [i_7]) && (arr_17 [(_Bool)1] [4U] [i_7] [(unsigned char)10] [i_7]))))))), (arr_12 [i_6] [i_6] [i_7] [i_7]))))));
        }
        for (int i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            arr_29 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) var_8);
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) arr_27 [i_6])), (var_0))))))));
        }
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_6))));
        var_28 = ((/* implicit */unsigned char) var_3);
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        arr_34 [i_9] = ((/* implicit */unsigned long long int) (((+(max((((/* implicit */unsigned long long int) var_3)), (9924347523832403776ULL))))) <= (((/* implicit */unsigned long long int) var_4))));
        var_29 = ((((/* implicit */_Bool) ((arr_14 [i_9] [i_9] [(signed char)13] [(signed char)18] [i_9]) * (((/* implicit */unsigned long long int) var_0))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (arr_14 [i_9] [i_9] [i_9] [i_9] [i_9]))));
        arr_35 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) -9069541997306140987LL)) : (15120386399304447355ULL)));
        var_30 -= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65515))));
    }
}
