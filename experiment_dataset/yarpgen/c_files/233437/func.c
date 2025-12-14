/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233437
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
    var_14 &= ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 += ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned char)110)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)237))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 1; i_3 < 7; i_3 += 1) /* same iter space */
                    {
                        var_17 = (!(((arr_6 [i_3] [i_3] [i_2] [i_3 + 3]) != (arr_6 [i_3] [(short)7] [i_3] [i_3 + 2]))));
                        arr_10 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (+(var_9)));
                    }
                    for (signed char i_4 = 1; i_4 < 7; i_4 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (signed char)3)) + (((/* implicit */int) (short)-3714))))))) ? (arr_8 [i_1]) : (((arr_4 [i_0] [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)52)) && (((/* implicit */_Bool) (short)3729)))))) : (4293918705U)))));
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((long long int) var_2)))));
                    }
                    for (signed char i_5 = 1; i_5 < 7; i_5 += 1) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */short) arr_4 [(signed char)6] [i_2] [i_2]);
                        var_21 = ((signed char) min((((/* implicit */long long int) arr_5 [i_5 + 1] [i_5 - 1] [i_1])), (131606671822371949LL)));
                        var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])))) ? (((/* implicit */long long int) max((-1), (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) -2009324657)) ? (-3061149046739068586LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_2] [i_5 - 1] [(signed char)2] [i_2] [(signed char)6])) <= (arr_2 [i_5 + 1] [i_2] [i_5 + 3])))))));
                    }
                    for (signed char i_6 = 1; i_6 < 7; i_6 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((65024), (((/* implicit */int) ((short) (short)25059)))))), ((~(arr_8 [i_6 + 2])))));
                        var_24 &= ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */short) (signed char)102)), ((short)-3730)))), ((((!((_Bool)1))) ? (((/* implicit */int) ((signed char) (signed char)-60))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_15 [i_2] [i_1]))))))));
                    }
                    var_25 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102))) : (4131080549U)))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_7 = 1; i_7 < 8; i_7 += 2) /* same iter space */
        {
            var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_12)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_13 [i_0] [i_0] [6LL] [(signed char)6])))) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (signed char i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                for (signed char i_9 = 3; i_9 < 8; i_9 += 3) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) (signed char)96);
                        arr_26 [i_7] = ((/* implicit */signed char) var_3);
                    }
                } 
            } 
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-57291153) : (((/* implicit */int) arr_16 [i_0] [i_7] [i_0] [i_0] [i_0] [i_7 + 1]))));
            var_29 *= ((/* implicit */signed char) (+(var_9)));
        }
        for (short i_10 = 1; i_10 < 8; i_10 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) -2009324686);
            var_31 = ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) arr_19 [i_10] [(signed char)3])) ? (-1) : (((/* implicit */int) var_2)))), (((/* implicit */int) min(((short)-3732), (((/* implicit */short) (signed char)92)))))))));
        }
        for (short i_11 = 1; i_11 < 8; i_11 += 2) /* same iter space */
        {
            var_32 = max((8628328208182202849LL), (((/* implicit */long long int) (signed char)27)));
            arr_32 [i_0] [i_11] = min((((((/* implicit */_Bool) (signed char)-88)) ? (131606671822371949LL) : (((/* implicit */long long int) -2009729917)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_11 - 1] [i_11 + 2] [i_11]))))));
        }
    }
}
