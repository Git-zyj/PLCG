/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247848
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) max((var_15), (((/* implicit */short) var_8))))) : (((((/* implicit */int) (signed char)-63)) | (((/* implicit */int) (unsigned char)20)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : ((-2147483647 - 1)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_18 *= arr_4 [i_2];
                                arr_11 [i_0] = -2147483635;
                                var_19 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned short) var_9))), (min((arr_4 [i_4 - 3]), (((/* implicit */unsigned int) ((unsigned char) arr_7 [i_1] [i_0])))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) arr_6 [i_0]);
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 268435456U)) ? (((((/* implicit */_Bool) (~(var_2)))) ? (((unsigned int) var_14)) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    /* LoopNest 3 */
    for (short i_5 = 2; i_5 < 8; i_5 += 3) 
    {
        for (unsigned int i_6 = 1; i_6 < 6; i_6 += 3) 
        {
            for (short i_7 = 1; i_7 < 9; i_7 += 3) 
            {
                {
                    var_22 -= ((/* implicit */int) max((max((((((/* implicit */_Bool) arr_14 [i_5] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_10 [i_5 - 1] [11] [i_7] [i_7 + 1] [i_7] [i_7] [i_5 - 1]))), (((/* implicit */long long int) arr_1 [i_6 + 4])))), (((/* implicit */long long int) arr_12 [i_5] [i_5]))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            {
                                var_23 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(arr_17 [i_9])))) ? (((/* implicit */int) arr_9 [(unsigned short)3])) : (((/* implicit */int) ((unsigned char) 576179277326712832LL)))))));
                                var_24 = ((/* implicit */unsigned short) (~(max((((unsigned int) var_12)), (((/* implicit */unsigned int) ((short) 11U)))))));
                                arr_25 [i_8] [i_8] = ((/* implicit */short) (((+(((((/* implicit */_Bool) (unsigned char)227)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-68)))))) == (((/* implicit */int) arr_1 [i_8]))));
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (((~(((/* implicit */int) (signed char)68)))) == (((/* implicit */int) min(((short)10451), (((/* implicit */short) ((((/* implicit */int) (unsigned short)43054)) > (-1471714814))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 4; i_10 < 15; i_10 += 1) 
    {
        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            {
                arr_32 [i_10 - 1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [(short)20] [i_11] [(short)20])))))))) <= ((-(-337833660)))));
                /* LoopNest 3 */
                for (unsigned char i_12 = 3; i_12 < 15; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        for (int i_14 = 1; i_14 < 15; i_14 += 3) 
                        {
                            {
                                var_26 += ((/* implicit */unsigned char) arr_31 [i_10] [i_11] [i_12]);
                                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (arr_26 [i_10 - 2])))) ? ((~(((/* implicit */int) arr_39 [i_10 - 3] [i_10 - 4] [i_10])))) : (((((/* implicit */_Bool) arr_38 [i_10] [i_11] [i_12 - 1] [i_13])) ? (((/* implicit */int) arr_9 [(unsigned char)23])) : (((/* implicit */int) arr_5 [i_14 - 1] [13U] [i_10]))))))), (3807612635832257594LL))))));
                                arr_42 [i_10] [i_11] [i_12] [i_10] |= ((/* implicit */int) ((-4208778096973714287LL) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-31454)) ? (1724798137U) : (arr_31 [i_11] [i_13] [i_14 - 1]))))))));
                                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((unsigned char) ((signed char) (!(((/* implicit */_Bool) var_13)))))))));
                            }
                        } 
                    } 
                } 
                var_29 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_10 + 1]))));
            }
        } 
    } 
}
