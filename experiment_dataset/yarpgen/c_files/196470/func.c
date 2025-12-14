/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196470
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
    var_12 = ((/* implicit */long long int) ((((((/* implicit */int) var_11)) <= (var_1))) ? (((/* implicit */int) var_8)) : (((int) 268369920U))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [10U] = (-(((/* implicit */int) arr_2 [i_0])));
                var_13 = ((/* implicit */unsigned char) (+(((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (4026597376U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (signed char i_3 = 2; i_3 < 9; i_3 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) max((1675661052U), (4026597375U)))))));
                var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_3 + 1]))))) ? (((((/* implicit */int) arr_8 [i_2])) << (((268369920U) - (268369901U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4026597371U)))))));
                var_17 = ((/* implicit */long long int) (+((((~(4294967275U))) >> (((((/* implicit */int) (signed char)88)) - (68)))))));
                var_18 = ((/* implicit */signed char) var_10);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        for (long long int i_5 = 2; i_5 < 18; i_5 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((((var_3) % (((/* implicit */int) ((unsigned char) arr_0 [i_4] [i_5 - 1]))))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)64)) && (((/* implicit */_Bool) arr_0 [i_5 - 2] [i_5 + 3])))))));
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    arr_21 [3LL] [i_4] [i_6] = ((/* implicit */unsigned char) arr_2 [i_6]);
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_12 [i_6] [i_5]))));
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_7] [12LL] [i_4] [i_4] [i_5 + 2] [12LL] = min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 4026597361U)));
                        var_21 = ((/* implicit */unsigned char) max((var_21), ((unsigned char)0)));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_5 + 1] [i_7])) ? (((/* implicit */int) arr_18 [(signed char)21] [i_5] [i_5 + 3])) : (((/* implicit */int) arr_18 [i_5] [21LL] [i_5 + 4]))))) ? (4026597378U) : (((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned char)183)))), (((/* implicit */int) var_6)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((short) arr_26 [i_4] [i_4]));
                            arr_29 [i_5] [i_4] [i_7] [i_8] = ((/* implicit */long long int) arr_26 [i_4] [i_5 - 1]);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_8] [i_5 + 3] [i_6])) ? (arr_19 [i_4] [i_5 - 1] [i_6]) : (arr_19 [i_4] [i_5 + 3] [i_6])));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            arr_33 [i_4] [i_4] [i_5] [i_6] [i_4] [i_9] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4])) || (((/* implicit */_Bool) arr_32 [i_4] [i_4] [i_4])))))));
                            arr_34 [i_4] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8005959684012029595LL))));
                        }
                    }
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) arr_24 [i_10] [i_6] [i_5] [i_4]);
                        arr_37 [i_4] [i_5] [i_4] [i_6] [i_6] [i_10] = ((/* implicit */signed char) max((((/* implicit */long long int) ((arr_23 [i_5 + 1] [i_5] [(short)9] [i_5]) % (arr_23 [i_5 - 2] [i_5 + 3] [i_10] [i_10])))), (((long long int) arr_23 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_4]))));
                    }
                    var_26 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_11))))) | (((((/* implicit */_Bool) (unsigned char)252)) ? (arr_20 [i_6] [i_5] [i_4] [i_4]) : (((/* implicit */long long int) var_10)))))) >= (((((/* implicit */_Bool) 268369920U)) ? (2188055805272192810LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)33)))))));
                }
                var_27 = ((long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (268369920U))), (((/* implicit */unsigned int) arr_23 [i_4] [i_5] [i_5 - 2] [i_5 - 2]))));
            }
        } 
    } 
}
