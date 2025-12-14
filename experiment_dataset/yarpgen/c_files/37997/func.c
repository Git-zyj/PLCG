/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37997
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
    var_20 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) var_9);
        var_22 = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_23 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) - (((((/* implicit */_Bool) var_16)) ? (arr_2 [i_1]) : (arr_2 [i_0]))));
                    var_24 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_2 + 2]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (7583884483737267364LL))), (((/* implicit */long long int) arr_9 [i_3] [i_3])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_4 = 1; i_4 < 23; i_4 += 3) 
        {
            var_26 = ((/* implicit */long long int) arr_13 [i_3] [i_3]);
            var_27 = ((/* implicit */unsigned long long int) arr_11 [17] [i_3]);
            var_28 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned char)6))))));
        }
        for (unsigned short i_5 = 2; i_5 < 23; i_5 += 4) 
        {
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (-((~(((-1) & (((/* implicit */int) var_2)))))))))));
            var_30 = ((/* implicit */long long int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) 7583884483737267364LL)))))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_13 [i_3] [i_6]), (((/* implicit */unsigned long long int) var_8))))) ? ((~(((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_6] [i_6]))) : (9249854929338340547ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6] [i_6])) ? (arr_10 [i_3] [i_6]) : (((/* implicit */unsigned int) var_6)))))))))));
            /* LoopSeq 2 */
            for (long long int i_7 = 1; i_7 < 21; i_7 += 2) 
            {
                var_32 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((var_10) ^ (((/* implicit */unsigned long long int) var_6)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1023LL)) ? (7583884483737267389LL) : (((/* implicit */long long int) ((/* implicit */int) (short)6))))))))), (min((((((/* implicit */_Bool) 835578480)) ? (-475784329805276224LL) : (((/* implicit */long long int) 835578464)))), (((/* implicit */long long int) arr_18 [i_3]))))));
                var_33 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)100))))) : (((/* implicit */int) (unsigned char)252)))));
                var_34 = ((/* implicit */int) arr_9 [i_3] [i_6]);
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)23)), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((var_4), (((/* implicit */unsigned long long int) (unsigned char)4))))))) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4)))))));
            }
            for (unsigned int i_8 = 3; i_8 < 24; i_8 += 1) 
            {
                var_36 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -835578480)) ? (((((/* implicit */_Bool) arr_21 [i_3] [i_6] [i_8] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_8 - 2] [i_6] [i_6] [i_3])) > (((/* implicit */int) arr_16 [(unsigned short)3] [(unsigned short)3] [i_8])))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))));
                var_37 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1832894668)) ? (max((((((/* implicit */int) arr_23 [i_3] [i_6] [(short)22] [i_3])) * (((/* implicit */int) (short)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))) : (((/* implicit */int) max((arr_19 [i_3]), (arr_19 [i_3]))))));
                var_38 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((arr_24 [i_6] [i_8 + 1] [i_8 - 1]), (arr_24 [i_6] [i_8 - 1] [i_8 - 1])))), (1807397918271218289ULL)));
                var_39 |= ((/* implicit */signed char) max((((((((/* implicit */long long int) ((/* implicit */int) arr_20 [(unsigned char)24] [(unsigned char)6] [i_8 - 1]))) % (var_19))) / (((/* implicit */long long int) ((13U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125)))))))), (((/* implicit */long long int) (~(min((var_17), (((/* implicit */unsigned int) (signed char)111)))))))));
            }
        }
        for (int i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            var_40 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_11 [i_3] [i_9])))) + (2147483647))) << ((((((~(((/* implicit */int) arr_20 [23LL] [i_9] [i_9])))) + (11634))) - (21)))));
            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_11 [i_3] [1LL]), (((/* implicit */unsigned short) var_2))))) || (((/* implicit */_Bool) max(((unsigned short)37980), (arr_11 [i_3] [i_9]))))));
            var_42 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 5108603775028479661ULL)) || (((/* implicit */_Bool) -7478667956668033234LL))));
            var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_9] [i_3]))));
        }
    }
}
