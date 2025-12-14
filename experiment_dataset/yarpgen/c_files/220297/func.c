/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220297
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2] [i_3])) ? (2002014331920642569ULL) : (5405903134173306229ULL)))));
                            var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)71)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 383623247376886885LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)199))))) * (((2002014331920642572ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_11 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) var_16);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */long long int) arr_5 [i_1] [i_4] [i_5] [i_6]);
                                arr_20 [i_0] [i_1] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1012961633))));
                                var_19 = ((/* implicit */unsigned long long int) (short)-32);
                                arr_21 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(max((max((arr_18 [i_0] [i_1] [i_4] [i_5]), (((/* implicit */int) (unsigned char)214)))), (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) (unsigned char)57)))))))));
                                arr_22 [i_1] [i_1] = ((/* implicit */short) arr_8 [i_0] [i_1] [i_4] [i_5] [i_6]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((-472275034), (((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)68)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)49653))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (13861952566413217489ULL))))))));
}
