/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241859
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 6; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 6; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) 2014659249U)) ? (((/* implicit */int) (short)7602)) : (((/* implicit */int) (signed char)8)))))));
                                arr_12 [i_4 + 3] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), (max((((/* implicit */unsigned short) (!((_Bool)1)))), ((unsigned short)19737)))));
                                var_17 ^= ((/* implicit */signed char) min(((+(((/* implicit */int) var_12)))), (((/* implicit */int) ((short) (unsigned short)45798)))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_3))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned char)246))))) ? (((((/* implicit */_Bool) 2560868009068681191LL)) ? (985799363U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45794))))) : (var_14)))) : (((((/* implicit */_Bool) min((-2182464507367422765LL), (5187203545755571507LL)))) ? (((/* implicit */long long int) ((unsigned int) var_8))) : ((+(-5187203545755571507LL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 4; i_5 < 20; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            {
                var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)18932)), (-1510153401535142585LL)))) ? ((-(((/* implicit */int) (short)22411)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)20968)) != (((/* implicit */int) (unsigned short)45798)))))));
                /* LoopNest 3 */
                for (unsigned int i_7 = 1; i_7 < 19; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            {
                                arr_25 [i_5] [i_6] [i_7] [i_8] [i_9] = -1589000760;
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned int) ((int) ((short) (unsigned short)19742)))))));
                                var_22 = ((/* implicit */int) (short)-19086);
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) min((71342932968612128LL), (((/* implicit */long long int) (signed char)-126))))) ? ((~(1589000758))) : (((/* implicit */int) (short)-15666)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */int) min((((/* implicit */long long int) (+(33554431U)))), (max((((/* implicit */long long int) var_4)), (var_5)))));
                            arr_32 [i_6] [6LL] [(_Bool)1] = ((/* implicit */unsigned int) max((((int) (unsigned short)46626)), (min((((/* implicit */int) (unsigned short)62031)), (857279708)))));
                            var_25 = min(((~(71342932968612128LL))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-87))) >= (8475614296347395828LL)))));
                            arr_33 [i_5] [i_6] [i_10] [1ULL] = ((/* implicit */signed char) ((long long int) (unsigned char)9));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_40 [i_13] [i_13] [i_12] [i_6] [i_5 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)118))))) ? ((+(((/* implicit */int) (short)0)))) : (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (unsigned short)46604))))));
                                arr_41 [i_5] [i_12] [13] [13] [i_5] [i_14] [i_12] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)91))))), (((((/* implicit */_Bool) (unsigned char)240)) ? (1130146705U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46604)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (long long int i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            {
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (((!(((/* implicit */_Bool) -1693560943586519173LL)))) || ((!(((/* implicit */_Bool) var_12)))))))));
                arr_48 [i_15] [i_16] = ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-46))) : (var_13)));
                /* LoopNest 2 */
                for (signed char i_17 = 1; i_17 < 11; i_17 += 4) 
                {
                    for (long long int i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        {
                            arr_54 [i_15] [i_17] [i_17 + 3] [13U] = ((/* implicit */short) max((((unsigned long long int) 0LL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1688849860263936ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_11)))) ? (((((/* implicit */_Bool) var_2)) ? (1374925335919825499LL) : (((/* implicit */long long int) var_14)))) : (((((/* implicit */_Bool) var_11)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211))))))))));
                            arr_55 [i_17] [i_16] [i_17 + 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3506)) ? (((/* implicit */int) (unsigned short)46604)) : (((/* implicit */int) (!((_Bool)0)))))))));
                            var_27 = min((((/* implicit */long long int) (unsigned char)78)), (0LL));
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) min((min((10081062560247334500ULL), (var_0))), (((/* implicit */unsigned long long int) ((unsigned char) 1073739776)))));
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 14; i_19 += 1) 
                {
                    for (unsigned int i_20 = 0; i_20 < 14; i_20 += 1) 
                    {
                        {
                            arr_63 [i_15] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-23826)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62022))) : (1773841582U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1563422768U)) && (((/* implicit */_Bool) -9117536417168184284LL))))))));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62044))) | ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2420937841U)) ? (((/* implicit */long long int) var_14)) : (-8721397788430321948LL)))) : (((unsigned long long int) var_14)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
