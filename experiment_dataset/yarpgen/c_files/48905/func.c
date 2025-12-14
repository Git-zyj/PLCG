/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48905
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
    for (signed char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 4])) ? (((/* implicit */int) arr_3 [i_0 + 4])) : (((/* implicit */int) arr_3 [i_0 + 4]))))) == (max((var_4), (arr_4 [i_1 - 3] [i_0 + 2] [i_1])))));
                var_15 |= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) || (((/* implicit */_Bool) arr_1 [i_0 + 4]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0 + 4])) : (((/* implicit */int) arr_1 [i_0 + 4])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_16 = ((((((/* implicit */int) arr_6 [17U] [i_1] [i_2] [i_0 + 4])) * (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2] [i_1 - 2])))) + (((((/* implicit */int) arr_6 [i_0] [i_1] [10LL] [i_0 - 2])) * (((/* implicit */int) arr_5 [i_0 - 3] [i_1] [i_1 + 2])))));
                            arr_11 [i_2] [i_1] [i_2] [19] [i_1] |= ((/* implicit */unsigned short) ((unsigned int) arr_10 [i_1 - 1]));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (int i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) arr_4 [i_5] [i_1 - 4] [i_1 - 4]);
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0 - 2] [i_1 + 1] [i_6 - 1])) ? (arr_18 [i_0] [i_0 + 2] [i_1 - 3] [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10933)))))) ? (min((((/* implicit */long long int) arr_12 [i_0 - 3] [i_1 - 2] [(short)2] [i_5])), (((((/* implicit */_Bool) arr_13 [i_6] [(signed char)0] [i_4])) ? (arr_4 [i_0 - 3] [i_1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4] [i_6] [i_4] [i_1])))));
                                var_19 = ((/* implicit */long long int) ((arr_17 [i_0] [i_6 - 1] [i_6] [i_6 - 1] [6U] [i_5]) < (((((((/* implicit */int) (short)10933)) != (((/* implicit */int) var_8)))) ? ((+(((/* implicit */int) (unsigned short)39119)))) : (((/* implicit */int) arr_6 [i_0] [i_6 - 1] [i_1 - 3] [i_0 - 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (short)32743);
    var_21 = ((/* implicit */unsigned char) var_6);
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))))), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (var_8))))) : (((((/* implicit */_Bool) var_9)) ? (878527246U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
}
