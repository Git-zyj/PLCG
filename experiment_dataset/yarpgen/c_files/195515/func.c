/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195515
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) min((8291665189370575739LL), (((/* implicit */long long int) (unsigned char)188))))) ? (((4611686018427387872LL) / (((var_9) - (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : ((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)204))) - (arr_6 [i_0] [i_0]))))));
                    var_17 = ((((/* implicit */_Bool) (unsigned char)188)) ? ((+(0LL))) : (((((((/* implicit */_Bool) var_2)) ? (-834676334782380286LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [0LL] [i_0]))))) - (-6204007648088177716LL))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3LL)) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)122))))) : (492817257502208389LL))))));
                        var_19 = var_15;
                        var_20 = ((((/* implicit */long long int) (-(((/* implicit */int) var_12))))) - (-7287063766655336743LL));
                    }
                }
            } 
        } 
    } 
    var_21 = ((((/* implicit */_Bool) (+(-834676334782380286LL)))) ? ((-(max((-6185533360931941398LL), (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7)))));
    var_22 = ((/* implicit */unsigned char) ((long long int) min((((((/* implicit */_Bool) -3LL)) ? (7537145278654445709LL) : (834676334782380285LL))), (((/* implicit */long long int) (unsigned char)246)))));
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            for (unsigned char i_6 = 3; i_6 < 17; i_6 += 3) 
            {
                {
                    arr_18 [i_4] [i_4] [i_6] = ((((/* implicit */_Bool) (+(16LL)))) ? (((long long int) var_7)) : (((((/* implicit */_Bool) -4611686018427387873LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)138))))));
                    var_23 = ((/* implicit */long long int) (~((+(((/* implicit */int) min((arr_12 [17LL] [9LL]), ((unsigned char)82))))))));
                }
            } 
        } 
    } 
}
