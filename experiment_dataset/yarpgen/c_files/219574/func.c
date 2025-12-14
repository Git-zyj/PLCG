/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219574
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
    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_2))))))), ((~(((((/* implicit */unsigned long long int) var_0)) & (var_9)))))));
    var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) min((((((/* implicit */int) var_11)) / (var_0))), (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_1)))))))) <= (min((((/* implicit */unsigned int) (short)-16116)), (4294967295U)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_10))), (((/* implicit */unsigned int) var_3))))), (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (var_10)))) + (min((((/* implicit */unsigned long long int) var_6)), (var_2)))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    arr_8 [i_0 + 3] [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned short) var_8)), (min((var_6), (min((((/* implicit */unsigned short) var_11)), (var_1)))))));
                    var_16 |= min((((/* implicit */unsigned long long int) max((max((var_7), (((/* implicit */unsigned int) var_8)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_0)) : (var_7)))))), (max((max((var_9), (((/* implicit */unsigned long long int) (unsigned char)163)))), (((/* implicit */unsigned long long int) (unsigned short)63890)))));
                }
                for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    arr_12 [i_3] [i_1] [i_3] [i_3] = ((((((/* implicit */_Bool) (short)-9641)) && (((/* implicit */_Bool) (unsigned short)63890)))) && ((!((!(((/* implicit */_Bool) var_7)))))));
                    arr_13 [i_0] [i_1] [i_3] [i_3] = (~(max((((/* implicit */long long int) max((((/* implicit */unsigned char) var_5)), (var_4)))), (max((((/* implicit */long long int) var_7)), (var_12))))));
                    var_17 = ((/* implicit */short) var_7);
                }
                arr_14 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_8)))))) != ((+(var_2)))))));
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(var_0)))) & (min((((/* implicit */unsigned int) var_8)), (var_10)))))), (((min((var_2), (((/* implicit */unsigned long long int) var_12)))) - (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) var_11)))))))));
                var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_1))))) ? (var_2) : (((/* implicit */unsigned long long int) ((var_12) + (((/* implicit */long long int) var_10))))))) + (max((((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (+(min((min((var_10), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 19; i_4 += 4) /* same iter space */
    {
        arr_19 [i_4 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) < (((/* implicit */unsigned long long int) var_10))));
        arr_20 [i_4] = ((/* implicit */signed char) ((((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_10))))));
        arr_21 [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_10))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) < (var_3)))))));
    }
    for (unsigned int i_5 = 2; i_5 < 19; i_5 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_7)))) && ((!(((/* implicit */_Bool) var_6))))))));
        arr_24 [i_5] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) (short)-16116)), (1216845772U)))));
    }
    for (unsigned short i_6 = 2; i_6 < 9; i_6 += 2) 
    {
        var_21 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (var_1)))) ? (max((var_12), (var_12))) : (((/* implicit */long long int) (~(var_10))))))) & (max((min((var_2), (var_9))), (((/* implicit */unsigned long long int) (~(var_3))))))));
        arr_27 [(short)7] = ((/* implicit */unsigned int) max(((short)16116), ((short)-16116)));
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))), (min((var_7), (((/* implicit */unsigned int) var_0))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)18826))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_11))))) : (min((var_3), (((/* implicit */int) var_11)))))))));
        arr_29 [i_6] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) var_11)), (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) < (((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_11)), (var_0))), (max((((/* implicit */int) var_11)), (var_0))))))));
        var_22 = ((/* implicit */short) min((min((min((((/* implicit */unsigned long long int) var_10)), (var_9))), (min((((/* implicit */unsigned long long int) var_8)), (var_2))))), ((+(min((((/* implicit */unsigned long long int) var_7)), (var_9)))))));
    }
    for (int i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        var_23 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))));
        /* LoopSeq 1 */
        for (unsigned short i_8 = 1; i_8 < 23; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                for (int i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    {
                        var_24 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(max((((/* implicit */int) var_11)), (var_3)))))), (min((((/* implicit */unsigned long long int) ((var_3) & (((/* implicit */int) var_5))))), (min((((/* implicit */unsigned long long int) var_5)), (var_9)))))));
                        var_25 = ((/* implicit */unsigned long long int) (+(max((max((var_10), (((/* implicit */unsigned int) var_4)))), (max((((/* implicit */unsigned int) var_4)), (var_10)))))));
                        arr_40 [i_9] [(_Bool)1] [i_8 + 1] [i_8] [(_Bool)1] [i_9] = (-(((/* implicit */int) ((max((var_0), (var_0))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (var_12))))))));
                        arr_41 [i_9] [(short)5] [i_8 - 1] [i_9] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_11), (var_8)))) ? (max((((/* implicit */int) var_5)), (var_0))) : (((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))), (max((var_2), (((/* implicit */unsigned long long int) ((((var_12) + (9223372036854775807LL))) << (((((var_12) + (942961784201173122LL))) - (30LL))))))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((max((var_10), (((/* implicit */unsigned int) var_8)))) & (((/* implicit */unsigned int) (~(var_3))))))), (((((var_2) << (((var_2) - (11861121955912793434ULL))))) ^ (((/* implicit */unsigned long long int) var_10))))));
            var_27 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7)))))) && (max(((!(((/* implicit */_Bool) var_10)))), ((!(((/* implicit */_Bool) var_5))))))));
            arr_42 [i_7] [i_8 - 1] [i_7] = ((/* implicit */unsigned short) var_0);
        }
    }
}
