/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21770
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [17U] [i_1] [i_1 - 2] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)0))));
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (827852059)))) ? (((((/* implicit */_Bool) -827852055)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [5] [i_0]))))) : (((/* implicit */long long int) (-(-827852065)))))) * (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) min((arr_2 [i_0] [i_1]), (var_4)))), (var_3))))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) -827852060))));
        var_15 = ((/* implicit */unsigned char) (~(((((_Bool) arr_3 [i_2] [i_2] [i_2])) ? (arr_7 [i_2] [(signed char)9]) : ((-(((/* implicit */int) arr_6 [i_2] [i_2]))))))));
    }
    for (int i_3 = 1; i_3 < 14; i_3 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) arr_11 [i_3]);
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((unsigned char) (unsigned char)200))), ((unsigned short)60289)));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (long long int i_5 = 2; i_5 < 15; i_5 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_4 [i_5] [i_5] [i_5 - 2]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        arr_23 [i_3 - 1] [i_3 - 1] [i_5] [7LL] [i_3] = ((((/* implicit */long long int) arr_11 [i_5])) != (arr_15 [i_3] [i_3] [i_3]));
                        arr_24 [i_4] [i_4] [(unsigned char)14] [i_4] |= ((/* implicit */unsigned int) ((((((/* implicit */long long int) 827852059)) | (-6686226397212527348LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)3)))));
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_6] [i_5 - 1] [i_5])) || (((/* implicit */_Bool) arr_15 [i_5 - 1] [i_4] [i_5])))))));
                    }
                    for (signed char i_7 = 2; i_7 < 15; i_7 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((18323471376166168823ULL) + (((/* implicit */unsigned long long int) -3679654996278301069LL)))))));
                        var_20 = ((/* implicit */short) max((var_20), (var_1)));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)65521))))));
                        arr_28 [i_3] [i_5] [i_3] = ((/* implicit */short) (+(min((((((/* implicit */_Bool) 827852041)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3 + 3] [i_4] [i_7]))) : (4237282214U))), (((((/* implicit */_Bool) (unsigned char)193)) ? (4237282214U) : (0U)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) << (((((((/* implicit */_Bool) 2765049216968171459LL)) ? (var_5) : (((/* implicit */long long int) arr_11 [i_8])))) - (2932455108511823410LL)))));
                        var_23 = ((arr_14 [i_3]) & (((/* implicit */unsigned long long int) (~(var_6)))));
                        var_24 ^= ((((/* implicit */int) var_12)) - (((var_11) - (-2111660301))));
                    }
                    var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_20 [i_3] [i_4] [i_4] [i_5 - 2])) ? (-2765049216968171450LL) : (((/* implicit */long long int) arr_9 [i_3] [i_3]))))))), (var_2)));
                }
            } 
        } 
        var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(0ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_3 - 1] [i_3] [(signed char)15] [i_3])) ^ (((/* implicit */int) var_3)))))))) ? (((/* implicit */unsigned long long int) min((var_6), (var_6)))) : (min((((((/* implicit */_Bool) 3959169662U)) ? (var_2) : (((/* implicit */unsigned long long int) 827852059)))), (((/* implicit */unsigned long long int) arr_4 [i_3 - 1] [i_3 - 1] [(short)14]))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            for (unsigned char i_11 = 1; i_11 < 11; i_11 += 4) 
            {
                {
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (-(965254383))))));
                    var_28 = ((/* implicit */unsigned int) ((unsigned short) var_4));
                }
            } 
        } 
        var_29 = -827852060;
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-28)))))));
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_9] [i_9] [i_9])) * (((/* implicit */int) (unsigned char)67))));
        arr_41 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_9] [i_9])) ? (arr_32 [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6371)))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)7)) ? (624710884) : (((/* implicit */int) (unsigned char)67))));
        var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2226))) : (((((/* implicit */_Bool) (unsigned char)69)) ? (1822117592186131382LL) : (-6703345505478385473LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67))) : (4237282214U));
    }
    var_34 = ((/* implicit */unsigned int) var_4);
}
