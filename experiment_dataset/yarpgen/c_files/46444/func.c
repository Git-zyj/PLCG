/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46444
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_12 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -6869849111115279813LL)) ? (((/* implicit */int) (unsigned short)60743)) : (((/* implicit */int) (short)-1))))), (4294967275U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)24649))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_8 [10U] [i_1] [i_1] [i_0])) : (arr_2 [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_3])) ? (((/* implicit */long long int) max((((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_1 - 2] [i_3] [i_3 + 1] [i_4 + 1])), (((((/* implicit */int) (unsigned short)16606)) + (((/* implicit */int) (short)-11796))))))) : ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 - 1] [i_3 - 1] [i_1] [i_1] [i_1] [i_0]))) : (var_5)))))));
                                var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (short)11777)) : (((/* implicit */int) (short)-11796)))) - (11761)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_1])), (var_2)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11796)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))))))) : (min((((((/* implicit */_Bool) var_7)) ? (arr_4 [i_0] [i_0] [i_0 - 1]) : (((/* implicit */long long int) arr_7 [i_1] [i_1 + 1] [(unsigned char)11] [i_1])))), (var_1)))));
                                var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [5LL]))))))) == (((((/* implicit */_Bool) 4003549843751853202ULL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                                arr_14 [i_3] [i_4] [i_3 + 4] [i_2] [i_1 - 2] [i_1] [i_3] = max((arr_1 [i_4]), (var_5));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 20; i_5 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_6))));
                        var_16 += ((/* implicit */unsigned int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) + (1361716021654826128LL))));
                        var_17 = (~((~(var_5))));
                    }
                    for (signed char i_6 = 2; i_6 < 20; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */short) min((var_18), (var_4)));
                            var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_6] [(short)17] [i_2] [i_1] [i_0]))) : (15152758969680704999ULL)))) ? (((/* implicit */int) ((((/* implicit */int) (short)-11792)) > (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_22 [(signed char)12] [i_2] [i_1] [0U])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-18495))))))) ? ((~(arr_17 [i_0 + 1] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1 + 2] [i_1 + 2])) ? (var_5) : (((/* implicit */long long int) -1))))));
                            arr_24 [i_0] [i_6] [i_6] [(_Bool)1] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_0 + 2] [i_0 + 2] [i_2 - 1] [i_0 + 2] [i_1] [i_0]))));
                            var_20 = max((((/* implicit */long long int) (short)-908)), (min(((+(arr_8 [i_1 + 2] [i_2 + 3] [i_6] [i_7 - 1]))), (((/* implicit */long long int) (-(((/* implicit */int) (short)-24650))))))));
                        }
                        var_21 *= ((/* implicit */short) ((((var_6) | (max((arr_8 [i_6] [i_6] [i_2] [(signed char)13]), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2 + 2])))))) < (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_2 + 1] [i_6])))));
                        var_22 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)31)) << (((var_1) - (687228555826656568LL)))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_2 + 1]), (((/* implicit */long long int) ((2180117665U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ? (((/* implicit */int) ((max((((/* implicit */unsigned int) var_8)), (arr_5 [(unsigned char)0] [(unsigned char)0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-32754)))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1361716021654826128LL)))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (8799454742479201233LL))))))));
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_7))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        arr_30 [i_0] [i_0 + 1] [i_0] = arr_9 [i_0] [i_1] [(_Bool)1];
                        var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)11777)) << (((-8799454742479201234LL) + (8799454742479201236LL)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)-11777)) / (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)(-127 - 1))), (arr_20 [i_0] [i_0] [i_0] [i_1] [(unsigned char)10] [i_0 + 2]))))) : (arr_4 [i_0] [i_1 + 2] [i_0]))) : (var_6)));
                    }
                }
            } 
        } 
    } 
    var_27 += ((/* implicit */long long int) (!(var_9)));
    /* LoopNest 3 */
    for (unsigned short i_10 = 2; i_10 < 24; i_10 += 3) 
    {
        for (long long int i_11 = 1; i_11 < 22; i_11 += 3) 
        {
            for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                {
                    var_28 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11] [i_12])))))) : (((/* implicit */int) var_9)))) >= (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_10] [i_10]))))), ((-(490108029)))))));
                    /* LoopNest 2 */
                    for (short i_13 = 1; i_13 < 21; i_13 += 1) 
                    {
                        for (short i_14 = 1; i_14 < 23; i_14 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned short) arr_34 [i_10] [i_11]))), (var_1)))), (min((max((((/* implicit */unsigned long long int) 660875050U)), (12906927657164200887ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) (signed char)-46))))))))))));
                                var_30 &= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1361716021654826128LL)))))));
                                arr_44 [i_13] [22LL] [i_11 + 1] [i_13 + 3] [i_14] |= ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) (short)-906)) ? (3634092236U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10] [i_13]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)118)), (var_3))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_31 = (+(((((0LL) + (((/* implicit */long long int) ((/* implicit */int) var_8))))) % ((-(var_5))))));
}
