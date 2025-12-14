/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197889
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
    for (short i_0 = 1; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_11 -= min((max((((/* implicit */unsigned long long int) ((short) -772374675877660933LL))), (max((((/* implicit */unsigned long long int) arr_0 [9U] [i_0])), (34359738366ULL))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [(unsigned short)4] [4] [i_1])) : (var_6)))))));
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_3 - 1] [i_2])), ((~(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_1 [(signed char)12] [10U]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))) ^ (((2305843009213693951ULL) >> (((-8547397705324873129LL) + (8547397705324873186LL)))))))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (~(1096764489U))))));
    }
    for (short i_4 = 1; i_4 < 22; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 3) 
        {
            arr_12 [i_5] [i_5 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_5] [i_5 - 1] [i_5])), (arr_8 [i_4 - 1])))) ? (((((/* implicit */_Bool) arr_8 [i_4 - 1])) ? (3198202802U) : (((/* implicit */unsigned int) arr_8 [i_4 - 1])))) : (((/* implicit */unsigned int) max((arr_8 [i_4 + 1]), (((/* implicit */int) arr_6 [i_5] [i_5 + 1] [i_5])))))));
            var_14 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_3 [i_4 + 1]))))));
            var_15 -= ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (short)32755)))) << (((((((/* implicit */int) arr_6 [i_5] [i_5 - 1] [(signed char)4])) + (76))) - (20)))));
            var_16 = ((/* implicit */long long int) (-(((int) ((((/* implicit */_Bool) arr_11 [(short)7] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-8)))))));
        }
        var_17 *= ((/* implicit */signed char) min((max((((/* implicit */unsigned int) arr_10 [i_4 + 1])), (max((arr_2 [i_4]), (((/* implicit */unsigned int) var_10)))))), (((/* implicit */unsigned int) (+(((/* implicit */int) max((var_10), (arr_9 [i_4])))))))));
    }
    for (short i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_7 [16ULL]))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32760)) ? (1834807782092636047LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1)))));
        var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-118))))), (min((((/* implicit */unsigned long long int) arr_10 [i_6 + 1])), (((((/* implicit */unsigned long long int) (-2147483647 - 1))) | (18446744073709551615ULL)))))));
    }
    var_21 = ((/* implicit */int) (signed char)-44);
}
