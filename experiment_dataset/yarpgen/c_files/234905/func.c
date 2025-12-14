/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234905
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) ((int) (signed char)52)))));
                    arr_8 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8796093022207ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194))) : (-5388414883138747778LL)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)56093)) : (((/* implicit */int) arr_4 [i_1 + 1] [i_0 + 1])))) : (((((/* implicit */_Bool) (short)26830)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)70))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 569486153)) ? (1209358163U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56093)))));
    var_15 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)5515)) ? (((3178822459U) << (((((/* implicit */int) (unsigned short)52333)) - (52330))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)2983)) : (((/* implicit */int) (unsigned char)96)))))))) : (8472648472758283689LL)));
    var_16 &= ((/* implicit */short) (+(var_12)));
}
