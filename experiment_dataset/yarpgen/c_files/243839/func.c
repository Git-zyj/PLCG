/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243839
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] = arr_1 [(signed char)1] [i_1];
                var_13 = ((/* implicit */int) (signed char)-24);
                var_14 = ((/* implicit */long long int) ((int) (signed char)73));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((int) (-2147483647 - 1))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        var_16 = -9209753770702822414LL;
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)-74), (arr_7 [i_2])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [(signed char)14])), ((unsigned char)215)))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2]))))));
        arr_9 [i_2] = ((/* implicit */signed char) ((unsigned char) 2147483647));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_17 [i_2] [i_5 + 1] [(signed char)17] [i_5]), (arr_17 [i_5] [i_5 + 2] [i_4] [(signed char)14])))) ? (((/* implicit */int) min((arr_17 [i_2] [i_5 + 2] [i_4] [i_5]), (arr_17 [i_5] [i_5 - 1] [i_4] [(unsigned char)4])))) : (((/* implicit */int) max((arr_17 [i_2] [i_5 + 1] [(unsigned char)13] [(unsigned char)1]), (arr_17 [(signed char)17] [i_5 + 2] [(unsigned char)0] [i_5]))))));
                        var_19 *= ((/* implicit */signed char) max((((long long int) arr_17 [(signed char)7] [i_3] [i_4] [i_5 + 2])), (((/* implicit */long long int) (unsigned char)58))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) arr_19 [(unsigned char)4]);
        arr_20 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) (unsigned char)99)) : (((((/* implicit */_Bool) arr_18 [i_6])) ? (2147483647) : (arr_18 [i_6])))))) ? (((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) min(((signed char)-11), ((signed char)-98)))) : (((/* implicit */int) arr_19 [i_6])))) : (arr_18 [20])));
    }
    for (signed char i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
    {
        arr_24 [i_7] = ((signed char) 2147483647);
        var_21 = ((/* implicit */unsigned char) arr_22 [i_7]);
        arr_25 [(signed char)8] = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)31)), (1602511542)));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned char)188))) ? (((/* implicit */int) max((((signed char) (-2147483647 - 1))), (max(((signed char)-124), (arr_19 [i_7])))))) : (((/* implicit */int) ((signed char) arr_22 [(signed char)9]))))))));
        var_23 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_21 [(unsigned char)7])) ? (((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) (signed char)-25)))) : (((/* implicit */int) max(((signed char)17), (arr_19 [(signed char)19])))))));
    }
}
