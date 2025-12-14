/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231175
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
    var_19 = ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) 0)) : (14U));
    var_20 = max((((unsigned int) var_11)), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) var_1)), (var_12))) != (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [(unsigned short)4] [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_0]))) <= (arr_4 [i_2] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((signed char) var_4))), (((((/* implicit */_Bool) arr_15 [i_4] [i_1])) ? (134152192U) : (((/* implicit */unsigned int) -15))))))) ? ((~(((arr_9 [i_4] [i_2] [i_2]) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)115)))))) : (((((/* implicit */int) ((short) arr_14 [i_4] [i_4]))) * (((/* implicit */int) var_7))))));
                                arr_16 [i_4] [i_1] [i_4] = ((/* implicit */short) arr_5 [i_3] [i_0]);
                                var_22 ^= ((/* implicit */unsigned int) ((((arr_4 [i_0] [i_0]) << (((arr_4 [i_0] [i_4 + 3]) - (303678225U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) > (1828237668U)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                arr_24 [i_6] [i_5] [i_2] [i_5] [i_0] = ((/* implicit */unsigned int) 7078686377662236724ULL);
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_22 [i_5] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]), (((/* implicit */unsigned short) arr_14 [i_5] [i_1]))))) ? (max((arr_11 [i_2] [i_6 + 1]), (((/* implicit */unsigned int) arr_19 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_5])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -18)) ? (max((((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_0])), (var_0))) : (((/* implicit */int) arr_18 [i_5] [i_2] [i_1] [(unsigned short)13])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_24 += ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)14])))) ? (max((((/* implicit */int) arr_25 [i_7] [i_7] [i_0] [i_0])), (7))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_23 [(short)7] [i_7] [(short)5] [i_0] [i_0] [i_0] [8U]))));
                                var_25 ^= ((/* implicit */unsigned long long int) ((unsigned short) ((short) -2594658629823497563LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
