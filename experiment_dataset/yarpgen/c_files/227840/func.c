/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227840
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
    for (signed char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])), (var_3))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_13))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(arr_3 [i_1]))), (var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-15831))))) && (((/* implicit */_Bool) max(((short)-29603), (((/* implicit */short) (signed char)88)))))))) : (((/* implicit */int) (short)-15836))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 6; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_17 = max((((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (arr_3 [i_3 + 1]) : (arr_3 [i_3 - 2]))), (arr_3 [i_3 - 1]));
                        var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [i_4])), (min((((((/* implicit */int) (short)-15842)) / (((/* implicit */int) var_12)))), (((/* implicit */int) min((((/* implicit */short) var_0)), (arr_8 [i_1]))))))));
                        arr_13 [i_1] [i_2] [i_3] [i_4] &= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)93))))) ? (arr_4 [i_3 + 3] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (short i_7 = 3; i_7 < 6; i_7 += 3) 
                {
                    {
                        var_19 += 6494672237330872738ULL;
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_14 [i_1] [i_5] [i_6 + 1])));
                    }
                } 
            } 
            var_21 |= ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_22 = ((/* implicit */_Bool) (~(((((arr_1 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26618))))) << (((((/* implicit */int) var_12)) - (46830)))))));
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_8))));
            arr_23 [i_8] [i_8] = ((/* implicit */signed char) max((((arr_19 [i_1] [i_1] [2ULL] [i_8]) << (((((((/* implicit */int) (short)15838)) - (((/* implicit */int) var_4)))) - (15902))))), (((((/* implicit */_Bool) (unsigned char)166)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15838))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100)))))));
            arr_24 [i_8] [i_8] = ((/* implicit */unsigned long long int) var_7);
            var_24 = ((/* implicit */unsigned short) var_2);
        }
        var_25 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_18 [i_1] [6ULL] [i_1] [i_1])) : (((/* implicit */int) (signed char)-17))))))) ? (((arr_21 [i_1] [i_1] [(unsigned char)0]) << ((((+(arr_3 [i_1]))) - (3151770218390259451ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_6))))) % (((var_11) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)5]))))))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_28 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15851)))))) ? (((((/* implicit */_Bool) arr_28 [i_9])) ? (arr_28 [i_9]) : (arr_28 [i_9]))) : (((((/* implicit */_Bool) arr_28 [i_9])) ? (arr_28 [i_9]) : (arr_28 [i_9])))));
        var_27 = ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */int) min((((/* implicit */short) var_0)), (arr_25 [i_9] [i_9])))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)-15841))))))));
        /* LoopSeq 1 */
        for (unsigned short i_10 = 2; i_10 < 20; i_10 += 4) 
        {
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) max((arr_30 [i_10] [i_9]), (((/* implicit */unsigned short) (signed char)-27)))))) ? (((/* implicit */int) arr_26 [i_10])) : (((int) (-(var_9))))));
            var_29 = ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned short) var_8))))) ? (max((arr_29 [i_10 - 2]), (4681137538874088305ULL))) : (((((/* implicit */_Bool) (short)-15840)) ? (arr_29 [i_10 - 1]) : (arr_29 [i_10 - 1]))));
        }
        var_30 = ((/* implicit */unsigned short) max((((((/* implicit */int) ((((/* implicit */_Bool) arr_27 [14ULL])) && (((/* implicit */_Bool) var_3))))) << (((/* implicit */int) ((arr_31 [i_9]) > (arr_31 [i_9])))))), (((/* implicit */int) (unsigned char)121))));
    }
    var_31 = ((/* implicit */signed char) ((var_7) ? (min((var_9), (((/* implicit */unsigned long long int) min(((unsigned char)93), (((/* implicit */unsigned char) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_32 = ((/* implicit */unsigned long long int) min((var_32), ((((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162))) : (var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16792))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) << (((var_11) + (4187804557134305117LL))))))))))));
    var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20970))) : (((((/* implicit */_Bool) 9655314206519750448ULL)) ? (17022695415330379487ULL) : (11952071836378678878ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_2)) > (((/* implicit */int) var_12)))) && (((/* implicit */_Bool) var_2))))))));
}
