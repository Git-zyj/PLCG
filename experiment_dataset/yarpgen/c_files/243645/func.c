/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243645
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
    var_13 = ((/* implicit */signed char) min((((/* implicit */int) var_4)), (((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))));
    var_14 = ((/* implicit */short) (((-(((/* implicit */int) var_7)))) | (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                                arr_11 [i_0] [i_1] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] [i_4]);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((+(((/* implicit */int) (short)-29067)))) + (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_2 + 2] [i_1])) <= (((/* implicit */int) var_12))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */int) var_11)), (((arr_3 [i_2]) / (((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) arr_3 [i_2 + 2])) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_5] [i_6]))));
                            arr_18 [i_0] [i_0] [i_5] [i_0] &= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) (unsigned short)19283)) <= (((/* implicit */int) (short)15338))))), (min(((short)0), (((/* implicit */short) (_Bool)1)))))))));
                            var_17 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (((unsigned long long int) (short)0)))) ? ((~(((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 2])))) : (((/* implicit */int) ((((/* implicit */int) (short)-17674)) == (((((/* implicit */int) (signed char)89)) - (((/* implicit */int) (signed char)14)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
