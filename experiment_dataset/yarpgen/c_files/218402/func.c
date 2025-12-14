/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218402
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
    var_20 = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned short)22513)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (signed char)-98)))) : (((/* implicit */int) var_1)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)73)) && (((/* implicit */_Bool) var_2))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_1] [i_1 + 1]))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_11 [i_3] [i_2] [i_3] [i_2] = ((/* implicit */int) -9223372036854775787LL);
                arr_12 [i_0] [i_0] = ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)23403)));
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17U)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21797)))));
            }
            for (int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                arr_16 [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_2] [i_4] [i_4]))) ^ (var_9));
                arr_17 [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) var_7);
                arr_18 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) (signed char)-100)));
            }
            arr_19 [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) == (arr_14 [i_0] [i_2])));
            arr_20 [i_2] = ((/* implicit */signed char) ((-1474821580) - (((/* implicit */int) var_17))));
        }
        arr_21 [i_0] [i_0] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1))))) / (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), (var_3))))) : (((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (11872886661107962897ULL))))));
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        arr_24 [i_5] = ((/* implicit */unsigned long long int) (signed char)103);
        arr_25 [i_5] = ((/* implicit */int) arr_22 [i_5]);
        arr_26 [i_5] = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_23 [i_5])))) / (min((-1200410632650175092LL), (((/* implicit */long long int) (unsigned short)46171)))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_30 [i_6] = (((_Bool)0) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((_Bool) (unsigned char)255))));
        arr_31 [i_6] [6LL] = ((/* implicit */unsigned short) 12U);
    }
    var_21 = ((((/* implicit */int) var_12)) == (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)97))))));
}
