/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47138
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((max((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_1])), (max((((/* implicit */int) (unsigned char)128)), (-1280926798))))), (((/* implicit */int) ((((/* implicit */int) ((short) (short)-13795))) >= (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [2] [i_1])) : (((/* implicit */int) var_3))))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2054))))))))) < (max((((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) min((arr_13 [i_0] [i_2] [i_2] [(unsigned char)11] [i_0] [i_4]), (arr_13 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [(unsigned char)1] [(_Bool)1]))))))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((short) var_8))))) < (max((-6770500441226607355LL), (((/* implicit */long long int) arr_2 [i_0] [(unsigned char)5]))))));
                                var_19 = ((/* implicit */short) (-((+((-(((/* implicit */int) arr_11 [i_2] [i_2] [11LL]))))))));
                                arr_14 [11LL] [i_2] [(unsigned char)6] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned char) arr_12 [i_2] [i_2] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_7 = 1; i_7 < 13; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_12 [i_5] [i_9] [i_5]))) >= ((~(((/* implicit */int) arr_3 [i_7 + 1] [i_8] [i_9]))))));
                                var_21 = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */_Bool) min((var_22), (((((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))))), (var_15)))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) arr_13 [i_5] [i_5] [(unsigned char)4] [i_6] [i_6] [i_6])))))) >= (((long long int) var_11)))))))));
                var_23 ^= ((/* implicit */int) var_0);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) (_Bool)1)) * (243043814))) : ((+(((/* implicit */int) var_10))))))) ? (max((((/* implicit */int) var_13)), ((+(((/* implicit */int) var_4)))))) : (((/* implicit */int) var_6)))))));
}
