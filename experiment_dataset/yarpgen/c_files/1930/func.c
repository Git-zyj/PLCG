/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1930
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
    var_11 = ((/* implicit */long long int) 3935821395U);
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) (signed char)127);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) var_9);
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (signed char)-65))));
                    }
                } 
            } 
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) var_0)))))))));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (short)32766)) : (((/* implicit */int) (short)-32763))));
        }
    }
    for (int i_4 = 3; i_4 < 15; i_4 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-32766)))) : (((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)255)))))))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (short)32766))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    {
                        arr_20 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */long long int) var_6)) : (-3484104585368368855LL)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) -808577673)) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5692)) ? (((/* implicit */unsigned int) -771408459)) : (2677413585U))))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)58103))));
                        var_20 = ((/* implicit */unsigned int) (unsigned short)65535);
                        arr_21 [i_4] [i_5] [i_4] [i_5] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_6);
                        arr_22 [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned short)65526)) ? (2337709871U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8796025913344LL)))) ? (min((((/* implicit */unsigned int) (short)-32763)), (2337709871U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-32755)) : (((/* implicit */int) (short)32766)))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (signed char i_9 = 2; i_9 < 16; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) (signed char)-1)) : (1235522916)));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)32755))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))) : (var_6)))))) ? ((((!(((/* implicit */_Bool) (signed char)-80)))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63)))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_11 = 2; i_11 < 15; i_11 += 1) 
        {
            var_23 ^= ((/* implicit */unsigned int) var_1);
            var_24 = ((/* implicit */unsigned int) (signed char)-35);
        }
        var_25 = var_6;
    }
}
