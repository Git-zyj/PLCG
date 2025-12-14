/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30926
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
    var_19 += var_4;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                var_20 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((arr_0 [i_0] [i_1]) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_2])))) : (((/* implicit */int) arr_3 [i_1 - 2] [i_2 + 2] [i_2 + 2])));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_1]))));
                var_22 = ((/* implicit */signed char) ((unsigned long long int) arr_5 [i_1 + 1] [19U] [i_2 - 3]));
            }
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((unsigned int) arr_7 [i_1])))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
        {
            var_24 = ((/* implicit */long long int) max((min((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_3])))), (((/* implicit */unsigned long long int) ((_Bool) ((arr_10 [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_3] [i_3])))))))));
            arr_11 [i_0] [17ULL] = ((/* implicit */int) arr_4 [(unsigned char)12]);
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) min((arr_8 [i_3 - 1]), (((/* implicit */int) ((unsigned char) 732195032))))))));
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_0] [i_3 - 1])) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)179)) << (((1073741824) - (1073741813))))))));
        }
        var_27 = ((/* implicit */unsigned int) ((arr_10 [i_0] [i_0] [i_0]) >> (((/* implicit */int) ((_Bool) arr_10 [i_0] [i_0] [i_0])))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) min((((_Bool) arr_12 [i_4] [i_4])), (((_Bool) arr_6 [i_4] [i_4] [i_4])))))));
        arr_14 [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned short) 2251791223750656ULL))), (((long long int) arr_4 [i_4]))));
        arr_15 [i_4] = ((/* implicit */int) ((unsigned int) arr_5 [i_4] [i_4] [i_4]));
        arr_16 [i_4] = ((/* implicit */signed char) max((((short) ((unsigned short) (unsigned short)20740))), (((/* implicit */short) ((signed char) (unsigned short)35252)))));
    }
    for (unsigned char i_5 = 2; i_5 < 11; i_5 += 2) 
    {
        var_29 = ((/* implicit */int) ((unsigned short) ((int) arr_13 [i_5])));
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            arr_23 [i_5 + 3] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((arr_10 [i_5] [i_5] [i_5 + 2]), (((/* implicit */unsigned long long int) arr_4 [i_5 + 4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_19 [i_5])))) : (arr_13 [i_5 + 1]))) & (max((((/* implicit */unsigned long long int) max((arr_4 [i_5]), (((/* implicit */unsigned short) arr_3 [i_6] [i_5] [i_5]))))), (arr_22 [i_5 - 2])))));
            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_5 + 4] [18ULL] [i_5 - 1]))) ? (((/* implicit */unsigned long long int) ((unsigned int) (-2147483647 - 1)))) : (min((min((((/* implicit */unsigned long long int) arr_8 [i_5])), (arr_19 [i_6]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_6] [(unsigned short)9] [i_5 + 1])))))));
            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((unsigned int) max((arr_19 [i_5 + 2]), (((/* implicit */unsigned long long int) arr_6 [(unsigned short)6] [(unsigned short)6] [i_5]))))))));
            var_32 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((min((arr_4 [i_5 + 4]), (((/* implicit */unsigned short) arr_3 [i_5] [i_5] [i_5])))), (arr_7 [i_5])))), (arr_22 [i_5 + 2])));
        }
        /* vectorizable */
        for (long long int i_7 = 1; i_7 < 13; i_7 += 1) 
        {
            arr_26 [i_5] = ((/* implicit */unsigned short) arr_12 [i_5 + 1] [i_7 + 1]);
            var_33 = ((((/* implicit */_Bool) ((short) arr_20 [i_5]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5]))) : (arr_9 [i_5] [i_7 + 2]));
            arr_27 [i_5] [i_5] [i_7 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_5 - 1])) != (((/* implicit */int) arr_25 [i_5 - 1]))));
        }
        arr_28 [i_5 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1613285102053741537LL)) ? (((/* implicit */unsigned long long int) ((long long int) 14125669035588646560ULL))) : (((min((((/* implicit */unsigned long long int) arr_5 [i_5] [i_5] [i_5])), (18446744073709551615ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)117))))))));
    }
    var_34 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((int) var_7)))) || (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (var_1)))) || (((/* implicit */_Bool) ((unsigned char) var_18)))))));
}
