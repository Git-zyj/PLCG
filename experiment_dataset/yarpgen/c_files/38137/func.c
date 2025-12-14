/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38137
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
    var_17 = ((/* implicit */short) 18446744073709551615ULL);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) -623431744526391120LL);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) ((((unsigned int) arr_14 [i_0] [i_1] [i_2] [i_2] [i_2])) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) <= (((/* implicit */int) (_Bool)1)))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_2])) != (((/* implicit */int) (signed char)-13))));
                                arr_16 [i_3] [(_Bool)1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) 2146435072U);
                                arr_17 [i_0] [(signed char)12] [7U] [i_4] [i_0] [i_1] = ((((/* implicit */long long int) max((((arr_15 [i_4] [i_3] [i_3] [i_2] [i_0] [i_0] [i_0]) + (262144U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_3])))))))) | (arr_8 [i_1]));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 623431744526391120LL)) && (((/* implicit */_Bool) ((signed char) ((arr_6 [i_2] [i_2]) + (-8229220936290338884LL)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((((3982360635U) >> (((623431744526391112LL) - (623431744526391111LL))))) ^ (((/* implicit */unsigned int) min((((((/* implicit */int) (short)1022)) << (((1042901142U) - (1042901139U))))), (((/* implicit */int) ((arr_8 [i_0]) > (var_6)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_22 = ((/* implicit */int) 623431744526391113LL);
        var_23 = ((/* implicit */signed char) 623431744526391120LL);
        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5])) ? (6638723117794662580LL) : (((/* implicit */long long int) 4294967295U))))) ? (((/* implicit */long long int) ((/* implicit */int) ((623431744526391120LL) > (((/* implicit */long long int) 4294705153U)))))) : ((+(-623431744526391128LL))));
    }
    for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 4) 
    {
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6])) ? (arr_21 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_13))) + (arr_21 [i_6] [i_6]))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-6927))) | (arr_21 [i_6 - 2] [i_6]))))), (((/* implicit */long long int) (+(arr_20 [i_6])))))))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)-74)))))) : (-623431744526391120LL)))) || (((/* implicit */_Bool) ((long long int) ((var_11) >> (((((/* implicit */int) (signed char)-74)) + (99)))))))));
    }
}
