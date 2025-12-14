/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44286
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (signed char)-118)), (var_4))) >> (((max((((/* implicit */unsigned long long int) 70368744177663LL)), (5324061035899480431ULL))) - (5324061035899480407ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned char)209))))))) : (min((((/* implicit */unsigned long long int) -9223372036854775806LL)), (18446744073709551615ULL)))));
                    var_17 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)121))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((((/* implicit */_Bool) 16995375250261491853ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)1)))), (((/* implicit */int) (unsigned short)60656))))) * ((-(((((/* implicit */long long int) 1340599875)) / (-5994393146573377898LL)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (signed char i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            {
                var_19 &= ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)65535)))) & (((((/* implicit */_Bool) (short)-19972)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))) : (7671224403157484650ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
                arr_10 [i_4] [(short)8] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29))) : (var_12)))) ? (((((/* implicit */_Bool) (short)15179)) ? (1923143045U) : (4150416723U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19242))))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 1451368823448059763ULL))));
                /* LoopNest 3 */
                for (unsigned char i_5 = 4; i_5 < 20; i_5 += 1) 
                {
                    for (signed char i_6 = 3; i_6 < 20; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 1) 
                        {
                            {
                                arr_19 [i_5] = ((/* implicit */int) (-(min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)30)) : (((/* implicit */int) (short)2048)))))))));
                                var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(16995375250261491853ULL)))))))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 1451368823448059747ULL)) ? (((/* implicit */int) (unsigned char)2)) : (var_15))) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) == (-19LL)))))))));
                                arr_20 [i_3] [i_4] [i_4] [i_4] [i_4] [i_7] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_11)) ? (var_15) : (((/* implicit */int) var_14))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((536870911LL) | (((/* implicit */long long int) var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) : (((unsigned long long int) ((((/* implicit */_Bool) 2665677186U)) && (((/* implicit */_Bool) -3532605267967835380LL)))))));
    var_24 = ((/* implicit */long long int) 1U);
}
