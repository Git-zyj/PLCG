/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31248
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
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 4024062897U)) ? (((/* implicit */unsigned long long int) (+(3479404454U)))) : (14095674451793513572ULL))));
                arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (var_4))))) <= (arr_1 [i_0 - 1])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) max((((unsigned long long int) 7U)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 3]))))))))));
                            arr_12 [i_0 + 4] [(unsigned char)15] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 + 3] [i_1] [i_2] [i_0] [i_1 - 3])) && (((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1] [i_1] [4LL] [i_1 + 1]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) -8461665449476395153LL)))))));
                            arr_13 [i_0] = 4294967295U;
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                {
                    for (int i_5 = 1; i_5 < 23; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_5] = ((/* implicit */unsigned long long int) ((-8461665449476395153LL) / (((/* implicit */long long int) 6U))));
                                var_18 = ((/* implicit */long long int) max((min((var_12), (((((/* implicit */unsigned long long int) 4294967295U)) / (var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6] [i_1 - 2] [(signed char)4]))) | (((((/* implicit */_Bool) (signed char)12)) ? (arr_9 [i_0] [i_1] [i_0] [(unsigned char)14] [i_0] [i_0]) : (var_6))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((unsigned short) ((((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32757))) : (8461665449476395152LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 3046425392U)))))))));
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) (short)-12771)), (4294967292U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 8461665449476395148LL)))))))) <= (var_0)));
}
