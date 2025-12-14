/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229830
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_0] [11LL] [i_0] = ((/* implicit */_Bool) (signed char)56);
                                arr_13 [i_1] [i_1] [i_3 + 1] [i_3] [i_4 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */int) (signed char)-68)) + (2147483647))) << (((((((/* implicit */int) (signed char)-57)) + (73))) - (16))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) : (((long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)53832)) : (((/* implicit */int) (signed char)-66)))))));
                                var_17 = min((2274335494U), (((/* implicit */unsigned int) (short)-32749)));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_3]))))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5114616154894010179ULL))) : (18446744073709551615ULL))))))));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [0U]);
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5114616154894010179ULL)) ? (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) (unsigned short)19386)))) : (((/* implicit */int) (unsigned short)46149)))) : (((/* implicit */int) (short)32732))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        for (unsigned short i_6 = 3; i_6 < 15; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_25 [i_6] [i_6] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32749))))) ? (((((/* implicit */_Bool) (short)-32749)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64054))) : (2147221504ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16614)))));
                                arr_26 [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned int) (short)-32749)), (2020631790U)));
                                var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (unsigned char)255)))));
                            }
                        } 
                    } 
                    var_22 = ((885241823) < (((/* implicit */int) (unsigned char)63)));
                    var_23 ^= ((/* implicit */unsigned short) (unsigned char)192);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)77)) : (1327077293)));
}
