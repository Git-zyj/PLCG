/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23399
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
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_0 + 1] [i_1] [i_2] [i_0 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0 - 4] [9ULL])) && (((/* implicit */_Bool) max((1028185338270216416ULL), (((/* implicit */unsigned long long int) var_10))))))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 4])) ? (((/* implicit */int) min(((unsigned short)23835), ((unsigned short)61803)))) : (((arr_1 [i_0 - 4] [i_1]) ? (((/* implicit */int) (unsigned short)27193)) : (((/* implicit */int) arr_5 [i_0])))))) : (((/* implicit */int) min((arr_2 [i_0 - 1] [i_0]), (arr_2 [i_0 - 2] [i_0]))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */short) ((arr_6 [i_0] [4ULL] [i_2] [(unsigned short)8]) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_0] [i_2]))))) ? (((unsigned long long int) 11204883658214209587ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_3 - 1] [i_0] [i_2] [i_3]) && (((var_8) || (((/* implicit */_Bool) arr_4 [(_Bool)1]))))))))));
                        var_13 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_8 [i_3 + 3] [i_3 - 1] [i_0 - 3])) ? (arr_8 [i_3 + 3] [i_3 + 3] [i_0 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), ((~(arr_8 [i_3 + 2] [i_3 + 2] [i_0 - 3])))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) var_2)))));
                        var_15 = ((/* implicit */short) arr_10 [9ULL] [9ULL] [9ULL] [(unsigned short)0]);
                        var_16 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
                    }
                    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((!((_Bool)1))), ((((_Bool)1) && (var_8))))))));
                        arr_19 [i_0] [13ULL] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [(_Bool)1]);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_18 = arr_10 [i_0 + 2] [i_0 + 2] [(short)0] [i_6];
                        /* LoopSeq 4 */
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            var_19 = ((unsigned int) max((arr_4 [i_0]), (((/* implicit */unsigned short) arr_2 [2U] [i_0 + 1]))));
                            var_20 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) 3145216488U)), (max((arr_23 [i_0] [(_Bool)1] [11U] [i_6] [i_7]), (arr_17 [i_0] [i_2] [i_2] [i_1])))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_21 = (+((+(min((((/* implicit */unsigned int) (_Bool)1)), (arr_13 [i_0 + 1] [i_1] [i_0 + 1] [i_6]))))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15516))) + (var_10)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (18177124U) : (980546413U)))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3188757228010942452ULL)) ? (((/* implicit */int) (unsigned short)4674)) : (((/* implicit */int) arr_20 [i_0] [i_0 + 2] [(unsigned short)9] [i_0 + 2] [i_8] [i_6])))))))))))));
                            var_23 += ((/* implicit */unsigned long long int) (_Bool)1);
                            var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_0 + 1] [i_1] [i_2] [i_6] [i_6]))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1)))))));
                            arr_32 [i_0] [i_1] [i_1] [i_0] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [(_Bool)1] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9] [i_6] [(unsigned short)2] [i_0 - 2]))) : (arr_28 [i_0 + 2] [i_1] [i_2] [i_2] [i_2] [i_6] [i_9]))))))) && (((_Bool) 10686667072843425101ULL))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            var_26 |= ((/* implicit */_Bool) ((((unsigned long long int) var_1)) + (((((/* implicit */_Bool) (unsigned short)62068)) ? (max((18180329746881878115ULL), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((unsigned int) var_2)))))));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) 4087747732U))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((16514522056994369374ULL), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 549755813887ULL))))) : (((((/* implicit */_Bool) arr_4 [(unsigned short)10])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (var_4)))))))));
                                var_29 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 799211103U)), (15533121430025459452ULL)));
                                arr_41 [i_0] [i_1] [i_0] [i_1] [i_12] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15257986845698609163ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)4066))))) - ((+(1932222016715182264ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 += ((/* implicit */unsigned int) min((arr_14 [i_0 + 2] [i_0 + 2] [i_0] [i_0]), (var_11)));
    }
    var_31 |= ((/* implicit */unsigned short) var_1);
}
