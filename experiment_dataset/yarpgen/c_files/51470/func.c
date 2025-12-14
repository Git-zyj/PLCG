/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51470
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
    var_17 += ((/* implicit */unsigned short) var_12);
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_13))));
    var_19 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [(short)19])) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) var_8);
        /* LoopSeq 3 */
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9)))))));
            arr_8 [i_1] = arr_1 [i_0];
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */signed char) ((arr_11 [i_2] [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)16383)))));
            arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 8407130009005780695LL))));
            arr_14 [(signed char)16] [i_2] = ((((/* implicit */int) (short)16383)) > (((/* implicit */int) (short)-16392)));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        arr_20 [i_0] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (short)-16384)) ^ (((/* implicit */int) (signed char)21))));
                        var_21 ^= ((/* implicit */long long int) ((short) arr_19 [2U] [2U] [(_Bool)1] [i_3] [2U] [i_4]));
                        arr_21 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) (short)16357))));
                    }
                } 
            } 
        }
        for (unsigned short i_5 = 4; i_5 < 20; i_5 += 1) 
        {
            arr_24 [i_5] = ((/* implicit */short) var_6);
            arr_25 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)16383)) == (((/* implicit */int) var_14)))) ? (((unsigned int) (unsigned char)101)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)103)) != (((/* implicit */int) (unsigned char)155))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)101)), (var_9))))) : (((((/* implicit */_Bool) var_11)) ? (arr_6 [i_5 + 2] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
            var_22 = (((-(arr_0 [i_5 - 3] [i_5 - 2]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)53)) <= (((/* implicit */int) (signed char)-122)))))));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        arr_29 [i_6] [i_6] = ((/* implicit */_Bool) ((17235339016642406090ULL) & (1798761327055560638ULL)));
        arr_30 [14U] = ((unsigned int) min((((/* implicit */short) arr_23 [i_6])), (var_11)));
        var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */unsigned long long int) arr_27 [i_6] [i_6]))))));
        var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16374)) ? (((((/* implicit */_Bool) var_10)) ? (1211405057067145523ULL) : (17235339016642406106ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_6])))))));
    }
    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        var_25 ^= ((/* implicit */unsigned short) var_2);
        var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_7] [i_7] [i_7] [i_7]))));
        arr_34 [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
    }
}
