/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2624
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
    var_16 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) ((_Bool) min(((+(arr_1 [9]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3670319515593299695LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)119))))))));
        var_18 = ((/* implicit */int) ((short) (((~(arr_0 [(unsigned short)7] [i_0]))) % (((((/* implicit */_Bool) 277453109)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_2 [i_1] [i_1])) - (((/* implicit */int) arr_3 [i_1 - 2]))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2])), (-842294922)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)24)) & (((/* implicit */int) arr_3 [i_1]))))) : (((arr_3 [i_1 - 1]) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))))))) : (((long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_1] = ((/* implicit */unsigned short) arr_3 [i_1]);
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_10 [i_3] = ((/* implicit */int) ((long long int) (-(((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3]))) : (15LL))))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2LL)) ? (((/* implicit */unsigned long long int) 8LL)) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)82))))), (((32767ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7)))))))));
            arr_11 [i_3] [i_3] = ((/* implicit */int) arr_8 [i_3]);
            var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_6 [i_2]) : (arr_6 [i_2])))), (min((((/* implicit */unsigned long long int) ((int) arr_6 [i_3]))), (((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_9 [i_2] [i_3] [i_2]) : (((/* implicit */unsigned long long int) arr_5 [i_3]))))))));
        }
        arr_12 [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((18446744073709551615ULL) - (18446744073709551595ULL)))))) ? (14870595223254333040ULL) : (((/* implicit */unsigned long long int) 4022406055U)))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            var_22 = ((/* implicit */long long int) (short)7522);
            arr_18 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4])) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28289))) | (8034068438810894388ULL)))))));
            arr_19 [i_4 - 1] [i_4] = ((/* implicit */short) min((((/* implicit */int) arr_17 [i_4 + 1] [i_4] [i_4 - 1])), (((((/* implicit */int) arr_15 [i_4] [i_4 + 1])) - (((/* implicit */int) arr_15 [18] [i_4 - 1]))))));
        }
        arr_20 [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_4]))) ? (max((((/* implicit */long long int) (_Bool)1)), (-13LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_4 + 1] [13LL]))))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4 + 1])))));
        arr_21 [i_4] [i_4] = ((/* implicit */int) ((unsigned short) -699368706));
    }
    var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != (max((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_4))), (((/* implicit */unsigned int) var_7)))));
}
