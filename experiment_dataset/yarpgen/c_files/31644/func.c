/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31644
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
    var_12 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-10569)) ? (-3319883366434258826LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))))) ? (((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (3319883366434258821LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65519)) / (((/* implicit */int) (unsigned short)22105))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28801)))));
                    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1250919537)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (16383U))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)768)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */short) (((_Bool)1) ? (((long long int) (unsigned short)65535)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5371)))));
                        var_16 = ((/* implicit */long long int) (-(((((/* implicit */int) (_Bool)0)) & (-1188798158)))));
                        var_17 &= ((/* implicit */long long int) (_Bool)0);
                    }
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                    {
                        var_18 &= ((/* implicit */short) ((unsigned char) min((-1938550365), (((/* implicit */int) (short)-1)))));
                        var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 1602576547)) ? (-4106094144186765493LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))))), (((/* implicit */long long int) ((4294967291U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)595)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)60922)))));
                        var_21 += ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)60915)) / (((/* implicit */int) (unsigned short)65535))));
                    }
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) != (5006086588823876061LL))))));
                    var_23 = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) (short)1984)) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (signed char)122))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43000))) : (-5372643458869694543LL)))));
                }
            } 
        } 
    } 
}
