/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42939
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
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) (short)-8454)) ^ (((/* implicit */int) (unsigned char)0)))))), (min(((unsigned char)14), ((unsigned char)121)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_3)))) ? (max((6819845635560747193ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (8085786897343466322LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) max((var_2), (((/* implicit */short) (unsigned char)155))))) - (147))))))));
                arr_5 [i_0] = ((/* implicit */short) max(((+(((((/* implicit */unsigned long long int) 1179328028)) * (var_12))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) - ((((_Bool)1) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) var_6)))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_2] [i_1 + 2] [i_0] = ((/* implicit */unsigned short) 4773220658319216565ULL);
                                var_15 *= (((~(var_12))) == (5535882526612216273ULL));
                            }
                        } 
                    } 
                    arr_13 [i_0] = ((/* implicit */unsigned int) var_12);
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0]))));
                }
                arr_14 [i_0] [i_0] = var_8;
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 3; i_7 < 18; i_7 += 3) 
            {
                {
                    arr_22 [i_5] [i_5] = ((/* implicit */int) max(((short)504), (((/* implicit */short) (unsigned char)48))));
                    arr_23 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-62)) ? (var_3) : (var_1)))) : ((-(((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    {
                        arr_32 [i_5] [i_8] [i_9] [i_5] = ((/* implicit */short) ((unsigned long long int) (+((+(((/* implicit */int) (_Bool)1)))))));
                        arr_33 [i_5] [i_5] [i_5] [i_5] [i_10] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) (unsigned short)56087))))) ? ((~(((int) 18446744073709551615ULL)))) : ((+(((/* implicit */int) max(((unsigned char)48), (((/* implicit */unsigned char) (_Bool)0)))))))));
                        arr_34 [i_10] |= ((/* implicit */short) 1493638252U);
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (unsigned char)140))));
                    }
                } 
            } 
        } 
        var_19 -= ((/* implicit */_Bool) var_9);
        var_20 &= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43273))) | (((var_3) / (var_3))))) <= (((/* implicit */unsigned int) var_5))));
        var_21 += ((/* implicit */short) ((-2568832290952545903LL) + (((/* implicit */long long int) ((((/* implicit */int) ((signed char) 2824339401U))) % (var_5))))));
    }
}
