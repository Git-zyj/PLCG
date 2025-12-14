/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23074
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
    var_20 = ((/* implicit */unsigned char) (((((+(var_12))) & (((((/* implicit */_Bool) var_4)) ? (var_12) : (var_12))))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) var_1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_8)))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) var_17))) / (var_15))) >> ((((~(((/* implicit */int) var_14)))) + (39))))) << (((((((((/* implicit */int) var_4)) + (((/* implicit */int) var_14)))) & (((((/* implicit */int) var_4)) + (((/* implicit */int) var_14)))))) - (106)))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((((/* implicit */int) var_1)) << (((((((/* implicit */int) var_16)) << (((((/* implicit */int) var_13)) - (196))))) - (32243698))))) ^ (((/* implicit */int) ((var_15) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_2))))))))))))));
                    arr_7 [i_0] [i_1] [i_0] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (max((var_18), (var_15))))) << (((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10))) + (((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_13))))))) - (79LL))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((5136413194705657014LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))))) ? (((var_2) % (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) var_9)) ? (var_18) : (var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_19))) >= (var_18)))))))) : (((((((/* implicit */long long int) ((/* implicit */int) var_17))) / (var_10))) + (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_15 [(unsigned char)3] [0LL] [i_1] [(unsigned char)0] = ((/* implicit */long long int) min((((((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_16))))) - (((((/* implicit */int) var_13)) + (((/* implicit */int) var_16)))))), ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (var_12))))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_16))))) % (((((((/* implicit */_Bool) var_17)) ? (var_18) : (var_2))) | (min((var_15), (((/* implicit */long long int) var_7))))))));
                                var_24 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_8)))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_16)) - (236)))))) == (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_15)))))) % (((/* implicit */int) var_11))));
                                arr_17 [i_0] [i_2] [i_2] [(unsigned char)13] [6LL] [6LL] [i_1] = (((-9223372036854775807LL - 1LL)) + (3885273184378290371LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
