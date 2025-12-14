/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4871
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
    var_10 = ((/* implicit */_Bool) max((var_9), ((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-115)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
        {
            var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) min((0U), (((/* implicit */unsigned int) (signed char)0)))))));
            var_12 *= ((/* implicit */short) ((unsigned char) ((signed char) ((signed char) (unsigned short)50643))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 + 1] [i_3 + 2])) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) var_7))));
                        arr_11 [(signed char)16] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) (((~(((/* implicit */int) min(((signed char)-3), ((signed char)-1)))))) == (((/* implicit */int) (signed char)45))));
                    }
                } 
            } 
            var_14 = max((((/* implicit */unsigned int) (unsigned short)50664)), (2903135990U));
            var_15 ^= ((/* implicit */int) arr_2 [i_0]);
        }
        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */short) var_0);
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((1740477445718620525ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))), (((/* implicit */unsigned long long int) (-(min((var_6), (((/* implicit */int) arr_6 [i_0]))))))))))));
            arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (signed char)-7)) ? (2788629050U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
        }
        var_18 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-13))))) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (unsigned short)65507))))));
    }
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                {
                    arr_27 [i_7] = ((/* implicit */unsigned char) (((-(max((((/* implicit */unsigned long long int) (signed char)0)), (14440542772832126989ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    var_19 -= ((/* implicit */unsigned long long int) var_2);
                    arr_28 [i_7] [i_6] [i_7] = ((/* implicit */signed char) (unsigned short)30);
                    arr_29 [i_7] [i_6] [(signed char)2] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_5]))) / (((unsigned int) var_7))))) ? (3694415616U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14905)))));
                }
            } 
        } 
        arr_30 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_5]) ^ (((/* implicit */long long int) arr_17 [i_5]))))) ? (arr_8 [(unsigned char)19] [(unsigned char)19]) : (((((/* implicit */_Bool) arr_10 [i_5] [i_5])) ? (((/* implicit */int) arr_10 [i_5] [i_5])) : (((/* implicit */int) var_7))))));
        arr_31 [i_5] [i_5] &= ((/* implicit */signed char) 2133612266U);
    }
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_6)), (4006201300877424639ULL)));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */int) var_8)), (var_9))) : (((/* implicit */int) min(((signed char)43), (((/* implicit */signed char) (_Bool)1)))))));
}
