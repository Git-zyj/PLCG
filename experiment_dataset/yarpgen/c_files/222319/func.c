/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222319
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned short) arr_0 [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_11 [i_3] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3031918148U)) ? (2071297514526485815LL) : (((/* implicit */long long int) 951309746U))));
                            arr_12 [i_1] |= ((/* implicit */short) ((_Bool) ((((/* implicit */int) var_8)) >> (0))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        {
                            arr_21 [14] [i_1] [i_1] [i_1] [i_4 + 2] [i_5] &= ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) var_9)));
                            var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((951309746U) << (((/* implicit */int) (unsigned char)7))))) >= (arr_14 [i_4 + 1] [i_4 + 2] [i_1 + 1] [i_0 + 1])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 |= ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned int i_6 = 3; i_6 < 10; i_6 += 3) 
    {
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_32 [i_6 - 2] [i_6] [i_6] [i_6 - 2] = ((/* implicit */short) var_9);
                    var_13 |= (+(((((/* implicit */_Bool) 951309743U)) ? (arr_8 [i_6] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_6] [i_7] [(unsigned char)16] [i_6] [i_6] [i_8])) && (((/* implicit */_Bool) var_0)))))))));
                    arr_33 [i_6] [i_7] [i_6] = ((((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_6] [i_7] [i_7] [i_8] [i_8] [i_8])) && (((/* implicit */_Bool) arr_8 [i_6] [i_6 - 2]))))) != (((/* implicit */int) ((short) (signed char)16))));
                    arr_34 [i_6] [i_7] [i_6] [i_8] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_26 [i_6])))), ((+(((/* implicit */int) arr_20 [i_6 + 1]))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */_Bool) min((var_9), (max((var_9), (arr_24 [i_6])))));
                    var_15 = (unsigned short)65528;
                }
                /* LoopSeq 1 */
                for (unsigned short i_10 = 2; i_10 < 8; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        for (short i_12 = 4; i_12 < 7; i_12 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) var_0)), (var_6)))))) ? (((max((var_0), (((/* implicit */int) var_1)))) >> (((((/* implicit */int) arr_0 [i_6 - 2])) - (29658))))) : (((/* implicit */int) arr_19 [i_6] [i_7] [i_7] [i_11] [i_12]))));
                                var_17 |= ((/* implicit */unsigned long long int) var_0);
                                arr_47 [i_6] [i_7] [i_11] [i_12] = ((/* implicit */int) (((~(arr_6 [i_6] [i_10 + 2] [16ULL] [i_6]))) != (((arr_46 [i_6] [(signed char)3] [i_7] [i_7] [6ULL] [i_11] [i_12]) - (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((var_3) - (1806171090U))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_13 = 2; i_13 < 7; i_13 += 2) 
                    {
                        for (int i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            {
                                arr_54 [i_10] [i_10] |= ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */int) arr_52 [i_6] [i_7] [i_10] [i_13 + 1] [i_14] [i_6 + 1] [i_10 - 1])), (arr_13 [i_6] [i_7] [i_7] [i_10])))) ? (((/* implicit */long long int) (-(var_3)))) : (-4761397040071018606LL))) << (((((/* implicit */int) (unsigned short)65528)) - (65520)))));
                                var_18 = ((/* implicit */int) ((unsigned int) min((951309743U), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (642764643U))))));
                                var_19 *= ((/* implicit */_Bool) ((signed char) var_2));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) (signed char)16);
                    var_21 = ((/* implicit */unsigned char) arr_3 [11U]);
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 642764643U))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_45 [i_6 + 1]))))) : (((((-3649853571918009999LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_45 [i_6 + 1])) - (75)))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((-3649853571918009974LL), (((/* implicit */long long int) (unsigned char)1))));
}
