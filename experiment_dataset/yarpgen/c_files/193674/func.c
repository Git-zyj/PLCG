/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193674
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
    var_15 = ((/* implicit */int) var_12);
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) 902448655U))) ? (((3392518664U) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)61184)) : (((/* implicit */int) var_8))))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */_Bool) var_9);
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_17 *= ((/* implicit */unsigned short) 15049231432834226372ULL);
                            arr_11 [i_0] [i_1] [(unsigned short)9] [i_0] [i_2] [(unsigned short)9] = ((/* implicit */long long int) ((min((arr_6 [i_1 + 2] [i_3] [i_2 - 1] [i_2]), (((((/* implicit */_Bool) (signed char)-2)) && (((/* implicit */_Bool) 902448655U)))))) ? ((+(((/* implicit */int) min((var_2), (arr_3 [i_0] [i_1] [i_3])))))) : (((/* implicit */int) var_12))));
                            arr_12 [i_0] [i_3] [i_1] [i_1] [i_2] [i_1] &= (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_0])) ? (arr_10 [i_1]) : (((/* implicit */long long int) 902448655U))))), (max((var_1), (((/* implicit */unsigned long long int) var_12)))))));
                            arr_13 [i_1] [i_1 + 2] [i_2] [i_3] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1818866702)))) + (((2054943354U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        for (short i_6 = 3; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) var_11)))));
                                var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((signed char) var_11)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)24764)) : (((/* implicit */int) (signed char)40)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        {
                            arr_26 [i_0] [i_7] = ((/* implicit */unsigned long long int) -723829910);
                            var_20 |= min((arr_17 [i_8]), (((/* implicit */unsigned char) (!(arr_21 [i_1 + 1] [i_1])))));
                            var_21 -= ((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)24778)) | (((/* implicit */int) arr_9 [i_7] [i_1 - 2] [i_7] [i_8] [i_1] [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned char) var_13)), (var_4))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
