/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29723
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
    var_14 = ((/* implicit */int) (unsigned short)27031);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_15 *= min((((/* implicit */unsigned long long int) ((arr_1 [i_0]) <= (arr_1 [i_0])))), ((+(7223950634717259010ULL))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(var_6)));
        var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) (unsigned char)189)))))) - (max((((/* implicit */unsigned long long int) 324615011U)), (2251799813685247ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47696))) : (((unsigned long long int) 524287ULL))));
        var_17 = ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(arr_2 [i_0]))) : (((/* implicit */int) ((((((/* implicit */_Bool) 593806247)) ? (arr_2 [(short)1]) : (arr_2 [i_0]))) < (arr_2 [i_0])))));
        var_18 = ((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 324614997U)), (7223950634717259010ULL)))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) 815988331U)) ? (var_0) : (((/* implicit */unsigned long long int) arr_1 [i_0])))))) : (((/* implicit */unsigned long long int) arr_1 [i_0])));
    }
    for (unsigned short i_1 = 3; i_1 < 22; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 4) 
        {
            for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                {
                    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((815988331U), (3970352284U))), (((/* implicit */unsigned int) arr_8 [i_1 + 1] [i_2 + 1] [i_3 + 2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [18U] [i_2] [i_3 + 2] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (arr_11 [i_3] [i_2])))) ? (-7357240189328667569LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))) : (((((/* implicit */_Bool) arr_12 [18ULL] [i_2 - 1] [i_3 + 1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 - 1] [(unsigned short)10])))))) : (max((arr_10 [i_1 - 3]), (((/* implicit */unsigned long long int) 2147483647))))))));
                    var_20 = (((+(arr_6 [i_1 - 1]))) & (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_7 [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_2] [i_3 + 2] [0U]))) : (524287ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((6031968968057155887ULL), (((/* implicit */unsigned long long int) (unsigned short)47796)))) < (197511290899996083ULL))))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_2 + 1] [i_3 - 1] [i_5]))))) - (1852049366201156698ULL))))))));
                                arr_17 [i_2] [i_2 - 1] [11U] [i_4] [15LL] [i_1 - 3] [i_1 - 2] = ((/* implicit */unsigned char) min(((-(18446744073709027329ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2 + 1] [i_3 + 2] [i_4] [22ULL] [i_2 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(18446744073709027324ULL))), (((/* implicit */unsigned long long int) (-(3829230224U))))))) ? (((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 3173107463U)) : (var_0))) % (arr_10 [i_1 - 2]))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 2] [i_1] [i_1 - 1]))) <= (var_9))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [(unsigned short)3] [i_1] [i_1])), (2147483647)))) : (max((((/* implicit */unsigned long long int) var_12)), (var_4)))))));
    }
    var_23 |= 8621384756869014912ULL;
}
