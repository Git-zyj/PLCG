/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20111
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_10 -= ((/* implicit */unsigned short) (_Bool)1);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4 - 1] [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_2 [i_4 + 2] [i_0])))) ? (((((/* implicit */_Bool) (signed char)-113)) ? (arr_2 [i_4 - 1] [i_0]) : (((/* implicit */unsigned long long int) 1467811374800544857LL)))) : (max((arr_2 [i_4 + 1] [i_0]), (arr_2 [i_4 - 2] [i_0]))));
                                var_11 = ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_5 = 4; i_5 < 22; i_5 += 4) 
                {
                    var_12 = ((/* implicit */short) ((((((_Bool) var_3)) ? (max((-131941453552216882LL), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) (+(-573996824)))))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)103)))));
                    var_13 -= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) -131941453552216888LL)) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)8)))) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])))));
                    var_14 = ((/* implicit */short) ((1) >= (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */long long int) (unsigned short)14153);
                                var_16 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (36028797018963967LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (2431585393192407520LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-113)))))) ? (((((/* implicit */_Bool) 6094161937454769539LL)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (signed char)-75)))) : (((/* implicit */int) (_Bool)1))))) : ((~(5595484042415754226LL)))));
    var_18 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(1008806316530991104LL))))));
    var_19 = ((/* implicit */signed char) var_8);
}
