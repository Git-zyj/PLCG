/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216765
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */int) 756336009968661087LL);
                        var_14 *= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)12289)) <= (((/* implicit */int) (unsigned char)79))));
                        var_15 = ((/* implicit */unsigned char) (~(2246315658U)));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned short) (unsigned char)153);
        var_17 += ((/* implicit */long long int) (~(4294967288U)));
        var_18 = ((/* implicit */unsigned int) (unsigned char)79);
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((+(2855558231025447945LL))) : (((/* implicit */long long int) arr_10 [i_4] [i_4] [i_4] [i_4]))))), (((unsigned long long int) ((((/* implicit */_Bool) (short)11209)) ? (954269401611711676LL) : (((/* implicit */long long int) var_11))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            arr_18 [i_4] [i_4] [i_4] = ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65121))))), ((+(var_11))))) <= (min((1083351640U), (((/* implicit */unsigned int) arr_13 [i_5])))));
            arr_19 [i_4] [i_4] [i_5] = ((/* implicit */int) ((((long long int) -1616295218)) >= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)34)))))));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
    {
        arr_23 [i_6] [i_6] = ((unsigned short) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)64002)) > (-1372925838)))), (((((/* implicit */_Bool) 2987072967U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_7))))));
        var_20 ^= (((_Bool)1) ? (max((16129939335357234381ULL), (((/* implicit */unsigned long long int) (short)31941)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */signed char) min(((short)3985), ((short)-816)));
    }
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) & (((/* implicit */int) (short)-8617))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (short)-31942))) / (var_10)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) -7))) && (((/* implicit */_Bool) var_12))))) : ((+(((/* implicit */int) var_4))))));
}
