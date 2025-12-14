/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39943
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
    var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_4)), (var_9))) >> (((var_12) - (17188203563803299953ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)226), (((/* implicit */unsigned char) (_Bool)1)))))) : ((~(var_2)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [2U] [i_1] [(_Bool)1] [i_2] = ((/* implicit */short) (~(((/* implicit */int) var_3))));
                    var_16 = ((/* implicit */_Bool) (unsigned char)255);
                    arr_8 [i_0] [(unsigned char)7] = ((/* implicit */_Bool) min((min((959186767391815886ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))), (((/* implicit */unsigned long long int) (_Bool)1))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) arr_10 [(unsigned char)16]);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 16; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned short) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_7] [i_7] [i_7] [i_7]))) * (var_12))), (((/* implicit */unsigned long long int) arr_15 [9ULL])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((var_12) << (((/* implicit */int) var_7)))))))));
                                var_19 = ((/* implicit */_Bool) min((((long long int) (signed char)-104)), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (959186767391815886ULL)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) min((var_0), (((/* implicit */unsigned long long int) arr_14 [i_3] [(unsigned char)13] [i_3] [i_3]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned long long int) var_8);
                                var_21 = ((/* implicit */_Bool) arr_26 [i_5 - 1]);
                                var_22 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (var_5))), (((/* implicit */unsigned long long int) ((_Bool) var_11))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_11 [i_4] [i_5] [14U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (959186767391815886ULL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
