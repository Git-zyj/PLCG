/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35487
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
    var_12 |= ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) arr_2 [(short)7] [i_1]);
                var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1 + 1] [i_0])) % (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [10LL])) && (((/* implicit */_Bool) var_11)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (int i_4 = 2; i_4 < 17; i_4 += 1) 
            {
                {
                    arr_13 [i_2] [i_3] [i_4 - 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_3]))));
                    var_15 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_3] [i_4 - 2]))))) + (((((/* implicit */_Bool) arr_3 [i_2] [(short)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_9 [i_2] [14] [i_4])))));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (signed char)120))));
                    var_17 = ((/* implicit */unsigned char) ((_Bool) arr_4 [i_2] [i_3] [i_4 + 1]));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            {
                var_18 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_5])) >> (((arr_17 [i_6]) + (774758448506581718LL)))))), ((+(((((/* implicit */_Bool) arr_6 [i_6])) ? (((/* implicit */long long int) arr_4 [i_5] [i_5] [(_Bool)1])) : (arr_17 [i_5])))))));
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                {
                    arr_22 [i_5] [i_6] [i_7] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (-1945893643) : (((/* implicit */int) arr_1 [i_7]))))))) ? (max(((+(((/* implicit */int) (signed char)55)))), (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_7])) - (19))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_6])), (arr_5 [i_7]))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_7] [(unsigned short)1] [i_5])) >= (((((arr_14 [(unsigned char)4]) && (((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) arr_12 [i_5] [(short)1] [(short)1])) ? (798993969) : (((/* implicit */int) arr_12 [i_7] [i_6] [i_5])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) arr_2 [i_5] [i_6]))))))));
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!((((!(((/* implicit */_Bool) (unsigned short)28748)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1945893643)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (0U)))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        for (long long int i_9 = 2; i_9 < 12; i_9 += 3) 
                        {
                            {
                                arr_28 [i_9 - 1] [i_8] [i_7] [(short)9] [i_5] = ((/* implicit */unsigned short) arr_10 [0] [i_5] [i_5]);
                                var_21 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_7]))));
                                arr_29 [i_5] [(unsigned char)8] [7LL] [2ULL] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) arr_26 [i_9 + 1] [i_9 + 1] [i_9 - 2])) : (((/* implicit */int) ((arr_24 [(_Bool)1] [1LL] [i_5] [i_5] [i_5]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
                {
                    arr_34 [i_5] [i_5] [i_10] [(unsigned char)3] |= (((!(((/* implicit */_Bool) arr_5 [i_10])))) ? (((/* implicit */int) ((short) arr_8 [i_5]))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((short) arr_9 [6ULL] [i_6] [11LL]))) : (((/* implicit */int) arr_20 [i_5] [i_10] [i_5] [(unsigned short)14])))));
                    var_22 -= ((/* implicit */unsigned char) (((~(((((/* implicit */int) var_8)) >> (((/* implicit */int) arr_14 [i_5])))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    var_23 = arr_18 [i_10] [i_6] [i_5];
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (var_5))))) == ((+(var_4)))))) != (((/* implicit */int) ((short) ((int) (signed char)56))))));
}
