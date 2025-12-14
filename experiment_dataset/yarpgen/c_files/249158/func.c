/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249158
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
    var_14 = ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) min(((~(arr_1 [i_0] [(unsigned short)6]))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (short)-30410)), ((unsigned short)6264))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) max((var_10), (var_7))))))) ? (max(((~(((/* implicit */int) (unsigned short)31)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : (-23)));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_5)))))) / (((((/* implicit */_Bool) 12840755020064804727ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))) : (12840755020064804745ULL)))));
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)31))));
        }
        for (int i_2 = 1; i_2 < 12; i_2 += 3) 
        {
            arr_9 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)86)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 8575700778189589957LL)) || (((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 + 1]))))) : ((~(((/* implicit */int) var_8))))));
            arr_10 [i_0] [i_0] [i_2 - 1] = min(((short)22), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-92)) && (((/* implicit */_Bool) arr_7 [i_2] [i_2 + 3] [i_2 - 1]))))));
            arr_11 [i_0] [i_2] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (var_3))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)4384), (var_0)))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 3; i_3 < 14; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        arr_18 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) var_11)) % (((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_3] [i_2] [i_0] [i_4]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max(((short)-27878), (arr_7 [i_0] [i_0] [i_0]))))))));
                        var_17 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((short) var_11))) ? (min((((/* implicit */unsigned long long int) var_4)), (var_3))) : (((/* implicit */unsigned long long int) ((int) arr_16 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) var_5))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0] [i_2 + 3] [i_3 - 2])) + (((/* implicit */int) arr_4 [i_2 + 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned short)55221))))))) : (min((((/* implicit */unsigned int) arr_0 [i_3] [i_3])), (((unsigned int) var_2))))));
                    }
                } 
            } 
        }
        var_19 += ((/* implicit */int) ((5605989053644746889ULL) < (((((/* implicit */_Bool) (short)2)) ? (5605989053644746890ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_20 = ((/* implicit */signed char) min((min(((unsigned short)7880), (((/* implicit */unsigned short) var_10)))), (((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_0]))));
    }
}
