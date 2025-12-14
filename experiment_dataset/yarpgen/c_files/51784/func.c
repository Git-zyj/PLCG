/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51784
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
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (((-(4107195708U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_1]))))) ? (((((/* implicit */int) var_11)) + (((/* implicit */int) arr_0 [i_2])))) : ((-(((/* implicit */int) var_2)))))))));
                    var_14 = ((/* implicit */int) ((((((/* implicit */int) var_13)) >= (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */unsigned int) var_0)) : (((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0])) >> (((/* implicit */int) (short)0))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned short)2] [(unsigned short)2]))) ^ (187771587U)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((187771587U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44377))))) ? (min((var_0), (arr_14 [i_1] [i_1] [i_3 + 1] [i_1 + 2] [i_0 - 2] [i_2]))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_3 - 1] [i_1 + 1] [i_0 + 1] [i_2])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))));
                                var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (max((arr_2 [i_1] [i_1]), (((/* implicit */unsigned int) (_Bool)0)))))))) >= ((+(2352859846U)))));
                                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */short) (-(187771587U)));
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((((((/* implicit */int) arr_0 [i_2])) + (815))) - (24)))))) ? (((/* implicit */int) var_2)) : ((~(arr_1 [i_0])))))) ? (max((((((/* implicit */_Bool) 4107195709U)) ? (187771587U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1929843558)) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (arr_1 [(short)13])))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) ^ ((~(((/* implicit */int) var_5)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (unsigned short)23))))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) | (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) max((4294967295U), (187771595U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (var_7))))) : (((((/* implicit */_Bool) (unsigned short)16250)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 3; i_6 < 23; i_6 += 1) 
        {
            {
                var_19 &= ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_16 [i_5] [24])) : (arr_17 [i_6] [(unsigned short)12]))) == (((/* implicit */int) var_8)))) ? (((((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) 4107195709U))))) << (((((/* implicit */int) var_10)) - (57035))))) : (2059017831));
                var_20 = var_5;
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_19 [22] [22] [22]) > (((/* implicit */int) var_10)))))))) ? (((/* implicit */int) var_2)) : (min((max((2059017831), (((/* implicit */int) var_11)))), (((/* implicit */int) (short)10104)))))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 22; i_7 += 3) 
                {
                    for (unsigned int i_8 = 1; i_8 < 24; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((arr_24 [i_7 + 2] [i_6 - 3] [i_5] [i_6] [i_6 - 2]) / (min((((((/* implicit */int) arr_18 [i_5])) << (((-12) + (19))))), (arr_17 [i_5] [i_5])))));
                            var_23 = min((((((/* implicit */_Bool) max((1798927538), (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_25 [i_5] [i_5] [i_5])) : (((/* implicit */int) (unsigned short)65513)))) : (((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))), (((/* implicit */int) (_Bool)1)));
                            var_24 = ((/* implicit */unsigned int) 15355395776279851686ULL);
                            var_25 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) var_5)) ? (-187278502) : (arr_22 [i_5] [i_6] [i_8]))))) == (((/* implicit */int) ((((1218355012U) - (((/* implicit */unsigned int) var_1)))) == (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_5])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23311)))))) ? ((~(((/* implicit */int) arr_16 [i_5] [i_5])))) : ((~(((/* implicit */int) arr_21 [i_5] [i_7]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_6 + 1] [i_7 + 3] [i_8 - 1] [i_8 - 1])) || (((/* implicit */_Bool) var_3)))))) : ((+(((((/* implicit */_Bool) var_11)) ? (187771587U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5371)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */int) var_6);
}
