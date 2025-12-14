/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4687
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
    var_15 = ((/* implicit */_Bool) var_11);
    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -173606617)) ? (var_6) : (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) -6089570008566830077LL))));
        var_17 -= ((/* implicit */signed char) ((arr_0 [i_0]) >= (arr_0 [i_0])));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_18 = min((((((/* implicit */_Bool) -897314384)) ? (7988643695935532402ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31236))))), (((/* implicit */unsigned long long int) (short)-31257)));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) (signed char)-106))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 1; i_4 < 17; i_4 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_5 = 3; i_5 < 16; i_5 += 3) 
                    {
                        arr_16 [i_4] [17U] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)47772)) ? (((((/* implicit */_Bool) 6089570008566830056LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)74)))) : (((/* implicit */int) ((short) -6089570008566830059LL))))));
                        var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 6089570008566830046LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_7 [i_2] [i_2])))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_0 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4))))))));
                        arr_17 [i_5] [i_4] [i_3] [i_4] [i_2] = ((/* implicit */short) max((((/* implicit */long long int) arr_7 [i_2] [i_5])), (((((/* implicit */_Bool) min((-6089570008566830065LL), (arr_15 [(signed char)11] [7LL] [i_4] [i_3])))) ? (-6149843937072925899LL) : (((/* implicit */long long int) var_6))))));
                    }
                    for (signed char i_6 = 4; i_6 < 19; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_1)), ((~(12835276599379992200ULL))))))));
                        var_22 -= ((/* implicit */short) (((!(((/* implicit */_Bool) (short)2708)))) ? (max((2501331866U), (3799060747U))) : (min((((/* implicit */unsigned int) (unsigned short)17745)), (3901334071U)))));
                    }
                    for (int i_7 = 2; i_7 < 17; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) (!((_Bool)1)));
                        arr_23 [i_2] [i_3] [i_4] [i_3] [(signed char)18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3580897279120640736LL)) ? (max((((/* implicit */unsigned long long int) (signed char)124)), (((5174534616413477472ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7 + 1]))))))) : (((/* implicit */unsigned long long int) ((int) arr_9 [i_4 + 2] [i_4 + 3])))));
                        var_24 = ((/* implicit */long long int) ((unsigned long long int) -6149843937072925899LL));
                        arr_24 [i_2] [i_4] [i_4] [2U] = ((/* implicit */long long int) 1699343263);
                    }
                    /* vectorizable */
                    for (long long int i_8 = 1; i_8 < 18; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) arr_27 [i_8] [i_8 + 1] [i_8] [i_4 + 3] [i_4 + 1] [i_2]);
                        var_26 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-852))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_18 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_9] [i_9]), (arr_18 [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_4] [i_4])))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
                                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((6149843937072925899LL) << (((((var_11) + (651775156))) - (7))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1878496412)) ? (((/* implicit */int) (short)833)) : (((/* implicit */int) (signed char)-22)))))))) ? (((unsigned long long int) var_0)) : (max((arr_28 [i_4 + 3] [i_4] [i_4 - 1] [i_4 + 3]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (var_4))))))));
                            }
                        } 
                    } 
                    arr_35 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */short) (+(arr_25 [i_4 + 2] [i_4 + 1] [10LL] [i_4] [i_4 + 2])));
                }
            } 
        } 
    } 
}
