/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206125
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
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_6 [i_2] [i_1] [i_1] &= ((/* implicit */int) (unsigned char)0);
                    var_16 = ((/* implicit */unsigned long long int) (unsigned char)0);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_7 [i_0] [i_1] [i_1] [i_3] [i_3] [i_0])))) ? (((/* implicit */int) (unsigned char)255)) : (arr_2 [i_0] [i_0]))), (((((_Bool) arr_9 [i_0] [i_2] [i_2] [i_2])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) 4171645107U)) ? (((/* implicit */int) (unsigned short)14506)) : (((/* implicit */int) (unsigned short)14514))))))));
                                arr_12 [i_2] |= ((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1 + 3]);
                                var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */unsigned long long int) var_14)) : (var_5)))) ? (arr_11 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) == (11079099109182582542ULL))))))), (((/* implicit */unsigned int) var_9))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_4 [i_1 - 2] [i_4 - 2] [i_1 - 2] [i_0 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45577))))) : (((/* implicit */unsigned long long int) (-(472793563))))));
                                var_20 = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_3] [i_4 + 4] [i_0] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (-993578736)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1896866434)) ? (((/* implicit */int) (unsigned char)21)) : (var_14)))) : (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (1152780767118491648ULL))))));
}
