/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40595
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 4095U)) ? (1701499646) : (((/* implicit */int) (_Bool)0)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_11 *= ((/* implicit */unsigned char) var_4);
                                var_12 ^= ((/* implicit */int) (unsigned char)187);
                                var_13 = ((/* implicit */int) ((unsigned long long int) 8040800701209984896LL));
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)109)), (-1765051027868206151LL))))));
                                var_15 *= ((/* implicit */unsigned char) ((signed char) (-((+(((/* implicit */int) (unsigned char)240)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_16 ^= ((/* implicit */unsigned short) ((unsigned long long int) max((min((var_3), (((/* implicit */long long int) (unsigned char)61)))), (((/* implicit */long long int) 1701499646)))));
                        arr_19 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (unsigned short)0);
                        var_17 = ((/* implicit */unsigned int) max(((+(arr_16 [i_1 - 1] [i_2] [i_2] [14ULL] [i_5]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_3))))))));
                        var_18 = ((/* implicit */int) min((var_18), (((int) (short)-23231))));
                        var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65525))))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) (unsigned char)0))));
                    }
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((((/* implicit */long long int) ((2594235878U) | (((/* implicit */unsigned int) -2039971146))))), (6167978285570570430LL))))));
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)0))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        for (int i_7 = 1; i_7 < 21; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)109)) + (((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) (unsigned char)69)) : (1469309696))))) / ((-(((/* implicit */int) ((unsigned char) -2337430109134078567LL)))))));
                    arr_28 [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 458215856)) ? ((+(var_8))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0)))))))) ? (var_3) : (((((0LL) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6] [i_7] [i_8]))))) % (arr_20 [i_8])))));
                    var_23 = min((-1997098897894688363LL), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)23231))) + (6018324361522859512LL)))) ? (arr_8 [i_7] [i_7 - 1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)68))))))));
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37565))) % (-1LL)));
}
