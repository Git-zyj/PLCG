/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222425
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
    var_14 = ((/* implicit */unsigned short) var_11);
    var_15 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 4; i_2 < 17; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3 - 1] [i_2] [i_1] [(unsigned short)4] |= ((/* implicit */_Bool) (signed char)-64);
                                arr_16 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (short)-6487)) + (6502)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        {
                            arr_22 [i_0] [i_5] [(signed char)9] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (signed char)109)))) * (((/* implicit */int) ((_Bool) var_5)))));
                            arr_23 [i_0] = ((/* implicit */unsigned int) arr_20 [i_0] [i_1] [i_5] [i_6] [i_1]);
                            arr_24 [2ULL] [i_1] = ((/* implicit */unsigned int) var_3);
                            arr_25 [i_0] = ((((((/* implicit */int) var_6)) << (((arr_3 [i_0]) - (1813161048U))))) != (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23324))) : (arr_14 [i_6] [12ULL] [i_5] [i_6] [12ULL]))) >= (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (3053173429U)))))));
                        }
                    } 
                } 
                arr_26 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned int) arr_5 [(unsigned short)16] [(unsigned short)16]))))) * (var_0))), (min((((/* implicit */unsigned long long int) arr_1 [i_0] [7ULL])), (var_0)))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    for (unsigned char i_8 = 3; i_8 < 20; i_8 += 4) 
                    {
                        {
                            arr_32 [i_0] [(unsigned short)2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_30 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 3])) ? (arr_14 [i_8 - 2] [i_8 - 2] [0ULL] [i_8 - 3] [18ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 3]))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)243)))))));
                            arr_33 [i_7] [i_8] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((unsigned int) (signed char)-86));
                            arr_34 [i_8] = ((/* implicit */_Bool) var_8);
                            arr_35 [i_8] [i_7] [i_1] [i_1] [i_8] = ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)255))))))) ? (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) arr_4 [i_1] [i_7])) : (((/* implicit */int) arr_4 [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_11 [i_8] [i_1] [i_7] [i_8])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_5 [i_0] [i_1]))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_1 [i_0] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_9 = 2; i_9 < 23; i_9 += 2) 
    {
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            {
                arr_42 [i_10] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((/* implicit */_Bool) (unsigned char)245)) ? (arr_40 [i_9 - 2]) : (3451434876U))) : (272340987U)))));
                arr_43 [(signed char)17] = ((/* implicit */unsigned char) (unsigned short)2480);
            }
        } 
    } 
}
