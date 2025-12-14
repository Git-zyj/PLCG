/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237281
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
    var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)0)) : ((+(((/* implicit */int) (unsigned short)65510))))));
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))))))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) min(((unsigned char)81), ((unsigned char)2)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (unsigned char)206)), (max((var_7), (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)56978)) / (((/* implicit */int) var_3)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((var_16) & (((/* implicit */int) (unsigned short)0)))) | (arr_7 [i_1] [i_2] [3ULL]))))));
                                var_22 |= ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 66060288)) ? (((/* implicit */int) arr_1 [i_0])) : (var_16))), (((/* implicit */int) (signed char)117))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_3] [i_4 + 2] [i_4] [i_4 + 2] [i_4 + 3]))) % (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14)))));
                                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0] [i_4] [i_2] [i_2] [i_4]))))), (var_5))))));
                                var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_3] [i_3]))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0])))));
                    var_26 = ((((/* implicit */_Bool) (((~(var_6))) | (((/* implicit */unsigned long long int) 137438937088LL))))) ? (((var_16) & (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_16) : (var_16))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)31692)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (401101543U))))));
                }
            } 
        } 
        var_27 = var_10;
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)(-127 - 1))), (arr_8 [i_0] [(unsigned char)22] [i_0] [i_0])))), (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)81))))))))) : (var_6)));
    }
    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */int) ((max((var_5), (((/* implicit */long long int) (-(((/* implicit */int) var_11))))))) == ((-(((long long int) (short)-1))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_6 = 3; i_6 < 22; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                for (short i_8 = 2; i_8 < 20; i_8 += 2) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)157)) ? (1103041179663128919ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((var_0) + (2126653180238904991LL))))))));
                        var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) 5537202633468295097LL))));
                        var_32 = 18446744073709551615ULL;
                        var_33 = ((/* implicit */int) var_3);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_9 = 1; i_9 < 22; i_9 += 4) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-3012)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)30505))));
                var_35 = arr_23 [i_5] [i_5] [i_6] [i_5] [i_6] [i_5];
                var_36 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_24 [i_5] [i_6] [(unsigned char)13] [i_5] [i_9])))) ? (((((/* implicit */_Bool) var_17)) ? (arr_5 [i_5] [i_6] [i_9 + 1] [i_5]) : (((/* implicit */int) var_17)))) : (((/* implicit */int) arr_13 [(unsigned char)12] [i_5] [i_6] [i_5] [i_5]))));
            }
            for (unsigned char i_10 = 1; i_10 < 22; i_10 += 4) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)14336)) ? (((/* implicit */int) arr_23 [i_5] [i_6] [i_6] [(signed char)2] [i_6] [i_5])) : (((/* implicit */int) var_4)))) != (((/* implicit */int) var_4))));
                var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_6] [i_5] [i_5] [i_5]))));
                var_39 += ((/* implicit */signed char) (short)3007);
            }
            for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                var_40 = ((/* implicit */unsigned short) var_1);
                var_41 = ((/* implicit */signed char) ((unsigned char) (short)-20898));
            }
            var_42 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_6 - 3]))));
        }
        /* vectorizable */
        for (signed char i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_13 = 1; i_13 < 21; i_13 += 2) 
            {
                for (unsigned char i_14 = 3; i_14 < 19; i_14 += 2) 
                {
                    {
                        var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_14 - 1] [i_13 + 2] [i_13] [i_14 - 1] [i_13]))));
                        var_44 = var_12;
                        var_45 += ((/* implicit */signed char) (-(var_8)));
                    }
                } 
            } 
            var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
        }
    }
}
