/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246829
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((unsigned long long int) ((arr_2 [i_0] [i_3]) == (((/* implicit */unsigned int) arr_9 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_9 [i_3] [i_1]))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (max((-1663747180), (901172231))))))));
                            var_12 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) && (((_Bool) 4232358699U))))), (max((((/* implicit */unsigned long long int) arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])), (min((((/* implicit */unsigned long long int) (signed char)-37)), (arr_3 [i_3]))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((4067468411U), (((/* implicit */unsigned int) (short)11221)))))));
                                var_14 += ((/* implicit */unsigned short) ((((12460122780470020525ULL) & (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))) >> (((((unsigned long long int) ((650014688U) & (((/* implicit */unsigned int) arr_9 [i_3] [i_4]))))) - (100953473ULL)))));
                                arr_13 [i_4] [i_0] [i_2] = ((/* implicit */signed char) ((arr_7 [i_1] [i_2 + 2]) - (((/* implicit */unsigned int) ((((/* implicit */int) max((var_6), (var_6)))) - (((/* implicit */int) (signed char)0)))))));
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_12 [i_2] [i_2 - 1] [i_3] [i_3] [i_4] [i_4] [i_4]))))) >> (((((var_9) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_2 + 1])) : ((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))) + (127)))));
                            }
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_2 + 2] [i_1])) ? (((/* implicit */int) ((short) arr_5 [i_3 + 1] [i_2 + 2] [i_2]))) : (((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) arr_6 [i_3 + 1] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_5 [i_3 + 1] [i_2 + 2] [i_2])))))))));
                            var_17 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) arr_2 [i_0] [i_1]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            {
                                arr_28 [i_5] [i_6] [i_7] [i_6] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_11 [i_8] [i_9 + 1] [i_9] [i_8] [i_9 + 1])))) <= (min((arr_24 [i_9 + 1] [i_9 + 1] [i_9] [i_9] [i_9 + 1]), (arr_24 [i_5] [i_9 + 1] [i_9] [i_9] [i_9 + 1])))));
                                arr_29 [i_7] [i_6] [i_6] [i_8] [i_9] |= ((/* implicit */unsigned int) (signed char)-14);
                                var_19 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (~(6932376293869646670ULL)))) ? (max((522666737U), (arr_23 [i_5] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                                var_20 += ((((arr_23 [i_5] [i_9 + 1]) - (arr_23 [i_5] [i_9 + 1]))) > (arr_23 [i_5] [i_9 + 1]));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) min((3772300527U), (1848348821U)));
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_4 [i_6] [i_7] [i_6])) : (((/* implicit */int) arr_4 [i_5] [i_6] [i_7]))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_10] [i_7] [i_5]))))))) : (((/* implicit */int) ((short) ((69818988363776LL) - (((/* implicit */long long int) var_10))))))));
                        arr_32 [i_5] [i_6] &= ((/* implicit */signed char) ((_Bool) max((min((var_2), (((/* implicit */unsigned long long int) arr_19 [i_5])))), (((/* implicit */unsigned long long int) 2117695703)))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) (unsigned short)62838);
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_30 [i_11] [i_7] [i_6] [i_5]))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_38 [i_12] [i_12] [i_7] [i_6] [i_5] [i_5] = ((/* implicit */int) ((min((0LL), (((/* implicit */long long int) 1179083809U)))) > (((/* implicit */long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_35 [i_5] [i_6] [i_7] [i_12])))))));
                        arr_39 [i_12] [i_7] [i_6] [i_5] = ((/* implicit */signed char) ((unsigned int) max((arr_16 [i_7]), (((/* implicit */unsigned long long int) arr_4 [i_5] [i_5] [i_5])))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 1) 
    {
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            {
                var_25 -= ((/* implicit */_Bool) 2446618475U);
                arr_47 [i_13] [i_14 - 1] = ((/* implicit */unsigned int) min((11514367779839904945ULL), (((/* implicit */unsigned long long int) 522666733U))));
            }
        } 
    } 
}
