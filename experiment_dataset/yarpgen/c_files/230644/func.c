/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230644
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */unsigned long long int) 1465654310))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned char)84))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_6)))))))) ? ((((((-(((/* implicit */int) (unsigned char)84)))) + (2147483647))) >> ((((-(var_10))) + (7550766066591228108LL))))) : ((~((-(((/* implicit */int) (unsigned char)95))))))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((((((/* implicit */_Bool) (unsigned char)160)) ? (var_9) : (((/* implicit */int) var_1)))) <= (((((/* implicit */_Bool) (unsigned short)16867)) ? (((/* implicit */int) (short)-27007)) : (((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */int) (unsigned short)32659))))))) : (((((((/* implicit */_Bool) var_5)) ? (var_16) : (var_16))) * (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)0))))))))))));
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (unsigned short)21730)) : (1707933305)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)95))))) : ((+(((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1898868582)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21733))) : (var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10941))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (var_15))))) : (((((/* implicit */_Bool) ((var_15) ^ (((/* implicit */int) var_18))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) 4361405665304845134LL)) ? (var_8) : (var_15))))));
    var_22 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)9))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)117)) || (((/* implicit */_Bool) var_18))))) : (((((/* implicit */_Bool) var_6)) ? (var_17) : (-760900739)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] = (+((-((+(((/* implicit */int) arr_0 [i_1])))))));
                    var_23 = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [9ULL]))) : (arr_5 [i_0] [i_1]))) | (((/* implicit */long long int) ((((/* implicit */int) (signed char)117)) - (((/* implicit */int) arr_2 [i_0] [i_1])))))))));
                }
            } 
        } 
    } 
}
