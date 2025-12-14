/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239321
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 634080644U))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [(signed char)11] [i_1] = ((/* implicit */unsigned long long int) ((short) ((short) (unsigned short)29514)));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-1))))) ? (((/* implicit */int) (short)-9189)) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned char)243)) : ((-(((/* implicit */int) arr_0 [i_0]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (short i_4 = 4; i_4 < 18; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 262080U)) ? (((((/* implicit */_Bool) arr_5 [i_4 - 2])) ? (arr_5 [i_4 - 1]) : (arr_5 [i_4 - 3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4 - 1] [i_4 - 1] [i_4 + 1])) ? (((arr_4 [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)14]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_4])))))))))));
                    arr_15 [i_0] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_8 [i_0] [i_3] [i_4 + 1]), (arr_8 [4ULL] [i_3] [i_4]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        arr_20 [i_4] [i_3] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) 9907157207330288843ULL))) ? (4294967295U) : (((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(short)4] [(signed char)12] [i_0]))) : (4294967295U)))));
                        var_23 = ((/* implicit */short) var_15);
                        arr_21 [i_0] [i_3] [i_3] [i_4 - 4] [i_4 - 2] [i_4] = ((/* implicit */_Bool) 3116466616U);
                        arr_22 [i_0] [i_3] [i_3] [i_3] [i_4] [i_0] = ((/* implicit */unsigned char) ((int) arr_11 [i_4 - 3] [i_4 - 4] [i_4 - 3]));
                    }
                    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_24 -= ((/* implicit */short) ((int) ((unsigned int) (unsigned char)243)));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) arr_17 [(unsigned char)16]))))))));
                        var_26 = ((/* implicit */short) arr_23 [(unsigned char)5] [i_3]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_8 = 1; i_8 < 16; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3201205989417355661ULL)) ? (((((/* implicit */_Bool) 1023U)) ? (((/* implicit */int) (short)-18855)) : ((-2147483647 - 1)))) : (((/* implicit */int) (unsigned char)10))));
                        }
                        for (unsigned int i_9 = 4; i_9 < 18; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_16 [i_0] [i_3] [i_4 + 1] [i_3] [i_4 + 1])))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_7])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)52931)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) arr_3 [(short)5])))) : (((/* implicit */int) ((short) var_7)))))));
                            var_30 = ((/* implicit */long long int) arr_30 [i_4]);
                            var_31 = ((/* implicit */short) var_2);
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((unsigned int) arr_18 [i_0] [i_3] [i_9] [i_7])))));
                            var_33 = ((/* implicit */unsigned char) arr_30 [i_4]);
                        }
                        /* vectorizable */
                        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            arr_35 [i_0] [i_3] [i_4] [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_31 [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 2]))));
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((((/* implicit */_Bool) (short)-4)) ? (634080644U) : (((/* implicit */unsigned int) -41381126)))) > (((/* implicit */unsigned int) arr_12 [i_0])))))));
                            var_35 = ((/* implicit */short) ((unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8181272622864229406LL))));
                        }
                        arr_36 [i_0] [i_4] [i_0] [i_7] = ((/* implicit */unsigned char) arr_34 [i_0] [i_3] [i_4] [i_4] [i_3] [i_7]);
                    }
                }
            } 
        } 
    }
    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20176))) ^ (1046531641628408607ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_15)) <= (var_2))) || (((/* implicit */_Bool) var_1)))))))))));
}
