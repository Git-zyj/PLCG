/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53685
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_10 = var_1;
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) ((((((unsigned int) (short)9912)) >> (((arr_11 [i_1] [i_1] [i_2 + 1]) + (1429972838))))) / (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65526)))))));
                                var_12 = ((/* implicit */unsigned long long int) ((unsigned short) (~(max((2147483647), (((/* implicit */int) (_Bool)1)))))));
                                var_13 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)112)) ? (var_0) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((/* implicit */int) (short)-4243)) : (-2147483644)))) & ((((_Bool)1) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4131891182U)) ? (2147483647) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_4)) ? (3134434247U) : (arr_9 [i_0] [i_1] [i_2] [(signed char)1] [i_2] [(_Bool)1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                                var_15 = ((/* implicit */signed char) ((long long int) ((unsigned int) ((unsigned char) var_1))));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (max((((((/* implicit */_Bool) var_6)) ? (arr_6 [i_6] [(signed char)0] [i_6]) : (-6777134971404319048LL))), (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((signed char) 5888713020439154870LL));
    var_18 = ((/* implicit */signed char) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (((signed char) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            for (unsigned int i_9 = 4; i_9 < 13; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        for (int i_11 = 2; i_11 < 13; i_11 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)112))) | (4289138638524997639LL))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (_Bool)1))) + (((/* implicit */int) (short)-32758))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_26 [i_9 + 2] [i_9 + 2] [i_8] [i_9]))) ? (((/* implicit */long long int) ((min((2147483647), (arr_11 [i_7] [(unsigned char)7] [i_9]))) + (((/* implicit */int) min((arr_21 [i_8]), (((/* implicit */unsigned char) var_2)))))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((long long int) arr_30 [i_7] [i_7] [i_8] [i_8] [i_9 - 2]))))));
                }
            } 
        } 
    } 
}
