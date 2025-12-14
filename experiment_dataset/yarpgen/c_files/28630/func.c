/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28630
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (var_1)))) ? (((long long int) var_12)) : (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)7204))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 14843184356387911025ULL)) ? (var_12) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) var_1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) var_12);
        var_17 = ((/* implicit */unsigned int) var_4);
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */_Bool) (-(min((2305843009213693952ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_18 = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) arr_5 [i_2]))))));
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_19 = min((((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */int) arr_5 [(_Bool)1])))), (var_4));
                            var_20 = ((/* implicit */unsigned long long int) min((max((arr_12 [i_1] [i_2] [i_5] [i_5] [i_4]), (((/* implicit */unsigned int) (short)15116)))), (((/* implicit */unsigned int) ((int) 18446744073709551598ULL)))));
                            var_21 = min((((/* implicit */short) arr_10 [i_1] [i_2] [i_2] [(_Bool)1])), (var_11));
                            arr_13 [i_1] [i_1] [i_1] [i_1] [(short)4] [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned int) 16140901064495857660ULL));
                        }
                    } 
                } 
            } 
        }
        var_22 = ((/* implicit */unsigned int) ((long long int) min((arr_3 [i_1]), (((/* implicit */signed char) arr_6 [i_1] [i_1] [i_1])))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 2; i_6 < 18; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) min((((unsigned long long int) 16140901064495857664ULL)), (((/* implicit */unsigned long long int) (_Bool)0))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_15 [i_6 + 1] [i_6 + 1]) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6 - 2] [i_6 + 1])))))) ? (((/* implicit */int) min((arr_15 [i_6 + 1] [i_6 - 2]), (arr_15 [i_6 - 2] [i_6 - 1])))) : (((/* implicit */int) (unsigned short)54)))))));
                }
            } 
        } 
    }
}
