/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240299
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
    var_19 = ((/* implicit */unsigned short) (((-((~(((/* implicit */int) (_Bool)1)))))) >> ((((~(((int) (_Bool)1)))) + (32)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_2))));
                    arr_8 [(_Bool)1] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) (!((_Bool)1)));
                    arr_9 [i_0 - 1] [i_0] [(_Bool)1] = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (unsigned short)35330)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 2) 
    {
        for (long long int i_4 = 2; i_4 < 22; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        var_21 += ((/* implicit */short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)246)) | (((/* implicit */int) var_1)))))))) ? ((~(var_4))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
                        var_22 ^= ((/* implicit */_Bool) (+((~(((/* implicit */int) (signed char)127))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) min((((/* implicit */int) var_16)), ((-(var_15)))))) != (18U)));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)12))));
                        arr_23 [i_7] [i_5] [i_5] [i_3] = ((/* implicit */_Bool) var_14);
                        var_25 = max((((/* implicit */unsigned long long int) ((signed char) (_Bool)1))), (((max((var_10), (((/* implicit */unsigned long long int) (_Bool)1)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned char) (_Bool)1)))))))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> ((((+(((/* implicit */int) (unsigned char)103)))) - (78)))));
                        var_27 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) 2015086398U)) ? (3225462768U) : (var_12))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        arr_27 [i_5] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))) : ((-(var_10)))));
                        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(251424548))))));
                    }
                    for (short i_9 = 1; i_9 < 22; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_15), (var_9)))), (((2U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_17)))))))) : (((/* implicit */int) var_18)))))));
                        var_30 -= ((/* implicit */_Bool) min(((((_Bool)1) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min(((short)-8748), (((/* implicit */short) var_11))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54971)))))));
                        var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */_Bool) (unsigned char)96)) ? ((+(10ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) != (var_15))))))));
                    }
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_2))) != (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))) * ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (2219736109743414267LL)))))))))));
                }
            } 
        } 
    } 
}
