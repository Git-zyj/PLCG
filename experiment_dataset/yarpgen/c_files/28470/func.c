/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28470
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_1] [5LL])) && (arr_1 [i_0 + 2] [i_1])))), (min((arr_0 [i_0 - 1] [i_0 + 1]), (((/* implicit */unsigned long long int) (unsigned short)49633))))));
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (8570515775849105633LL)))) ? ((-(arr_2 [i_0 + 2] [i_0 + 2] [(unsigned char)12]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42302))))))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (7231785118808110477LL))), ((~(8570515775849105633LL)))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) -8570515775849105633LL)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-15593)) : (((/* implicit */int) (unsigned short)13241)))) : (((/* implicit */int) (_Bool)1))))));
                var_15 &= ((/* implicit */signed char) max((((/* implicit */int) (short)15593)), ((-(((/* implicit */int) var_3))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_10);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)108)), ((short)-19209)))) ? (var_6) : (var_10)));
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        arr_7 [i_2] = var_4;
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_2] [i_2])), (4294967295U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) (unsigned char)177)))))) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102))) : (3462290551U)))))))));
        var_19 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) var_11)) ? (8540713318708064922LL) : (((/* implicit */long long int) var_6)))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
    }
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (short i_4 = 1; i_4 < 22; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */short) var_7);
                            arr_20 [i_4 - 1] [i_4 - 1] [i_5] [i_4] [i_7] = ((/* implicit */short) 8540713318708064922LL);
                        }
                        for (short i_8 = 1; i_8 < 22; i_8 += 4) 
                        {
                            var_21 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), ((~(max((((/* implicit */long long int) var_4)), (-8570515775849105634LL))))));
                            var_22 = ((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)184)) && (((/* implicit */_Bool) ((short) var_8))))))));
                        }
                        var_23 = ((((((/* implicit */_Bool) arr_14 [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4 + 1]))) : (arr_23 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_6]))) <= (((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_5])) ? (min((2608772799U), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_3] [i_3] [i_5]))))))));
                    }
                    for (unsigned int i_9 = 4; i_9 < 19; i_9 += 3) 
                    {
                        arr_26 [10ULL] [i_4] [i_9 + 3] [(short)2] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned short)14300)))) == (((/* implicit */int) min((arr_3 [i_3] [i_4 - 1] [i_5]), (arr_3 [i_3] [i_4 - 1] [i_5]))))));
                        arr_27 [(short)1] [i_4] [2U] = ((/* implicit */unsigned long long int) 1686194496U);
                    }
                    var_24 += ((/* implicit */short) 6684137443087294719ULL);
                }
            } 
        } 
        arr_28 [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_10))) : (var_6)))), (13685302529695854086ULL)));
        /* LoopNest 3 */
        for (long long int i_10 = 1; i_10 < 22; i_10 += 3) 
        {
            for (long long int i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                for (short i_12 = 1; i_12 < 22; i_12 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_10 + 1]))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)108)), (arr_21 [i_3] [i_3] [i_11])))) ? ((((_Bool)1) ? (1065615531U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15593))))) : (arr_22 [i_3])))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) min(((short)32747), (((/* implicit */short) (signed char)-85)))))))) != (((((_Bool) -8540713318708064923LL)) ? (min((var_6), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)25261)))))))));
                        arr_38 [i_12] [i_10] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_2 [i_11] [i_10 - 1] [i_12 - 1]), (arr_2 [i_3] [i_10 + 1] [i_11])))) ? (max((arr_2 [(unsigned short)0] [(unsigned short)0] [i_3]), (arr_2 [i_3] [13ULL] [i_11]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (arr_2 [i_3] [i_10 + 1] [i_11])))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) arr_25 [(_Bool)1] [i_13] [i_13] [i_13]);
        var_28 -= ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) arr_22 [i_13])), (min((4761441544013697530ULL), (((/* implicit */unsigned long long int) (signed char)-102))))))));
        var_29 = ((/* implicit */long long int) (-(arr_13 [(short)4] [i_13] [i_13] [i_13])));
    }
}
