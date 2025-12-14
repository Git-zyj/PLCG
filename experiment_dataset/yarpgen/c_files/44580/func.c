/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44580
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) 3177928837U);
                arr_5 [i_1] = (-(((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (3177928851U) : (((/* implicit */unsigned int) var_10)))));
                var_18 = 9223372036854775807LL;
                var_19 = ((/* implicit */unsigned int) (unsigned short)42807);
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_8 [2U] [i_1] [i_0] = ((/* implicit */_Bool) (-(var_13)));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_0] [i_1])));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_20 *= ((/* implicit */signed char) var_7);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [(unsigned char)4] [i_0])) || (((var_0) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 8160602229360623473LL)) ? (((/* implicit */unsigned int) -2147483618)) : (1117038444U))))))));
                                var_22 = ((/* implicit */unsigned long long int) (-(-4989146550413977938LL)));
                                var_23 = (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_1] [i_1 - 3])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1 - 3])))));
                                var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_0] [i_0] [i_3] [i_4] [i_5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [(signed char)24] [i_0] [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) 1117038443U)) ? (((/* implicit */unsigned long long int) var_2)) : (var_1)))));
                                var_25 *= ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                    var_26 *= ((/* implicit */unsigned int) var_15);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                {
                    var_27 = ((/* implicit */long long int) (((((~(((/* implicit */int) var_11)))) != (((/* implicit */int) (signed char)-1)))) ? (max((((((/* implicit */_Bool) 54084661)) ? (((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6] [24ULL] [i_6])) : (((/* implicit */int) (signed char)-32)))), (((/* implicit */int) arr_7 [i_6] [i_6] [i_6])))) : (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45499))) == (arr_20 [i_8] [i_7])))) + (((((/* implicit */_Bool) arr_4 [i_6] [i_6])) ? (((/* implicit */int) arr_18 [i_6] [i_7])) : (((/* implicit */int) var_5))))))));
                    var_28 ^= ((/* implicit */long long int) var_5);
                    var_29 = ((/* implicit */unsigned int) ((var_16) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((var_16) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22721)))))))))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (unsigned char)8))));
}
