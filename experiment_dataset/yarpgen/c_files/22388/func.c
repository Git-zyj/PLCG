/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22388
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
    var_16 = ((/* implicit */_Bool) (~(var_1)));
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (5287802051054297509ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) ((var_8) ? (arr_3 [i_0]) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : ((-(var_12))))) >> (((((((/* implicit */_Bool) -2109122694)) ? (7048198559494995735ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))))) - (7048198559494995695ULL)))));
        arr_4 [i_0] = ((/* implicit */_Bool) var_12);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) 18238615060865577692ULL);
                        arr_13 [i_0] [i_1] [i_2] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_0))));
                        var_19 = ((/* implicit */unsigned short) var_5);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */int) var_7)) | (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_3)))))))));
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]))));
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            {
                arr_19 [i_4 - 1] [i_4 + 3] [i_5] |= ((/* implicit */_Bool) var_12);
                var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))), ((~(min((4280064143U), (((/* implicit */unsigned int) (_Bool)1))))))));
            }
        } 
    } 
}
