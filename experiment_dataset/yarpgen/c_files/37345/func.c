/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37345
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) ((arr_1 [(signed char)3]) == (arr_1 [i_0]))))));
        var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_6)) : (var_18)))) ? ((+(arr_1 [i_0]))) : ((-(((/* implicit */int) (unsigned short)37076))))));
        var_22 = ((/* implicit */unsigned short) (-((+(max((((/* implicit */int) (signed char)115)), (1015808)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) (~(arr_0 [i_1 - 1] [i_1])));
            var_24 = ((/* implicit */long long int) var_16);
            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1]))));
        }
        /* LoopNest 3 */
        for (signed char i_2 = 3; i_2 < 21; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        var_26 = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) (-(var_0)))), ((-(var_18)))))));
                        var_27 *= ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3]))) & (arr_0 [i_2 + 3] [i_2])))));
                        arr_16 [i_0] [i_2 - 3] [i_3] [i_2 - 3] [i_2 - 2] [i_0] = ((/* implicit */unsigned int) var_8);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            {
                var_28 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) var_13)), (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_13))))));
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) max((max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1451140072)))), (((((/* implicit */_Bool) arr_20 [i_5] [i_6] [i_6])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_9)), (-1594856371))))))))))));
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 12; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        {
                            var_30 -= ((/* implicit */unsigned int) arr_4 [i_7 - 1] [i_5 - 1]);
                            /* LoopSeq 2 */
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) 190547505U)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-112)) >= (1089675413)))))))));
                                var_32 = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) 8998849769434077522LL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32738))))))), ((-((~(var_2)))))));
                                var_33 -= ((/* implicit */signed char) 197182336U);
                            }
                            for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                            {
                                var_34 = ((/* implicit */long long int) max((min((1594856379), (((/* implicit */int) arr_19 [i_5 - 1] [i_7 - 1] [i_7 - 1])))), (((/* implicit */int) max((arr_9 [i_5 - 2]), (arr_9 [i_6]))))));
                                var_35 = ((/* implicit */unsigned long long int) ((max((1015808), (arr_4 [i_5] [i_5]))) << (((((1557763482) | (1015804))) - (1558183924)))));
                            }
                            var_36 = ((/* implicit */unsigned long long int) arr_9 [i_5]);
                            var_37 = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_24 [i_5] [i_7])), (max((arr_0 [i_5 + 1] [i_5 - 1]), (((/* implicit */unsigned int) (short)5916))))));
                            var_38 = ((/* implicit */short) arr_14 [(signed char)18] [i_7] [(signed char)18]);
                        }
                    } 
                } 
                var_39 *= ((/* implicit */signed char) (~((+(min((var_16), (((/* implicit */int) arr_7 [i_6] [i_5 + 2] [i_6]))))))));
            }
        } 
    } 
    var_40 = var_9;
}
