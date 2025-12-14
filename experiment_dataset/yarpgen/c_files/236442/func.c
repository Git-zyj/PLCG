/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236442
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) var_7);
                                var_13 = ((/* implicit */short) min((min((((/* implicit */unsigned int) arr_9 [i_4 + 2] [i_4 + 3] [i_4 + 3] [i_1])), (min((arr_13 [i_1] [i_1] [i_3] [i_0 - 1]), (((/* implicit */unsigned int) -10)))))), (((/* implicit */unsigned int) ((int) var_7)))));
                                arr_14 [i_2] [i_3] [i_1] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)181)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38))) : (0ULL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)26449))))) : ((+(5582808117367565433LL)))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0 + 1] [i_1] [i_2] [i_1] [i_0])))))));
                    arr_15 [i_1] [i_1] = ((/* implicit */signed char) (((~(var_7))) - (((/* implicit */unsigned int) ((((arr_10 [i_1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_1]) + (2147483647))) >> ((((-(((/* implicit */int) (signed char)39)))) + (70))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [12] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                        arr_19 [(short)10] [i_0] [i_1] [(unsigned char)0] [i_2] [i_5] = ((/* implicit */long long int) (+(arr_2 [i_0] [i_0 + 1] [i_2 - 1])));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_1] [(signed char)6] [(signed char)6] [i_1] [i_0] [i_1] = ((/* implicit */signed char) min(((unsigned char)58), ((unsigned char)118)));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 16031642695037037220ULL)))) : (((10865988108581885786ULL) >> (((var_3) - (4227652350U)))))))) ? (max((((/* implicit */unsigned int) var_5)), (min((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_1])), (var_7))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 205857907U))))))))));
                        arr_23 [i_6] [i_0] [i_1] [i_1] [i_0 + 1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) -3LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)(-127 - 1))))) != (242368433))))));
                        var_16 = ((/* implicit */signed char) (~(((unsigned int) (+(((/* implicit */int) var_11)))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_17 = max(((+(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))))), (((/* implicit */int) min((arr_11 [i_1] [i_0 - 1] [i_1]), (arr_11 [i_1] [i_0 - 1] [i_1])))));
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            arr_30 [i_0] [i_1] [i_2] [i_1] [(short)12] = (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (max((((/* implicit */unsigned int) var_4)), (var_3))) : (max((arr_13 [i_1] [i_2] [i_7] [i_8]), (((/* implicit */unsigned int) var_8)))))));
                            arr_31 [i_0] [i_0] [i_1] = (((((-(var_1))) >> (((((var_9) >> (((((/* implicit */int) (short)-31743)) + (31754))))) - (790469))))) >> (((/* implicit */int) max((arr_24 [i_0] [i_0 - 1] [i_2] [i_0] [i_2 + 1]), (arr_24 [i_8] [i_1] [i_2] [i_7] [i_2 + 1])))));
                            arr_32 [i_1] [i_7] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) (short)7146)))) * (((-3) / (514557185)))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-28900)) / (var_1)))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_1] [i_8]))) / (var_3))))) : (((((_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_0 [i_0])))));
                        }
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)26451))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_9 = 1; i_9 < 23; i_9 += 2) 
    {
        arr_37 [i_9] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [i_9]))));
        arr_38 [i_9] = ((/* implicit */unsigned int) (+((-(9938998110588339589ULL)))));
        arr_39 [i_9] [i_9] = ((/* implicit */signed char) ((((arr_36 [i_9] [i_9]) + (2147483647))) >> (((var_9) - (1618918926)))));
    }
}
