/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222929
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((-(var_17))) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110)))))), (arr_5 [i_0] [(_Bool)1] [i_2])));
                            var_19 ^= ((/* implicit */long long int) min((((var_16) ? (((((/* implicit */_Bool) var_17)) ? (var_1) : (((/* implicit */unsigned long long int) -1432876519)))) : (arr_5 [i_0] [i_1] [i_3]))), (((/* implicit */unsigned long long int) var_10))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)15)), ((unsigned short)61241)))) ? (var_10) : (((/* implicit */int) (signed char)78)))) == (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) (unsigned short)511)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_28 [i_4] [i_4] = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)16)))) < (((/* implicit */int) var_9)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))) >= (((((/* implicit */_Bool) (unsigned short)511)) ? (((/* implicit */unsigned long long int) var_6)) : (2528311924873950247ULL)))))));
                                arr_29 [i_4] [i_4] [i_6] [i_4] [i_8] [i_4] = ((/* implicit */signed char) (+((~((+(((/* implicit */int) var_7))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        {
                            arr_36 [i_10] [i_9] [i_5] [i_10] |= ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_4] [i_4] [i_5] [i_5] [(_Bool)1])) != (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31138)) ? (arr_8 [i_4] [i_5] [i_9] [i_10]) : (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) var_4)))))));
                            arr_37 [i_4] [i_4] [i_4] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */long long int) -204142234)), (((((/* implicit */_Bool) (unsigned char)250)) ? (8263294142068947571LL) : (((/* implicit */long long int) ((/* implicit */int) (short)27525)))))));
                            arr_38 [i_4] [i_5] [i_4] [3] = ((arr_2 [i_4] [i_4]) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [(short)5] [5LL] [i_10])) ? (((/* implicit */int) ((short) arr_17 [i_4]))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-20)), ((unsigned char)161))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        for (short i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            for (unsigned short i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                {
                    var_21 = ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_43 [i_13] [i_12])));
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) 
                        {
                            {
                                arr_51 [i_14] [i_11] [i_15] [i_15] [5LL] = ((/* implicit */short) ((((/* implicit */int) var_12)) - (((((/* implicit */_Bool) min((arr_39 [i_11]), (((/* implicit */short) (signed char)-35))))) ? ((+(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */int) (short)21410)) : (((/* implicit */int) (short)5522))))))));
                                arr_52 [i_15] [i_14] [i_14] [(signed char)16] [i_12] [i_11] = var_4;
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_10))) : (((/* implicit */int) (!(arr_45 [i_13] [i_13] [i_15]))))));
                            }
                        } 
                    } 
                    var_23 |= ((/* implicit */int) arr_40 [i_12]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 22; i_16 += 3) 
    {
        for (int i_17 = 0; i_17 < 22; i_17 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_60 [i_16]))));
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */int) min(((_Bool)1), ((_Bool)0)))) / (((/* implicit */int) ((signed char) 469466359))))) * (((/* implicit */int) (_Bool)0))));
                            var_26 |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)121)) ? (min((((((/* implicit */_Bool) arr_61 [i_16] [i_17] [i_18] [i_18] [i_18])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31527))) : (-7718389250936539025LL)))))) : (((/* implicit */unsigned long long int) (-(var_6))))));
                            arr_63 [i_16] [i_17] [i_19] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((61606081), (((/* implicit */int) (_Bool)0))))) ? (var_1) : (var_14)))) ? (((/* implicit */int) var_2)) : (var_13));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)15))))))) ? (var_13) : (((/* implicit */int) arr_55 [i_16] [i_17]))));
                        }
                    } 
                } 
                arr_64 [i_17] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96))) | (7568719945412612193ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
                var_28 ^= ((/* implicit */long long int) ((min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (unsigned short)10)))))) * (((/* implicit */int) var_16))));
            }
        } 
    } 
}
