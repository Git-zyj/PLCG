/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204511
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_16 -= ((/* implicit */unsigned int) (unsigned char)80);
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) + (((/* implicit */int) ((max((((/* implicit */int) var_10)), (var_14))) >= (((((/* implicit */int) arr_8 [i_2 - 1])) >> (((4210790424126374976ULL) - (4210790424126374952ULL))))))))));
                    arr_9 [i_2] = (+(4294967295U));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    arr_18 [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_6)))) - (1218679003U))) + (((((/* implicit */_Bool) 4190569889U)) ? (((unsigned int) (unsigned char)63)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 4294967295U))))))));
                    var_18 = ((/* implicit */int) ((unsigned short) var_7));
                    var_19 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)17141)), (arr_3 [i_3] [i_3])));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_3);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11421457484853248924ULL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) & (2584126U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_11) : ((-2147483647 - 1)))))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_6)) : (3510607191U))), (((/* implicit */unsigned int) ((int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        for (int i_7 = 3; i_7 < 13; i_7 += 2) 
        {
            {
                arr_25 [i_7] [i_7 - 1] = ((/* implicit */int) (unsigned char)240);
                var_22 |= 2147483647;
                arr_26 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (short)32767))) && (((/* implicit */_Bool) ((unsigned char) (unsigned char)73)))));
            }
        } 
    } 
}
