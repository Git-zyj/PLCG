/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207265
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_16 = max((min(((+(15267267055120287521ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (7631441218578106590ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10778))) + (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                    arr_6 [i_2] [i_1] = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (3650613866U)))), ((~(var_6)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_4] [i_4 + 1] [i_1] [i_3] [i_4])) : (805306368))), (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_8)))))));
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (805306368)))) | ((~(var_15))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 805306368)), (5173756863218226896ULL)));
    }
    for (short i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        arr_16 [i_5] |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_3 [i_5]) - (arr_3 [i_5])))), (((unsigned long long int) (unsigned short)47148))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6)))) & (((((/* implicit */_Bool) (unsigned short)7427)) ? (arr_7 [i_5] [i_5] [(unsigned short)4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1351070641U)))) != (max((var_2), (((/* implicit */long long int) var_3))))))))));
        arr_17 [i_5] = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) max((var_11), (var_7))))))));
        var_19 = ((/* implicit */unsigned short) arr_10 [6U] [i_5] [i_5] [i_5] [i_5]);
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 4; i_6 < 14; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((((((unsigned int) (unsigned short)7427)) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_11 [(unsigned char)2] [i_6] [i_7] [i_5] [i_6] [(short)5] [i_5]))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)7416)), (10258947656069065998ULL)))) ? (748796023U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_5])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 14; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned long long int) max(((-(2131688557760171138LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_3))))) : (((((/* implicit */_Bool) 805306393)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-59))) : (2215111497U))))))));
                                arr_29 [i_5] [6] [i_7] [i_8] [i_8] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_14)), (arr_12 [i_6] [i_6] [i_8] [20] [i_7] [i_9] [i_9])))), (max((((/* implicit */unsigned long long int) arr_12 [(unsigned short)15] [i_5] [i_8] [(unsigned short)1] [i_6] [i_9] [i_9])), (var_4)))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)11329)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1))) % (((/* implicit */unsigned int) (~(((/* implicit */int) arr_28 [i_7] [i_8])))))))) ? (((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) var_0)))))) : (max((10258947656069065991ULL), (((/* implicit */unsigned long long int) (unsigned char)80)))))) : (((/* implicit */unsigned long long int) var_2))));
                                var_23 = ((/* implicit */unsigned long long int) var_2);
                                var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28397))) & (max((((/* implicit */unsigned long long int) ((var_4) != (var_13)))), (var_13)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) (_Bool)0)), (134217727ULL)))));
}
