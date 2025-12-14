/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200291
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0)));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_13 *= min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_2 [(unsigned short)22])) : (arr_1 [i_0]))))))), ((unsigned char)183));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2673081214U)) ? (134217727) : (134217727)))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (arr_2 [i_1])))));
                            var_15 = ((/* implicit */signed char) min((arr_1 [i_3]), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_4)) << (((var_2) - (2788064879U)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_6);
    var_17 = ((/* implicit */unsigned short) var_5);
}
