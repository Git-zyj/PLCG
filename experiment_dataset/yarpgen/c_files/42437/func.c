/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42437
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
    var_13 = ((/* implicit */unsigned long long int) var_9);
    var_14 = ((/* implicit */_Bool) max(((~(var_9))), (((/* implicit */long long int) ((int) 2220967309049286498ULL)))));
    var_15 = ((/* implicit */long long int) ((((long long int) ((((/* implicit */_Bool) var_12)) ? (var_9) : (var_9)))) > (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_16 = ((((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 + 1])) / (arr_2 [i_0 - 1]));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2 + 1] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_2 [2LL])), (((unsigned long long int) ((((/* implicit */int) var_2)) + (var_0))))));
                        var_17 = ((/* implicit */short) arr_5 [i_1] [i_1]);
                        arr_14 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)25169))))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_0] [i_0]), (((/* implicit */short) (unsigned char)172)))))) & (((arr_6 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40371)))))))));
                        arr_15 [i_1] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1]))) : (min((arr_8 [i_1] [i_1]), (((/* implicit */long long int) (short)12072))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((((/* implicit */_Bool) -2904499352947290682LL)) ? (((/* implicit */long long int) -1574784700)) : (9223372036854775807LL))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
                    }
                } 
            } 
            arr_16 [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-24739))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    {
                        arr_22 [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */long long int) arr_7 [i_4 + 3] [i_4 - 1] [i_1] [i_4 + 3]);
                        arr_23 [i_1] = ((/* implicit */signed char) var_3);
                        arr_24 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (-(arr_19 [i_5] [i_1] [i_1] [i_0])))) ? (((unsigned long long int) (signed char)0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_4] [i_0])) < (((/* implicit */int) arr_21 [i_4] [i_5])))))))) < (((/* implicit */unsigned long long int) var_9))));
                    }
                } 
            } 
        }
        for (long long int i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) max((1677007540U), (((/* implicit */unsigned int) (short)-32629))));
            arr_28 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) < (((/* implicit */int) var_6)))))) & (max((((/* implicit */long long int) (unsigned char)255)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_1)))))));
        }
    }
    for (short i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_29 [(signed char)12] [i_7])) + (((/* implicit */int) arr_29 [10U] [i_7])))), ((+(1574784699)))));
        var_20 = ((/* implicit */int) arr_29 [i_7] [i_7]);
    }
}
