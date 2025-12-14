/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230739
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
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_11)) - (((((/* implicit */_Bool) ((var_5) - (((/* implicit */unsigned long long int) 0U))))) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) ((var_17) - (((/* implicit */unsigned int) var_19)))))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (3U))), (0U)))) : (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_16))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_11 [14LL] [(unsigned char)9] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((4294967288U), (4294967290U)))) ? ((+(((/* implicit */int) var_13)))) : (((var_13) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_12))))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((((((/* implicit */_Bool) 4294967267U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) ^ (((/* implicit */unsigned long long int) 4294967288U)))) > (min((((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_9))), (((/* implicit */unsigned long long int) var_13)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_18 [1LL] [1LL] = ((/* implicit */unsigned long long int) ((long long int) max((1997049449U), (((/* implicit */unsigned int) var_12)))));
                /* LoopNest 2 */
                for (signed char i_5 = 4; i_5 < 23; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(var_15)))) ? (var_17) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-5765)) + (2147483647))) << (((((/* implicit */int) var_10)) - (166)))))))), (4294967295U)));
                            var_24 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (unsigned char)159)) <= (var_19))));
                            arr_23 [i_3] [i_3] [i_3] [i_3] [2ULL] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_13 [i_6])) ? (var_17) : (((/* implicit */unsigned int) arr_17 [i_6])))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) 0ULL)))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_20 [i_3]))))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-54)) - (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_29 [i_3] [(unsigned short)1] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_12)), (((((((/* implicit */unsigned long long int) 12U)) + (var_9))) % ((+(var_8)))))));
                            arr_30 [i_3] [i_3] [i_8] [i_3] [i_3] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) min((3U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
