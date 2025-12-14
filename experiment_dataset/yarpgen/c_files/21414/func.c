/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21414
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
    var_12 = ((/* implicit */int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_4 [4ULL] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_0 [i_0]));
        var_13 -= ((/* implicit */unsigned short) (-((~(var_0)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) arr_1 [18ULL])))));
                                arr_14 [17LL] [17LL] [17LL] = ((/* implicit */signed char) (!(arr_3 [i_4] [i_1])));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) ((unsigned int) var_0));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) ((int) var_5));
        var_17 = ((/* implicit */unsigned char) (+(var_5)));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_18 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 4 */
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~(((unsigned int) 910056749U)))))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        {
                            arr_28 [i_5] [i_5] = ((/* implicit */unsigned char) (~((~(var_5)))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(((unsigned int) var_5)))))));
                            arr_29 [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] = ((/* implicit */long long int) (~(910056749U)));
                            var_21 = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)31));
                            var_22 = ((/* implicit */unsigned char) (+(3384910546U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 4; i_11 < 14; i_11 += 2) 
                    {
                        {
                            arr_35 [i_5] = ((/* implicit */long long int) ((unsigned int) ((unsigned int) 3384910547U)));
                            var_23 -= ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) arr_3 [i_5] [i_5])))));
                        }
                    } 
                } 
            }
            for (signed char i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 4; i_13 < 13; i_13 += 2) 
                {
                    for (short i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        {
                            arr_45 [1U] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_39 [i_14] [i_13 - 2] [i_12] [i_5 + 1] [i_6] [i_5 + 1]))));
                            var_24 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) -16LL))));
                            arr_46 [i_5] [i_6] [i_12] [i_13] [i_5] = ((/* implicit */unsigned long long int) (~(var_9)));
                            arr_47 [(unsigned char)0] [(unsigned char)0] [i_14] [(unsigned char)0] [i_14] = ((signed char) var_1);
                        }
                    } 
                } 
                var_25 = (~(var_2));
            }
            for (unsigned char i_15 = 0; i_15 < 15; i_15 += 3) 
            {
                var_26 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) 3384910532U)))));
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((long long int) ((short) var_9))))));
            }
            for (unsigned long long int i_16 = 1; i_16 < 14; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 15; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 15; i_18 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) (~(((unsigned long long int) 17452173759532061760ULL))));
                            arr_57 [i_16 - 1] [i_16] [i_16 - 1] [i_16 + 1] = ((/* implicit */long long int) ((unsigned char) 910056749U));
                            var_29 &= ((/* implicit */long long int) (-(arr_31 [i_16 + 1] [i_16] [i_5])));
                            var_30 = ((/* implicit */int) (-(8927988653530075996ULL)));
                        }
                    } 
                } 
                var_31 += ((/* implicit */short) ((unsigned int) (_Bool)1));
                var_32 = ((/* implicit */long long int) (+(2128572912890928309ULL)));
                var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3384910554U))));
                var_34 = ((/* implicit */unsigned char) (-(((long long int) var_6))));
            }
            arr_58 [i_6] = ((/* implicit */unsigned long long int) ((long long int) var_2));
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            var_35 ^= ((/* implicit */unsigned int) ((signed char) 3384910546U));
            /* LoopSeq 3 */
            for (short i_20 = 1; i_20 < 14; i_20 += 2) 
            {
                arr_63 [i_20 + 1] [i_20 + 1] [i_19] [i_5] = ((/* implicit */int) (+(var_11)));
                var_36 = (!(((/* implicit */_Bool) ((signed char) 2128572912890928309ULL))));
            }
            for (long long int i_21 = 0; i_21 < 15; i_21 += 2) 
            {
                var_37 = ((/* implicit */int) (~(7390026072818140967LL)));
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 4; i_22 < 13; i_22 += 3) 
                {
                    for (long long int i_23 = 2; i_23 < 12; i_23 += 4) 
                    {
                        {
                            arr_71 [i_5] [i_5 + 1] [i_5] = ((/* implicit */int) (~(910056764U)));
                            var_38 |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) var_7)))));
                            arr_72 [i_23] [i_19] [i_21] [i_19] [i_5] = ((/* implicit */signed char) (~(((unsigned int) 1853944511))));
                        }
                    } 
                } 
                var_39 = (-(var_2));
                arr_73 [i_5] [i_5 + 1] = ((/* implicit */short) ((long long int) arr_42 [i_5 - 1] [i_5 + 1] [i_21]));
            }
            for (unsigned long long int i_24 = 1; i_24 < 14; i_24 += 3) 
            {
                /* LoopSeq 3 */
                for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) /* same iter space */
                {
                    var_40 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
                    var_41 = ((/* implicit */int) ((unsigned long long int) var_7));
                    arr_78 [i_24] = (!(((/* implicit */_Bool) var_11)));
                }
                for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) /* same iter space */
                {
                    arr_81 [i_26] = ((/* implicit */unsigned long long int) (-(var_0)));
                    arr_82 [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) (+(var_1))));
                }
                for (signed char i_27 = 0; i_27 < 15; i_27 += 3) 
                {
                    var_42 = ((/* implicit */unsigned int) ((short) var_10));
                    arr_85 [i_5] [i_19] [i_24 - 1] [i_24 - 1] = ((/* implicit */unsigned long long int) ((unsigned char) var_10));
                }
                var_43 |= ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) var_4)));
            }
        }
    }
    var_44 = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) 3384910567U)))));
}
