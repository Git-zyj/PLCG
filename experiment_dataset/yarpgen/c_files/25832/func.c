/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25832
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */int) (+((+(var_11)))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)2046)) | (((/* implicit */int) (unsigned short)63505))));
        var_14 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)2046), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2042))) : (var_7)))));
    }
    for (unsigned int i_1 = 3; i_1 < 8; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (max((var_3), (((/* implicit */unsigned int) (unsigned short)2046))))))) ? (((/* implicit */int) (unsigned short)63534)) : (1470886857)));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)253);
    }
    /* LoopNest 3 */
    for (unsigned int i_2 = 2; i_2 < 9; i_2 += 2) 
    {
        for (unsigned short i_3 = 2; i_3 < 8; i_3 += 1) 
        {
            for (unsigned short i_4 = 1; i_4 < 8; i_4 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_2 + 1] [i_3 - 2]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)2048)) - (268427264)))) : (var_11)));
                    var_17 = var_2;
                    var_18 = ((/* implicit */long long int) var_8);
                }
            } 
        } 
    } 
    var_19 *= ((unsigned short) var_5);
    var_20 = ((/* implicit */unsigned short) var_0);
}
