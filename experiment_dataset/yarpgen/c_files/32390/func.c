/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32390
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0 - 1] [10ULL] = ((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0] [i_1]));
                arr_5 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((short) ((int) 4157421188U))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (signed char)77))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_3 + 1] [i_2] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */long long int) arr_10 [i_0] [11ULL] [i_0] [i_3 + 3])) : (2100528671315876608LL))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)52993)) || (((/* implicit */_Bool) 1776257725)))))))));
                                var_14 ^= ((/* implicit */unsigned long long int) (~(max((((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_4)))), (((/* implicit */int) var_1))))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) 18050657982112349919ULL);
                                var_15 *= ((/* implicit */unsigned int) ((long long int) (signed char)49));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17784)) ? (872161166U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45731)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1484518582U)) ? (4157421182U) : (1134087156U))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */int) (short)31421)) : (((/* implicit */int) var_4))))))))) : (2100528671315876606LL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)177))));
    var_17 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)36865)))) + (2147483647))) >> (((((/* implicit */int) ((unsigned short) (unsigned short)51971))) - (51957)))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) var_11)) : (max((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_10))))), (max((1776257722), (((/* implicit */int) var_0))))))));
    var_19 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (7582936547689348831ULL)))))) ? (((max((1934781500037817374ULL), (((/* implicit */unsigned long long int) (unsigned short)32767)))) >> (((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) var_5)))) + (110))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (32767U)))) ? (((/* implicit */int) ((unsigned char) 14224540943662414121ULL))) : (((/* implicit */int) (signed char)-26))))));
}
