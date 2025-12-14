/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18993
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_1 - 1] [i_2 - 2]) | (((/* implicit */long long int) ((((/* implicit */_Bool) (short)30776)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)143)))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-30766))))) : (((((((arr_4 [i_2 + 1] [i_1] [i_2 + 2]) + (9223372036854775807LL))) << (((((/* implicit */int) var_8)) - (41))))) << (((((((((/* implicit */long long int) ((/* implicit */int) var_15))) | (var_14))) + (4961761683406012966LL))) - (32LL)))))));
                    arr_9 [i_1] [i_1 + 1] [i_2] |= ((/* implicit */unsigned short) arr_5 [i_0] [i_0]);
                    arr_10 [i_1] [i_2] = ((/* implicit */unsigned char) (-(((((((/* implicit */int) (unsigned char)127)) & (((/* implicit */int) (short)30776)))) << ((((+(((/* implicit */int) (unsigned char)113)))) - (89)))))));
                    arr_11 [i_0] = ((/* implicit */unsigned char) -4778120894173637701LL);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_16 [3LL] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) var_2);
                                arr_17 [2LL] [i_1 - 1] [i_2] [i_0] [i_1 - 1] = ((/* implicit */signed char) var_12);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)196)) % (((/* implicit */int) (short)-30767))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)0))));
    var_17 = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (unsigned short)47950)) : (((/* implicit */int) (unsigned char)90))))))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (signed char i_6 = 4; i_6 < 11; i_6 += 2) 
        {
            {
                arr_23 [i_6] [(unsigned char)1] [i_5] = (((((((~(((/* implicit */int) (unsigned short)65535)))) * (((/* implicit */int) (short)30778)))) + (2147483647))) << (((max((((((/* implicit */int) var_10)) & (((/* implicit */int) (signed char)31)))), ((~(((/* implicit */int) (short)-30779)))))) - (30778))));
                arr_24 [7LL] [(unsigned char)6] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)12367)) >> ((((+(var_14))) + (4961761683406012985LL)))));
            }
        } 
    } 
}
