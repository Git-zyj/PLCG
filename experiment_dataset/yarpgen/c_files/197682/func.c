/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197682
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (+((+(2356424632U))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_13 |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)10277))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_5))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4]))));
                            var_15 = ((signed char) arr_9 [i_1] [i_1] [i_2]);
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1] [i_2] [i_3] [i_4])) != (((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [3U]))));
                            var_17 = ((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0] [i_1]));
                        }
                    } 
                } 
                arr_15 [i_0] [(unsigned short)4] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_1] [i_0] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_14 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_14 [i_1] [i_1] [(_Bool)1] [i_1] [i_0] [i_0] [i_0]))));
                var_18 = ((/* implicit */signed char) ((unsigned int) arr_14 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2] [i_2]));
            }
        }
    }
    for (long long int i_5 = 2; i_5 < 19; i_5 += 4) 
    {
        var_19 = arr_19 [i_5 + 2];
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_4))));
    }
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
    {
        var_21 = (~((~(((/* implicit */int) arr_21 [i_6] [i_6])))));
        arr_24 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6]))) : (((((/* implicit */_Bool) 3143133886U)) ? (2988338974U) : (3235049566U)))))) ? ((+(arr_16 [i_6] [i_6]))) : (((unsigned int) arr_22 [i_6]))));
    }
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */short) arr_22 [16LL]);
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_29 [14ULL] = ((/* implicit */short) ((long long int) max(((+(((/* implicit */int) (signed char)-24)))), (((/* implicit */int) arr_17 [i_8])))));
            arr_30 [i_7] [i_8] [9LL] = ((/* implicit */_Bool) var_7);
        }
        arr_31 [i_7] = ((/* implicit */_Bool) (+(((unsigned int) var_3))));
        var_23 = ((/* implicit */unsigned long long int) arr_26 [i_7]);
    }
    var_24 = ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(arr_32 [i_9 - 1] [0U])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_9 - 1]))))) : ((+((-(arr_10 [i_9 - 1] [i_9 - 1] [7U] [i_9 - 1])))))));
        arr_34 [i_9] = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) arr_23 [i_9])) && (((/* implicit */_Bool) arr_0 [i_9 - 1] [i_9 - 1])))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((((/* implicit */unsigned long long int) arr_20 [i_9])) == (arr_22 [i_9]))))))));
        var_26 *= (+(var_8));
    }
    var_27 += ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) var_6)))));
}
