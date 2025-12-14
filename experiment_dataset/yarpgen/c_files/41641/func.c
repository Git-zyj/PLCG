/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41641
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_11 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) arr_11 [i_0] [i_1] [i_3]);
                            var_13 = ((/* implicit */long long int) (-(((var_8) ^ (((/* implicit */int) var_0))))));
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_4])) * (((((/* implicit */_Bool) 7096667826021251660ULL)) ? (((/* implicit */long long int) 4238739756U)) : (arr_9 [i_3] [i_2] [i_1] [i_0])))));
                            arr_14 [i_3] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */int) var_2);
                            var_15 |= ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 2; i_6 < 12; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_1] [2] [i_1] [i_6 + 1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 9018016742677217803ULL)))))) : (((((/* implicit */_Bool) 2824064992U)) ? (12ULL) : (((/* implicit */unsigned long long int) -5430793586930608815LL))))));
                        arr_23 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] [(_Bool)1] &= ((/* implicit */unsigned short) ((int) 1148343649U));
                        var_16 = ((/* implicit */short) var_0);
                        var_17 = ((/* implicit */unsigned long long int) arr_10 [i_6]);
                        arr_24 [i_6] [i_2] [i_6] [i_2] [i_6] [i_1] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [(signed char)4])) ? (var_8) : (((/* implicit */int) (short)11368))))));
                    }
                    var_18 = ((/* implicit */unsigned int) ((unsigned short) arr_12 [i_0] [i_1] [i_1] [i_2] [i_5]));
                    var_19 = var_5;
                }
            }
            for (unsigned int i_7 = 3; i_7 < 10; i_7 += 4) 
            {
                arr_28 [i_0] [i_7] [i_7] = ((/* implicit */int) (~(arr_17 [i_7 - 3] [i_7] [i_0] [i_0])));
                var_20 ^= ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_7 + 2] [i_7 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7 - 2]))) : ((+(4294967295U))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_15 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_0]))));
            }
        }
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            arr_31 [i_8] [i_8] [12U] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_8] [i_8] [i_0]))) : (max((((/* implicit */long long int) 1148343672U)), (arr_19 [i_8]))))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 1; i_9 < 12; i_9 += 4) 
            {
                for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    {
                        var_22 += ((/* implicit */short) (~(-1027034689)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_11 = 1; i_11 < 12; i_11 += 2) 
                        {
                            var_23 = ((((/* implicit */_Bool) ((var_7) >> (((var_1) - (808059737)))))) ? ((~(1148343654U))) : (((/* implicit */unsigned int) (-(-1027034668)))));
                            var_24 = ((/* implicit */_Bool) ((unsigned long long int) 66625974U));
                            var_25 = var_2;
                        }
                        var_26 += max((min((((unsigned long long int) arr_13 [i_8] [i_8] [i_8] [8U] [i_9 - 1] [i_8] [i_10])), (((/* implicit */unsigned long long int) 3146623647U)))), (((/* implicit */unsigned long long int) var_4)));
                        var_27 = max(((~(var_8))), (((int) (signed char)-1)));
                        var_28 = ((/* implicit */signed char) ((_Bool) min((((((/* implicit */_Bool) -2127573509)) ? (3146623617U) : (3146623608U))), (((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)10072)))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1148343629U)) ? (((((/* implicit */_Bool) -6693524383778912454LL)) ? (536722009417707178LL) : (((/* implicit */long long int) 1148343672U)))) : (((/* implicit */long long int) var_4)))) > (((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-38)))), (((int) (_Bool)1)))))));
        }
        arr_40 [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (arr_9 [i_0] [i_0] [i_0] [i_0]))));
        arr_41 [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-103))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) 3146623604U))))), ((unsigned short)22845)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_0]))) <= (min((((/* implicit */unsigned int) (signed char)127)), (3146623647U)))))));
        arr_42 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_19 [i_0])) ^ (((unsigned long long int) min((((/* implicit */unsigned int) var_8)), (384747914U))))));
    }
    var_30 ^= ((/* implicit */int) ((unsigned int) (-(min((var_7), (((/* implicit */unsigned long long int) (_Bool)0)))))));
    var_31 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) ((var_4) == (((/* implicit */int) (signed char)-38)))))), (var_7)));
}
