/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236970
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_4)) - (32))))))));
    var_11 = ((/* implicit */long long int) var_1);
    var_12 = ((/* implicit */_Bool) (-(max((min((-8133298750820584719LL), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-1)))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? (((/* implicit */int) arr_11 [(short)1] [i_4] [i_2] [i_0] [i_4])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_2] [0LL] [i_4]))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (((unsigned long long int) var_1))))));
                                arr_16 [i_4] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
                            }
                        } 
                    } 
                    var_13 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_4 [(unsigned char)3] [i_1] [i_2])) : (((/* implicit */int) var_5)))))))) << (((((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) - (3225593694013225201ULL))));
                    var_14 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17006062423236953149ULL)) ? (((/* implicit */int) (short)31566)) : (((/* implicit */int) var_4))))) ? (arr_1 [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_0] [i_2] [i_2] [i_0])))))));
                    arr_17 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_2])) : (((/* implicit */int) (short)-18962))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (8544667458893453514LL) : (arr_18 [i_6] [i_5] [i_2] [i_1] [i_0])))) : (((unsigned long long int) var_8)))));
                                var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) var_7))) <= (max((8544667458893453514LL), (((/* implicit */long long int) (short)31566))))))), (var_1)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
