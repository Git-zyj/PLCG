/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237193
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned long long int) ((signed char) (unsigned short)44443));
                                arr_16 [i_0] [i_3 + 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (var_5)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)44451);
                        var_13 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 986677743U)) * (12024022738234847007ULL)));
                        arr_21 [i_0] [i_1] [i_1] [(signed char)11] [i_1] [i_5] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 1])) && (((/* implicit */_Bool) var_3))))), (min((arr_11 [i_0 + 1]), (arr_11 [i_0 - 1])))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        var_14 += ((/* implicit */unsigned char) 8785603129539308799ULL);
                        arr_26 [i_0] [i_1] [i_2] [i_6] [i_0] = var_2;
                        /* LoopSeq 2 */
                        for (signed char i_7 = 1; i_7 < 9; i_7 += 1) 
                        {
                            var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -291947418)) ? (arr_8 [10LL]) : (((/* implicit */unsigned long long int) 1998126717))))) ? (min((((/* implicit */unsigned int) arr_15 [i_0] [10LL] [6ULL] [i_2] [i_0] [i_6] [4LL])), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7 + 2] [i_1] [i_0 - 1])))))) ^ (var_2)))));
                            var_16 = ((/* implicit */long long int) ((arr_9 [i_0] [i_0 - 1] [i_7 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [(short)3] [i_7 + 3] [i_0] [i_0 + 1]))) : (((unsigned int) arr_9 [i_0] [i_0 - 1] [i_7 + 1]))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_11 [i_1])))))) <= (((/* implicit */int) arr_28 [i_0 + 1] [i_0 + 1] [i_7 - 1])))))));
                        }
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) 1934340043))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_12 [i_0 + 2])))) : (((((/* implicit */_Bool) arr_12 [i_0 - 1])) ? (-7389784139290203855LL) : (arr_12 [i_0 + 2])))));
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (var_4)));
                        }
                    }
                    arr_33 [1LL] [i_0] = ((/* implicit */unsigned short) (unsigned char)250);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(var_3))))));
    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))), (var_5)));
    var_22 += ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 14096717723591113825ULL))))) + (((/* implicit */int) ((((long long int) var_4)) <= (((((/* implicit */_Bool) 12024022738234846997ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_2))))))));
}
