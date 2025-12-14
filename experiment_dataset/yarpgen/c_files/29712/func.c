/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29712
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
    var_19 = var_15;
    var_20 = ((/* implicit */int) ((((unsigned long long int) min((((/* implicit */int) var_7)), (var_10)))) * ((-((+(var_9)))))));
    var_21 -= ((/* implicit */long long int) var_4);
    var_22 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_15)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (var_10) : (((/* implicit */int) var_7))))) ? ((+(var_14))) : (((((-7822398157813203245LL) + (9223372036854775807LL))) << (((((-1660279158986495940LL) + (1660279158986495998LL))) - (58LL)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((6665920923165216210ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16859)))));
                    arr_8 [i_1] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0 - 1])) & (((/* implicit */int) arr_6 [i_1 - 4] [i_2]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [12U] [i_1 - 2] [i_0]))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        var_24 &= ((/* implicit */int) ((1775290138) >= (((/* implicit */int) (unsigned short)49173))));
        arr_9 [i_0 + 1] [5U] = ((/* implicit */short) max((2147483647), (70910357)));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12629510035387281673ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((signed char) 705054388U))))))));
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    {
                        arr_24 [i_3] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)108)) <= (((/* implicit */int) ((unsigned short) (unsigned short)18974)))));
                        arr_25 [i_4] = ((/* implicit */unsigned int) arr_18 [i_6]);
                        var_25 = ((/* implicit */unsigned short) min((max((arr_15 [i_5 + 2] [i_5 + 1]), (((/* implicit */unsigned long long int) -1LL)))), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_26 *= ((/* implicit */short) ((min((11208776626583122812ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)49169))))))) << (((((arr_10 [i_3] [i_3]) << (((((arr_16 [i_6] [i_6] [i_6]) ? (((/* implicit */unsigned long long int) var_14)) : (var_9))) - (17775085713243038781ULL))))) - (17576389116803678390ULL)))));
                        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) arr_21 [i_4] [i_5 + 1] [i_5 + 2] [i_5 + 1])))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned char) ((arr_15 [i_4] [i_4]) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_11 [(unsigned short)1] [i_4]), (((/* implicit */unsigned short) (signed char)-2))))) ? (((((var_10) + (2147483647))) >> (((var_14) + (671658360466512831LL))))) : (((/* implicit */int) var_3)))))));
        }
        for (signed char i_7 = 4; i_7 < 12; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 1; i_8 < 13; i_8 += 4) 
            {
                arr_31 [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_29 [(_Bool)1] [i_8] [i_3])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) / (var_9))) : (576460752303423487ULL))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_3] [i_7] [14U])))))));
                var_29 = ((/* implicit */unsigned short) arr_13 [i_3] [i_7 + 1]);
                arr_32 [i_3] [i_8] [i_8] [i_3] = ((/* implicit */short) min((min((11780823150544335399ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((/* implicit */int) (_Bool)0))))))), ((+(var_9)))));
            }
            arr_33 [i_3] [i_3] [i_7 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)3969)), (var_4)))) << (((((arr_30 [i_7] [i_7 + 1] [i_7]) & (((/* implicit */unsigned int) -101020806)))) - (2157576493U)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                arr_38 [i_3] [i_3] [i_3] [i_9] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_20 [i_7 - 4] [i_7 + 3] [i_7 + 2] [i_7 + 1]))))));
                var_30 += ((/* implicit */signed char) max((max(((+(((/* implicit */int) (signed char)80)))), (((/* implicit */int) max((var_8), (var_8)))))), (((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)2), (((/* implicit */unsigned short) var_7))))) && (((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_3])))))));
                arr_39 [i_3] [i_7] [i_3] [i_3] = ((max((arr_15 [i_7 + 2] [i_7]), (((/* implicit */unsigned long long int) var_7)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((6665920923165216214ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49173)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((arr_21 [i_9] [i_7] [i_7] [i_3]), (arr_22 [i_3]))))))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                arr_42 [i_10] [i_7 + 1] [0LL] &= ((/* implicit */signed char) ((((/* implicit */int) var_13)) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_7 - 2] [i_7 - 4] [i_7 + 3])))))));
                arr_43 [i_3] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_34 [i_10] [i_7] [3U])), (arr_20 [(unsigned char)6] [i_3] [i_3] [i_3])));
                var_31 -= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) max((arr_11 [i_7 + 1] [i_7 + 1]), ((unsigned short)49179))))));
            }
        }
        arr_44 [i_3] [i_3] = ((/* implicit */unsigned long long int) var_13);
        var_32 *= ((/* implicit */unsigned short) (+(var_0)));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_47 [i_11] = ((/* implicit */_Bool) (+(6665920923165216210ULL)));
        arr_48 [i_11] = (+(16741944745266374883ULL));
        arr_49 [i_11] = ((/* implicit */_Bool) max((((/* implicit */int) min((((signed char) (signed char)-111)), (((/* implicit */signed char) (_Bool)0))))), (max((((((/* implicit */int) (signed char)125)) ^ (((/* implicit */int) (signed char)94)))), (((/* implicit */int) arr_35 [i_11]))))));
        var_33 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (max((((7479841916210195335ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) var_4))))));
        arr_50 [i_11] [i_11] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_15)), (var_10)))), (arr_28 [i_11] [i_11] [i_11]))) * (((/* implicit */unsigned long long int) ((((arr_13 [i_11] [i_11]) > (var_0))) ? (((/* implicit */int) max((var_7), ((_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_11] [i_11] [i_11]))))))))));
    }
}
