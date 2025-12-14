/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230023
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_3] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                            var_14 = ((/* implicit */long long int) (~(((int) arr_2 [i_2] [i_3]))));
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) 2003487732412980362LL)))))))) ? (((unsigned int) -1905483239)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2445187169845588635ULL)))))))))));
                            var_16 *= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_3]))))) << (((((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? ((~(((/* implicit */int) (signed char)87)))) : (((int) 1905483238)))) + (96))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [i_6] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) -2003487732412980363LL)))))));
                                var_17 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_6])) || (((/* implicit */_Bool) ((13246283852855041613ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99)))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    for (signed char i_8 = 1; i_8 < 15; i_8 += 1) 
                    {
                        {
                            arr_28 [i_8] [i_8 + 1] [i_7] [i_1] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
                            arr_29 [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))) - (((arr_20 [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8 - 1] [i_8] [i_8]) / (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        {
                            var_18 += ((signed char) ((int) ((((/* implicit */int) var_5)) - (arr_20 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1]))));
                            arr_35 [i_0] [i_0] [i_10] = (((-(((/* implicit */int) arr_19 [i_0] [i_0] [i_9] [i_10] [i_0])))) * ((+((-(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
    {
        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 3) 
                        {
                            {
                                var_19 *= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -5323225900882636445LL)))))));
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) - (var_6)))))));
                                var_21 = (-((-(arr_38 [i_11] [i_15] [i_13]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 2; i_16 < 11; i_16 += 4) 
                {
                    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) (+(((unsigned long long int) (short)(-32767 - 1)))));
                            var_23 = ((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_26 [i_17] [i_12] [i_16] [i_16 - 1])))) / ((+(var_6)))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((_Bool) (-(arr_48 [i_16 - 1] [i_16 - 2] [i_16 - 1] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 - 2])))))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)32748)) : (arr_10 [i_11] [i_11] [i_11] [i_17]))))) >> (((((((/* implicit */_Bool) (short)-32765)) ? (var_1) : (var_3))) + (605496310)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_18 = 0; i_18 < 19; i_18 += 4) 
    {
        for (long long int i_19 = 0; i_19 < 19; i_19 += 4) 
        {
            for (long long int i_20 = 0; i_20 < 19; i_20 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (signed char i_22 = 0; i_22 < 19; i_22 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_64 [i_22] [i_21] [i_20] [i_19] [i_18])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) & ((-(((1905483239) << (((((/* implicit */int) var_2)) - (58)))))))));
                                arr_69 [i_18] [i_18] [i_18] [i_20] [i_21] [i_22] = ((/* implicit */unsigned long long int) (((+(var_7))) & (((/* implicit */unsigned int) ((/* implicit */int) ((14940943036641497719ULL) != (arr_57 [i_18])))))));
                                var_27 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_59 [i_20] [i_19])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))));
                                arr_70 [i_18] [i_19] [i_20] [i_20] [i_21] = ((unsigned int) ((((/* implicit */_Bool) arr_56 [i_18])) ? (((/* implicit */int) ((unsigned char) arr_57 [i_20]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1905483239)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        for (signed char i_24 = 3; i_24 < 16; i_24 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) (((+(var_13))) % ((-(arr_66 [i_18] [i_18] [i_20] [i_19] [i_19] [i_20] [i_19])))));
                                arr_77 [i_24 - 2] [i_24] [i_20] [i_24] [i_18] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_12)) >> (((2305843009213693951LL) - (2305843009213693935LL))))) > (((/* implicit */int) ((unsigned char) var_9)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_25 = 0; i_25 < 19; i_25 += 4) 
                    {
                        for (unsigned long long int i_26 = 0; i_26 < 19; i_26 += 2) 
                        {
                            {
                                arr_83 [i_26] [i_25] [i_20] [i_19] [i_18] |= ((/* implicit */unsigned char) (((~(var_0))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) <= (((((-1905483240) + (2147483647))) << (((3505801037068053907ULL) - (3505801037068053907ULL)))))))))));
                                var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((((((/* implicit */int) arr_60 [i_19] [i_25])) + (2147483647))) >> (((((/* implicit */int) arr_72 [i_18] [i_19] [i_20] [i_25])) + (36))))))))) - (((((/* implicit */_Bool) ((unsigned char) (signed char)126))) ? ((+(2274419538727901078ULL))) : (((/* implicit */unsigned long long int) ((var_13) & (arr_66 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))))))));
                                arr_84 [i_26] [i_25] [i_20] [i_18] [i_18] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) var_8)) > (arr_82 [i_25] [i_19] [i_20] [i_25] [i_26]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
