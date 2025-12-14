/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31289
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-311875626) * (((/* implicit */int) var_11)))) | (((/* implicit */int) (unsigned char)158))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_11))))) : (((((((/* implicit */int) var_5)) != (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) < (((/* implicit */int) var_4)))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) | (var_2)))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((arr_1 [i_1]) >> (((arr_1 [i_0]) - (735241581U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_15)))))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) ^ (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0])))))))));
                arr_7 [(unsigned char)19] [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) -6351980197152678209LL)))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) ^ (var_7)))) ? (((/* implicit */unsigned long long int) ((((-1431401908) + (2147483647))) >> (((/* implicit */int) (unsigned char)24))))) : ((~(0ULL))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    arr_17 [i_3] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)40153)))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_20 += ((/* implicit */long long int) ((arr_22 [i_2] [i_3] [i_4] [i_5]) ? (((/* implicit */int) ((((/* implicit */long long int) 3932864553U)) != (max((((/* implicit */long long int) var_12)), (-6351980197152678209LL)))))) : (((((/* implicit */int) ((((/* implicit */_Bool) 816693829U)) && (((/* implicit */_Bool) 4367988590663694917LL))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_6] [i_2] [i_2] [i_4] [i_2] [i_2])))))))));
                                var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_4]))))))) ? (((/* implicit */int) ((((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned char)0)))) >= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) var_4))))))) : (((((/* implicit */int) ((((/* implicit */int) arr_12 [i_2])) != (((/* implicit */int) arr_11 [i_2]))))) & (((((/* implicit */int) (unsigned char)54)) & (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_23 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_12 [i_2])), (((((/* implicit */unsigned long long int) arr_13 [i_3] [i_4])) | (var_7)))));
                    var_22 = (_Bool)1;
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_1), (var_3)));
}
