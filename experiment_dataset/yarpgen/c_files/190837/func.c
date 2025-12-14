/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190837
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
    var_18 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 3275378226U)) ? (((/* implicit */unsigned int) var_10)) : ((+(0U)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_11 [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)37)))))))), (((long long int) ((((/* implicit */_Bool) var_6)) ? (arr_9 [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                                var_20 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_0] [i_0 + 1] [i_0 + 1] [(unsigned char)10] [i_0])), (var_0))))));
                                arr_15 [(unsigned short)4] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_1 [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 2; i_5 < 13; i_5 += 1) 
                {
                    for (unsigned char i_6 = 3; i_6 < 15; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 3; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_21 += (~(((((_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_21 [11LL] [11LL] [i_6] [i_7])) <= (((/* implicit */int) arr_5 [i_1] [14LL])))))) : (min((3275378226U), (1019589069U))))));
                                arr_25 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_14))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                {
                    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)45))));
                    var_23 ^= ((/* implicit */long long int) max(((unsigned char)72), ((unsigned char)196)));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        for (short i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            {
                                arr_37 [i_8] [i_9] [i_9] = ((/* implicit */long long int) min((177869495), (((/* implicit */int) arr_26 [i_8]))));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_29 [(unsigned short)3] [i_9] [i_8]))) ? ((+(((((/* implicit */int) var_16)) * (((/* implicit */int) var_13)))))) : ((-(((/* implicit */int) max((((/* implicit */short) var_16)), (var_9))))))));
                                var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_32 [i_12]), (arr_32 [i_9]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
