/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199181
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
    for (short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [22U] = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_4 [9ULL] [i_2]), (((/* implicit */int) var_6)))))));
                    arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0]))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((-430034359), (((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((unsigned long long int) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2])), (arr_9 [i_0] [i_1] [i_2] [(unsigned short)16])))) : (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) -430034368)), (1578244747574278040ULL)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [(unsigned short)3] [i_0] [i_0 + 1] [i_0] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((max((arr_14 [i_0] [15ULL] [15ULL] [i_0 - 1] [i_0] [(unsigned short)3]), (arr_14 [(short)2] [i_1] [(short)2] [i_3] [i_4] [i_4]))), (((/* implicit */int) var_0)))))));
                                var_19 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (+(-430034363)))), (min((var_2), (((/* implicit */unsigned long long int) arr_2 [i_0])))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18792)))));
                                var_20 = ((/* implicit */unsigned long long int) min(((((!(((/* implicit */_Bool) (unsigned short)51965)))) && (((/* implicit */_Bool) ((unsigned char) 0LL))))), (var_0)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) (unsigned short)0)))) : (((int) -3503067286587993616LL))));
    var_22 = ((/* implicit */short) var_5);
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) && ((!(((0LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)-20742)))))))));
}
