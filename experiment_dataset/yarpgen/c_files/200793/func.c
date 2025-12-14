/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200793
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_14))))) : (((/* implicit */int) (short)12787))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-12818)) : (((/* implicit */int) var_14))))), (var_4))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_20 = ((((/* implicit */int) (short)-12828)) ^ (0));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)12817)) + (((/* implicit */int) arr_0 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 14065739809699349285ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) (short)-12803)) : (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_12))))))), (((((/* implicit */int) var_12)) / (((/* implicit */int) arr_5 [i_1] [i_1 - 1]))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) -2037111456925147971LL);
                                var_23 &= ((/* implicit */int) ((((((((/* implicit */_Bool) 448047126)) || (((/* implicit */_Bool) (short)666)))) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_4 [i_2 + 2] [i_1 - 1])), (((((/* implicit */int) var_18)) | (((/* implicit */int) var_2))))))) : (max((((((/* implicit */_Bool) arr_16 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_17))), (((/* implicit */unsigned int) arr_10 [i_4] [i_4] [i_4] [i_4]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 21; i_6 += 4) 
                    {
                        for (signed char i_7 = 1; i_7 < 23; i_7 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) (short)12787);
                                var_25 = var_6;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 *= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_18 [i_1] [i_1] [i_1 + 1] [i_1] [6])))), (min((((/* implicit */unsigned long long int) var_10)), (274341036032ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 2] [i_1])) | (((/* implicit */int) (signed char)-105)))))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 22; i_8 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 2) 
        {
            for (short i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) arr_7 [i_8] [4U] [4U]);
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_8 - 1] [i_9 + 2])) & (((/* implicit */int) (signed char)-92))));
                        var_29 &= ((/* implicit */unsigned char) ((signed char) var_6));
                    }
                } 
            } 
        } 
        arr_32 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_8 + 2])) > (((/* implicit */int) (signed char)52))));
    }
    var_30 -= (_Bool)0;
}
