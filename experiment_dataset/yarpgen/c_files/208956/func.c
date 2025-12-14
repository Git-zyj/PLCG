/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208956
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-4)) ? ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 3] [i_1 - 3])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1 - 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 2] [i_1 - 3])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_1 + 2])) : (((/* implicit */int) arr_3 [i_1] [i_1 + 2] [i_1 - 3]))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_13 ^= ((/* implicit */long long int) (signed char)-57);
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)14357)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-54))));
                        var_14 = ((/* implicit */signed char) max((var_14), (arr_7 [i_3] [i_1 - 3] [i_2])));
                    }
                    arr_12 [i_0] [i_0] [i_1 + 2] [i_0] = ((signed char) var_10);
                    var_15 += ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)-125))))));
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 3] [i_1 - 3])))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 2; i_4 < 10; i_4 += 2) 
    {
        for (short i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (long long int i_6 = 3; i_6 < 10; i_6 += 3) 
            {
                {
                    arr_19 [i_6] [i_5] [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) -5880448177089283674LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)59))) : (-5953033153091912632LL)));
                    /* LoopNest 2 */
                    for (long long int i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        for (long long int i_8 = 3; i_8 < 10; i_8 += 4) 
                        {
                            {
                                var_17 = ((((/* implicit */_Bool) arr_15 [i_8] [i_5])) ? (((-2024622605466566662LL) / (((long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_10))) && (((/* implicit */_Bool) arr_17 [i_5] [i_6 - 1] [i_7 - 2])))))));
                                arr_24 [i_4] [i_4] [i_4 + 1] [i_7] &= ((/* implicit */signed char) min((((((/* implicit */int) (signed char)-69)) > (((/* implicit */int) (short)-10370)))), (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_20 [i_4] [i_5] [i_6] [i_8 - 2]))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-10632)) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)25236))))) : (min((arr_20 [i_5] [i_5] [i_7] [i_7 - 2]), (arr_20 [i_6] [i_7] [i_7] [i_7 - 1])))));
                                arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1104763396769698327LL))))) : (((/* implicit */int) arr_17 [i_5] [i_6] [i_5]))))) == (((((/* implicit */_Bool) var_3)) ? (673603347508728358LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                                arr_26 [i_4 + 1] [i_4 - 2] [i_4] [i_5] = ((/* implicit */long long int) var_0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (short i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            {
                                arr_32 [i_4] [i_4] [(signed char)1] [i_5] [i_4 - 2] = ((/* implicit */signed char) var_10);
                                arr_33 [i_5] [i_5] [i_5] [i_6] [i_9] [i_10] [i_5] = max((((/* implicit */long long int) arr_13 [i_5])), (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)18863)), (var_10)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_5] [i_6]))) : (arr_27 [i_5] [i_5] [i_10] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4 - 1] [3LL] [i_6] [i_9] [i_10] [i_9]))))));
                                var_19 = ((/* implicit */long long int) min((var_19), (max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-7439700072048778730LL) : (arr_18 [i_9] [i_6] [i_4])))) ? (((var_11) / (((/* implicit */long long int) ((/* implicit */int) (signed char)61))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)13559)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (signed char)111))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (-122515545748275288LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5]))))) <= (var_8))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        for (long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            {
                                arr_40 [i_4] [i_5] [i_6 + 1] [i_11] [i_12] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6 - 3] [i_6 - 1] [i_6 - 2] [i_4] [i_6 + 1] [i_6 - 3]))) : (5153724619859355498LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_12] [i_6 - 1] [i_6 - 2])) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) 7670572856116300283LL)) || (((/* implicit */_Bool) (signed char)17)))))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (signed char)-8))));
                                var_21 |= arr_36 [i_5] [i_12];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (((-(((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (signed char)-77))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (var_3)))))))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-18))));
}
