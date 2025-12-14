/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51754
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
    var_13 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) arr_3 [i_0]);
            var_14 = (+(arr_2 [i_0]));
            arr_9 [i_1] = ((/* implicit */signed char) 8687615788487306159ULL);
        }
        for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_18 [i_0] [i_2 + 2] [i_2] [i_4] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_7 [(short)4] [i_2])))) & (((/* implicit */int) arr_6 [i_2]))));
                        var_15 = ((/* implicit */long long int) arr_0 [i_0]);
                        var_16 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_4] [i_4]))));
                    }
                } 
            } 
            arr_19 [i_2] [i_2] = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0]);
        }
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_6]);
                    var_19 = ((/* implicit */unsigned short) arr_22 [i_6]);
                }
            } 
        } 
        arr_25 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)114)))) || (((/* implicit */_Bool) 1152921504606846975LL))));
        arr_26 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned short)58903)))) ? (9022003513345554550ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0]))))))));
    }
    for (short i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        arr_30 [(unsigned short)0] |= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)58885))));
        arr_31 [i_7] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_29 [i_7]))))));
    }
    for (signed char i_8 = 1; i_8 < 23; i_8 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) max((arr_32 [i_8 + 1]), (arr_32 [i_8 + 1])))) : (((/* implicit */int) arr_32 [i_8 - 1]))));
        arr_34 [(unsigned short)18] [(unsigned short)18] &= ((/* implicit */signed char) arr_32 [i_8]);
        var_21 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
        var_22 = ((/* implicit */long long int) arr_32 [i_8]);
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                {
                    arr_40 [i_9] [i_9] [i_10] = ((/* implicit */unsigned long long int) arr_38 [i_8] [(short)1] [i_8] [i_9]);
                    var_23 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_9] [i_10] [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_10]))) : (min((((/* implicit */long long int) (unsigned short)16384)), (-8388844446211858352LL)))))));
                    var_24 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_35 [i_8])), ((-(((((/* implicit */_Bool) arr_35 [i_9])) ? (8687615788487306153ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_8 - 1])))))))));
                }
            } 
        } 
    }
    for (long long int i_11 = 3; i_11 < 10; i_11 += 1) 
    {
        arr_43 [i_11] = ((((/* implicit */_Bool) arr_10 [i_11])) ? (min((((/* implicit */long long int) arr_20 [i_11 - 2] [i_11] [i_11 - 2])), (arr_42 [(unsigned short)0] [i_11 - 3]))) : (-8388844446211858352LL));
        arr_44 [4LL] [4LL] |= ((/* implicit */long long int) ((arr_37 [i_11]) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned short)0), (arr_41 [(unsigned short)6])))))))));
        var_25 *= ((/* implicit */short) 9223372036854775793LL);
        var_26 = ((/* implicit */signed char) (~(((/* implicit */int) arr_38 [i_11] [i_11] [i_11] [i_11]))));
    }
    var_27 += ((/* implicit */signed char) var_1);
}
