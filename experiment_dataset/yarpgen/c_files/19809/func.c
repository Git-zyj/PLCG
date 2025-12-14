/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19809
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
    var_13 |= ((/* implicit */int) (unsigned char)255);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (~((-2147483647 - 1)))))))) ? (((((/* implicit */_Bool) (+(2147483647)))) ? (((/* implicit */int) ((-660791529122091466LL) != (((/* implicit */long long int) 2147483640))))) : (arr_10 [i_0] [i_1] [i_3] [i_3] [i_4] [i_3]))) : (((((/* implicit */_Bool) (short)-13608)) ? (((int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-13608)))))))));
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((2147483640) + (((/* implicit */int) (short)-13608)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    var_16 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned char) 3339797375688051102LL))), (((((/* implicit */unsigned int) 2147483629)) & (arr_8 [i_5])))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) | (660791529122091454LL)))) ? (((/* implicit */unsigned int) ((arr_15 [i_0] [i_1] [i_5]) ^ (-2147483647)))) : (((unsigned int) arr_9 [i_0] [i_1] [i_5] [i_0] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0] [i_0] [i_0 - 1]))))));
                    var_17 = ((/* implicit */unsigned int) 2147483646);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                var_18 -= (+((-(arr_8 [i_5]))));
                                var_19 = ((/* implicit */_Bool) arr_6 [i_6] [i_1] [i_5]);
                                var_20 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_0] [i_1] [i_5])))));
                                var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 660791529122091461LL)) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (9223372036854775807LL))) : (-660791529122091471LL)))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned int i_8 = 2; i_8 < 14; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) var_3);
                            arr_28 [i_0] [14LL] [i_0] &= ((/* implicit */unsigned long long int) (~((~(((((/* implicit */long long int) arr_11 [4U] [i_1] [i_8] [i_9] [i_1] [i_1] [i_1])) ^ (-660791529122091486LL)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_10 = 2; i_10 < 14; i_10 += 3) 
                {
                    for (unsigned char i_11 = 2; i_11 < 15; i_11 += 3) 
                    {
                        for (int i_12 = 0; i_12 < 17; i_12 += 1) 
                        {
                            {
                                var_23 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + ((-2147483647 - 1))))) * (min((((arr_14 [i_0] [i_1] [i_0] [i_11]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) arr_37 [i_0 + 1] [i_0] [i_10] [i_10] [i_10] [i_10 - 2] [i_11 - 1])))));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_25 [i_0] [i_1] [i_12])) : (((/* implicit */int) var_5)))) < (((/* implicit */int) var_7))))) : (((/* implicit */int) (((~(-2147483647))) > (((/* implicit */int) (signed char)-34)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
