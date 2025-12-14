/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247655
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)-116))))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1 - 3])) / (((/* implicit */int) arr_2 [i_1 + 1])))))));
                var_12 ^= ((/* implicit */unsigned long long int) (short)-1897);
                var_13 = ((((/* implicit */_Bool) (-(arr_0 [i_1 - 1])))) ? (((/* implicit */int) ((arr_0 [i_1 + 1]) != (arr_0 [i_1 - 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) && (((/* implicit */_Bool) 15803485124520599411ULL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 9; i_2 += 2) 
    {
        for (short i_3 = 2; i_3 < 7; i_3 += 2) 
        {
            {
                arr_13 [(signed char)2] [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) (short)1896)) << (((3010276232812045916LL) - (3010276232812045903LL))))) & (arr_0 [i_2])));
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        arr_20 [i_5] [6] [(unsigned short)9] [i_2] = ((/* implicit */unsigned int) var_6);
                        arr_21 [i_3] [i_4] [i_5] = ((signed char) (~(((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_3])) ? (var_3) : (((/* implicit */long long int) var_5))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 1; i_6 < 10; i_6 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((int) 937143783));
                        arr_24 [i_6] [3U] [i_6] = ((/* implicit */int) var_3);
                    }
                    arr_25 [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) (~(15803485124520599411ULL)));
                    var_15 ^= ((/* implicit */unsigned short) (signed char)92);
                    var_16 = ((/* implicit */int) ((((-1870270860) - (((/* implicit */int) (signed char)109)))) <= ((-(((/* implicit */int) var_9))))));
                    arr_26 [i_2] [i_3] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_11 [i_2 - 2] [i_2 - 2])))) + ((-(((/* implicit */int) arr_4 [i_3 + 1]))))));
                }
                for (int i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_3 - 1])) << (((((/* implicit */int) arr_23 [i_3 - 1])) - (94)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_3 - 1])))))));
                    arr_30 [(unsigned short)6] [i_3] = ((/* implicit */short) arr_19 [i_2] [9LL] [i_3 + 4] [i_3 + 4]);
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            {
                                arr_36 [i_2] [i_2] [i_7] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [(unsigned char)12] [8LL] [5U])) - ((~((~(937143783)))))));
                                var_18 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_7 [10U] [10U] [i_3 + 2])))) ? ((+(arr_17 [i_2 - 2] [i_3 + 2] [i_3 + 2]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(unsigned short)6] [i_3] [i_3 + 4])) && (((/* implicit */_Bool) arr_18 [i_3 - 2])))))));
                                arr_37 [i_2] [i_3] [i_7] [i_3] [i_9] = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned short)59036)) - (((186408969) / (-1351315116))))), (min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                            }
                        } 
                    } 
                    arr_38 [i_7] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2643258949188952204ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2975))) : (((((/* implicit */_Bool) var_0)) ? (arr_27 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [(signed char)10] [(signed char)10] [6] [5] [i_3] [i_3] [(short)3])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5025972741653909358ULL)))))) : (((((/* implicit */_Bool) arr_22 [6] [i_2] [i_3 - 2] [4LL] [i_7])) ? (arr_7 [i_2 - 1] [i_3 + 4] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78)))))));
                    var_19 ^= ((/* implicit */unsigned short) -435607242);
                }
                arr_39 [i_2] [i_3] [i_2] = ((((/* implicit */long long int) var_5)) ^ (((((/* implicit */_Bool) arr_27 [i_3 - 1] [i_3 - 1])) ? (arr_27 [i_3 + 3] [i_3 + 3]) : (arr_27 [i_3 + 2] [i_3]))));
            }
        } 
    } 
}
