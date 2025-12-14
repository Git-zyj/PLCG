/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195719
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
    var_14 = ((/* implicit */_Bool) var_2);
    var_15 = ((/* implicit */unsigned long long int) (~((~((~(((/* implicit */int) var_5))))))));
    var_16 = ((/* implicit */int) ((_Bool) ((long long int) ((signed char) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) 3932160U)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_4] |= ((/* implicit */_Bool) ((arr_15 [i_0] [i_2 + 1] [i_2 + 1]) ? (((/* implicit */int) var_5)) : (((int) (short)28450))));
                                arr_18 [i_4] [11ULL] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_2 - 2] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_11 [i_2 - 2] [i_1] [i_2 + 1] [i_1])) : (((/* implicit */int) arr_11 [i_2 - 2] [i_1] [i_2] [i_2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_26 [i_6] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */unsigned int) (_Bool)0);
                                arr_27 [i_6] [i_6] [i_2] [i_2] [i_1] [i_6] [i_0] = ((/* implicit */unsigned int) ((arr_8 [i_0]) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-3065303334490192815LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_0])) : (1538443386))))));
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    arr_30 [i_1] = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            {
                                var_17 = ((_Bool) ((((/* implicit */_Bool) 1012249698994060427LL)) ? (((/* implicit */long long int) max((1336577199), (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */long long int) (_Bool)1)), (3065303334490192814LL)))));
                                arr_35 [11] [(short)7] [(_Bool)1] [(_Bool)1] [i_1] [(signed char)11] [i_0] = ((((_Bool) 2827367217U)) ? (((/* implicit */int) ((signed char) arr_32 [i_1] [i_7]))) : (var_13));
                            }
                        } 
                    } 
                    arr_36 [i_7] = ((/* implicit */_Bool) ((short) (+(arr_14 [i_1] [(signed char)5]))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
                        {
                            {
                                arr_45 [i_11] = ((/* implicit */_Bool) 1867931933U);
                                var_18 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) (signed char)-24)))));
                                arr_46 [i_11] [(_Bool)1] [i_10] [(_Bool)1] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) ((_Bool) arr_29 [i_0] [i_0] [i_0] [i_11]))), (((short) arr_39 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_37 [(unsigned short)22] [i_1] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1442868869)))) : (((((/* implicit */_Bool) -3065303334490192832LL)) ? (18032172919972857090ULL) : (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) var_2))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 2; i_13 < 20; i_13 += 4) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) arr_21 [(unsigned short)10] [i_1] [(unsigned short)10] [i_10] [i_13] [i_14]);
                                arr_52 [i_14] [i_13 + 2] [i_10] [0] [i_0] = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) (signed char)-94)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        for (signed char i_16 = 2; i_16 < 20; i_16 += 4) 
                        {
                            {
                                arr_60 [i_0] [i_0] [i_0] [i_15 + 1] [(_Bool)1] = ((/* implicit */unsigned char) arr_24 [i_0] [i_1] [i_10]);
                                var_20 = ((/* implicit */signed char) (+(655610016U)));
                                var_21 = ((/* implicit */signed char) 414571153736694545ULL);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
