/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22813
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
    var_15 = ((/* implicit */unsigned long long int) var_0);
    var_16 ^= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))))) : (var_13));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 &= ((/* implicit */signed char) (((-(((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) & (var_5)))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) var_0)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_1)), (min((((/* implicit */int) (_Bool)1)), (-11))))), ((+(((int) var_4))))));
        arr_4 [i_0] = ((/* implicit */long long int) var_11);
        arr_5 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 4; i_3 < 11; i_3 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) ((short) ((int) 1229099457U)));
                    var_19 += ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)125)), ((unsigned short)2047))))));
                    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_6)))))) ? ((-(var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((unsigned int) -11)) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_0)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_4 = 2; i_4 < 24; i_4 += 3) 
    {
        arr_16 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_14)))) || (((/* implicit */_Bool) (~(max((var_6), (((/* implicit */unsigned int) var_4)))))))));
        var_22 ^= ((/* implicit */unsigned int) var_10);
        arr_17 [i_4] &= var_0;
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((unsigned short) var_7))) : (((/* implicit */int) var_8))))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6))))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned long long int) var_3)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)134)), ((short)5368)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_5))))))))));
                                arr_36 [i_10] [i_5] [i_6] [i_5] [i_4] = min((var_4), (((/* implicit */unsigned char) var_11)));
                                var_26 -= ((/* implicit */unsigned int) (-((+(var_12)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) var_5)))), ((~(var_14))))))));
    }
}
