/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42916
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
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((min((arr_3 [i_0 - 2] [i_0 - 2]), (((/* implicit */long long int) (~(arr_2 [5])))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) > (((/* implicit */int) arr_0 [i_0 + 1])))))));
        var_11 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) arr_2 [i_0 - 2])) : (70368744173568LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (long long int i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 3])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)140))))))))) < (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))) - (arr_3 [i_0 - 1] [i_3 - 1])))));
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3])) == (max((min((((/* implicit */int) arr_14 [i_0 + 1])), (19))), ((+(((/* implicit */int) (unsigned char)140))))))));
                        var_14 &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-20911)) ? (((((-70368744173569LL) + (9223372036854775807LL))) >> (((314597405) - (314597346))))) : (max((-1007909146612233419LL), (((/* implicit */long long int) (_Bool)1)))))), (max((((arr_8 [i_0 + 1]) ? (9223372036854775795LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))))), (((/* implicit */long long int) min((arr_6 [i_2]), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0])))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_4]) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_1 [i_4]))))) ? (((/* implicit */long long int) 0U)) : (((arr_15 [i_4]) - (arr_15 [i_4])))));
        var_16 = ((/* implicit */unsigned short) arr_7 [i_4] [i_4]);
    }
    for (signed char i_5 = 2; i_5 < 11; i_5 += 1) 
    {
        arr_21 [i_5] [i_5 + 1] = ((/* implicit */int) (-(((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) & (arr_15 [i_5]))) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5 + 1])))))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            var_17 = ((/* implicit */int) ((max((((((/* implicit */_Bool) -515638158)) ? (-9223372036854775795LL) : (9223372036854775785LL))), (-9223372036854775793LL))) + (((/* implicit */long long int) max((-1181223739), (((/* implicit */int) arr_8 [i_5 - 2])))))));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_30 [(short)11] [i_6] [(short)11] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-7583981424399897356LL)))) ? ((+(arr_3 [i_5 + 2] [i_5 + 1]))) : (min((arr_3 [i_5 - 1] [i_5 - 2]), (((/* implicit */long long int) arr_16 [i_5 + 1]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            arr_34 [i_5 + 2] [i_6] [(short)1] [(short)1] [i_9] [6LL] [i_6] = ((/* implicit */signed char) arr_18 [i_7]);
                            arr_35 [i_6] [i_6] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((((_Bool)1) ? (8305929307187889551LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))), (((/* implicit */long long int) (!((_Bool)1))))))) && (((/* implicit */_Bool) arr_16 [i_5]))));
                            arr_36 [i_5 + 1] [i_5 + 1] [i_7] [i_8] [i_9] [0] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20911)) ? (((((/* implicit */_Bool) arr_13 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (arr_20 [i_5 - 2] [7LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_8] [i_9] [6]))))) : (((/* implicit */unsigned long long int) ((arr_23 [i_5 - 1] [i_5 + 2]) ? (((/* implicit */int) arr_23 [i_5 - 1] [i_5 + 2])) : (((/* implicit */int) arr_23 [i_5 - 1] [i_5 + 2])))))));
                            arr_37 [11LL] [i_7] [i_8] [i_8] |= ((/* implicit */unsigned int) arr_23 [i_5] [i_5 - 1]);
                        }
                    }
                } 
            } 
            arr_38 [i_6] = ((/* implicit */_Bool) (((_Bool)0) ? (-9223372036854775786LL) : (((/* implicit */long long int) -1))));
        }
    }
    var_18 = ((/* implicit */unsigned long long int) var_6);
    var_19 = ((/* implicit */long long int) (((_Bool)1) ? (((((3672766635216577985ULL) << (((var_9) + (2000269872))))) << (((var_4) + (420117660))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
}
