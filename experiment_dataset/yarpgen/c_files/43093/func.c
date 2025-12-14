/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43093
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_0])), ((unsigned char)255)))) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((long long int) var_8))) ? (((((/* implicit */_Bool) (unsigned short)14354)) ? (((/* implicit */int) arr_1 [i_0])) : (0))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]))))) : ((~(((/* implicit */int) var_1))))));
        arr_4 [i_0] [i_0] = ((unsigned int) (+(((/* implicit */int) var_1))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_11);
            var_17 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)14))))), (2094305627U)));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))))) ? (2604011815490124230LL) : (((/* implicit */long long int) var_13))));
        }
    }
    for (signed char i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)237)));
        arr_14 [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_13)), (((unsigned long long int) ((5) + (508018117))))));
        var_20 ^= ((/* implicit */unsigned char) (~(((unsigned int) (signed char)6))));
    }
    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                {
                    var_21 ^= ((/* implicit */int) max((((var_12) ? (arr_18 [i_3]) : (((/* implicit */unsigned int) -7)))), (max((((/* implicit */unsigned int) (unsigned char)180)), (arr_18 [i_5])))));
                    arr_23 [i_5] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ ((~(((/* implicit */int) (unsigned char)188))))));
                    arr_24 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69))) : (arr_18 [i_3])));
                    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_3])), (((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_19 [i_3] [i_4] [i_5]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 3) 
        {
            arr_28 [i_6] [i_6 + 1] = ((/* implicit */unsigned char) var_15);
            arr_29 [i_6] = ((/* implicit */long long int) arr_26 [i_3] [i_3] [i_3]);
        }
        var_23 = ((/* implicit */unsigned char) min((var_23), ((unsigned char)216)));
        arr_30 [i_3] = ((/* implicit */long long int) min(((~(arr_6 [i_3] [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) -1))) < (max((9221120237041090560LL), (((/* implicit */long long int) (unsigned char)76)))))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (_Bool)1))));
    }
    for (signed char i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
    {
        arr_35 [i_7] = ((/* implicit */_Bool) ((short) (+(((/* implicit */int) ((signed char) (short)-1))))));
        var_25 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)44071)) ? (((var_12) ? (arr_31 [i_7]) : (((/* implicit */int) arr_13 [i_7] [i_7])))) : (var_15))), (((/* implicit */int) ((1404618512) >= (-2030589972))))));
    }
    var_26 = ((/* implicit */short) max((((max((var_15), (((/* implicit */int) var_7)))) + (var_13))), (((/* implicit */int) (unsigned char)187))));
    /* LoopSeq 2 */
    for (unsigned int i_8 = 2; i_8 < 9; i_8 += 1) 
    {
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_0))));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            arr_41 [i_8 - 1] [i_8 - 1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_8 + 1]))) | (((1295628098U) | (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_40 [i_9] [i_8 - 2]), (arr_40 [i_8] [i_8 - 1])))) * (((/* implicit */int) arr_40 [i_8 - 2] [i_8 + 1]))));
        }
    }
    for (int i_10 = 1; i_10 < 15; i_10 += 3) 
    {
        var_29 = ((/* implicit */short) ((((long long int) var_6)) >> (((((unsigned long long int) arr_43 [i_10 + 2])) - (18446744073709521785ULL)))));
        var_30 ^= ((/* implicit */short) var_14);
    }
}
