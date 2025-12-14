/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244476
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [(signed char)0] [i_1] [i_0] [i_3] [i_3] [i_4] &= ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_10))));
                                var_12 *= ((/* implicit */unsigned char) (~(4056914162U)));
                                arr_13 [i_2] [i_4] [i_3] [i_2] [i_1] [i_2] = min(((~(((/* implicit */int) var_7)))), ((-(((/* implicit */int) var_11)))));
                                var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-57))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_20 [i_6] [i_5] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) 238053110U)))));
                                arr_21 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (+((~(((int) var_5))))));
                                arr_22 [1] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */int) min((min((4234497841U), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) ((max((((/* implicit */long long int) 60469461U)), (-2470243414767558634LL))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)36640)) && (((/* implicit */_Bool) 2348518827U)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 3; i_7 < 10; i_7 += 2) 
    {
        for (unsigned int i_8 = 1; i_8 < 10; i_8 += 2) 
        {
            for (unsigned char i_9 = 1; i_9 < 10; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) var_10);
                                var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (var_8)))) < (((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) var_7)) + (15232)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_2))))))));
                    var_17 -= ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_1))))));
                    arr_36 [i_8] = ((/* implicit */signed char) ((short) (-(((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))))));
                }
            } 
        } 
    } 
    var_18 &= (!(((min((((/* implicit */unsigned int) var_7)), (var_4))) == (min((var_4), (var_0))))));
}
