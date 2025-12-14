/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44204
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? ((-(((/* implicit */int) arr_0 [i_2 - 1])))) : (((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) (short)23146)) : (((/* implicit */int) arr_0 [i_2 - 1]))))));
                        arr_10 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        arr_14 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1195455403U)) ? (arr_3 [i_4] [i_4] [7]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(4150314284U)))) ? (264241152) : (((/* implicit */int) var_11)))))));
        arr_15 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4] [i_4] [i_4])) ? (arr_3 [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2580)) ? (arr_3 [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            var_14 ^= ((/* implicit */int) arr_6 [i_5] [i_5] [i_5]);
            var_15 = ((/* implicit */unsigned char) var_8);
            var_16 ^= ((/* implicit */long long int) max((144653028U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_5] [i_5] [i_5])) % (((/* implicit */int) arr_6 [i_5] [i_5] [i_5])))))));
            var_17 &= ((/* implicit */long long int) var_12);
        }
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                arr_24 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2757837407U)))) ? (((/* implicit */unsigned long long int) 4215768743U)) : ((((_Bool)1) ? (14499662966595677353ULL) : (((/* implicit */unsigned long long int) 1934619872U))))));
                arr_25 [i_4] [i_6] [7U] [7U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(arr_20 [i_4] [i_6] [i_7]))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_21 [i_7] [(unsigned char)6] [i_4] [i_4])) : (arr_17 [i_4] [i_4] [i_6]))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))) + ((-(arr_11 [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551594ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41925)))))))));
            }
            var_18 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) -1556968523)) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_1 [i_4])))), (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) arr_1 [i_4]))))));
        }
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_23 [i_4])) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4])) : (arr_23 [i_4]))), (((((/* implicit */_Bool) arr_23 [i_4])) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4])))))))));
        arr_26 [i_4] = ((/* implicit */short) ((((/* implicit */int) var_13)) * (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        arr_31 [i_8] [i_8] = ((/* implicit */unsigned short) min((min((min((arr_8 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned int) (unsigned char)251)))), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_8])) >= (((/* implicit */int) arr_0 [i_8])))))));
        arr_32 [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (((-(16836653207537433167ULL))) == (((/* implicit */unsigned long long int) (~(3052667193015612501LL)))))))) | (max((arr_8 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned int) ((signed char) (signed char)-111)))))));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned short) (unsigned char)43))) : (((/* implicit */int) (unsigned short)12200))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1208127765U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)41925))))))))));
    var_21 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (unsigned int i_9 = 1; i_9 < 19; i_9 += 1) 
    {
        for (unsigned short i_10 = 4; i_10 < 19; i_10 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */_Bool) (short)21200)) ? (((((/* implicit */_Bool) arr_5 [i_10] [i_9] [i_9 + 1])) ? (arr_5 [i_10] [i_9 - 1] [i_9 - 1]) : (((/* implicit */unsigned long long int) arr_4 [i_9 - 1] [i_10 - 4])))) : (max((arr_5 [i_10] [6LL] [i_9 - 1]), (((/* implicit */unsigned long long int) arr_4 [i_9 + 1] [i_10 - 1]))))))));
                arr_38 [i_10] [i_10] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [(signed char)8] [i_10 - 2])) | (((/* implicit */int) (signed char)111))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)37)) ? (((unsigned int) (short)-3013)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(4716742547680644923ULL))))))))));
            }
        } 
    } 
}
