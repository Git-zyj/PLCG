/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215122
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [7ULL] [(unsigned char)0] = ((/* implicit */unsigned long long int) var_10);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_14 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned short) 1661328641))) ? (((/* implicit */unsigned long long int) (-(var_2)))) : (var_5))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) (unsigned char)51)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (var_6))))))));
                            var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_12 [i_3 + 2] [i_3 + 2] [i_2 - 1] [i_2 + 1]))) ? (((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 + 1] [i_2 + 1] [i_2 + 2])) ? (arr_12 [i_3 + 2] [i_3 + 1] [i_2 + 1] [i_2 + 1]) : (arr_12 [i_3 - 1] [i_3 + 2] [i_2 + 1] [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 1] [i_2 + 2] [i_2 + 2]))))))));
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -9223372036854775793LL)) ? (7172796204769760480LL) : (((/* implicit */long long int) ((/* implicit */int) (short)22737)))));
                            arr_15 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 2]))) : (var_2)))) ? (((((/* implicit */int) var_1)) << (((max((arr_12 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))) - (18446744073709551558ULL))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5)))))))));
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_6))) ? (max((36028797018962944ULL), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) (-(arr_2 [i_2 + 1] [i_2 - 1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2146658304)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 4294967278U))));
}
