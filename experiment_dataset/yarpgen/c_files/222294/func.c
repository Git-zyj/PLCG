/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222294
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
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_4 [i_0 + 1] [i_0 - 3] [i_0 - 2]), ((unsigned short)55441)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_2] [i_2 - 3] [i_0 - 3]))));
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((7319394065715535431ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_3 + 1])))));
                        arr_13 [i_0 - 4] [i_1] [i_2 + 1] [i_3 + 1] = ((/* implicit */long long int) var_3);
                    }
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)52409)))) ? (((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)55437))))) : ((-(var_8))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))) : (var_2))))))));
    /* LoopSeq 3 */
    for (short i_4 = 2; i_4 < 22; i_4 += 3) /* same iter space */
    {
        arr_16 [i_4] [i_4] = ((/* implicit */short) max(((-(arr_15 [i_4 + 2] [i_4 + 2]))), (((arr_15 [i_4 - 2] [i_4 - 1]) % (arr_15 [i_4 + 1] [i_4 - 1])))));
        arr_17 [i_4] = ((/* implicit */short) (-(arr_15 [i_4] [i_4])));
    }
    for (short i_5 = 2; i_5 < 22; i_5 += 3) /* same iter space */
    {
        arr_20 [24ULL] = (unsigned short)35149;
        arr_21 [i_5] [i_5] = ((/* implicit */_Bool) (signed char)106);
        arr_22 [i_5] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((var_1), (var_3)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)10094))))) >= (((((/* implicit */_Bool) 8436496470070887036ULL)) ? (((/* implicit */unsigned long long int) 2305843009213693952LL)) : (arr_15 [i_5] [i_5])))))) : (var_3)));
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned char) ((11459040488294802934ULL) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35399)) && (((/* implicit */_Bool) (unsigned short)10094)))))));
    }
    for (short i_6 = 2; i_6 < 22; i_6 += 3) /* same iter space */
    {
        arr_27 [(signed char)20] = ((/* implicit */int) arr_26 [i_6 + 3] [i_6 - 1]);
        arr_28 [(signed char)16] = ((/* implicit */int) (-(var_10)));
        arr_29 [24U] = ((/* implicit */unsigned int) -4);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 3) 
    {
        for (short i_8 = 2; i_8 < 11; i_8 += 1) 
        {
            {
                arr_36 [i_7] [i_7 - 1] [i_8 - 2] = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55441))) >= (arr_15 [i_7] [i_8 - 2])))));
                arr_37 [6] [i_7 + 1] [6] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(var_1)))) ? (arr_15 [i_8 - 2] [i_8 - 2]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)17900))))))), (((/* implicit */unsigned long long int) arr_35 [i_7 - 1] [i_7 + 1] [0LL]))));
                arr_38 [(signed char)4] &= ((/* implicit */_Bool) ((unsigned long long int) ((signed char) (unsigned short)10090)));
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        for (short i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            {
                                arr_47 [i_7] [i_8] [i_9 + 2] [i_10] [i_10] = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) arr_10 [i_7 - 1] [i_7 + 1] [i_7 - 1])))));
                                arr_48 [i_7 + 1] [i_7] [i_9] [i_10] [i_11] = ((/* implicit */long long int) arr_44 [i_7] [i_7] [i_8] [i_10] [i_11] [i_10] [i_10]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
