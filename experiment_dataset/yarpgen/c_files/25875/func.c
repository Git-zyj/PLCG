/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25875
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */int) arr_1 [i_1]);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) min((327778872U), (((/* implicit */unsigned int) (unsigned short)57433))))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_1]))));
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 3] [i_1] [i_4])))))) % (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)60)), (var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 58485544U)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) (unsigned short)57427))))) : (max((((/* implicit */long long int) var_6)), (arr_13 [i_0] [6LL])))))));
                                var_18 = ((/* implicit */signed char) arr_7 [i_0] [i_1] [(_Bool)1] [i_3]);
                            }
                        } 
                    } 
                } 
                arr_18 [i_0 - 3] [i_1] = ((/* implicit */signed char) var_3);
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 12; i_5 += 2) 
                {
                    for (long long int i_6 = 1; i_6 < 11; i_6 += 2) 
                    {
                        {
                            arr_25 [i_0 - 1] [i_1] [i_5] [i_6 + 2] = ((/* implicit */_Bool) ((((long long int) var_14)) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6] [i_5] [i_1])))));
                            /* LoopSeq 1 */
                            for (short i_7 = 1; i_7 < 12; i_7 += 3) 
                            {
                                arr_28 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */short) arr_8 [i_0] [i_1] [i_6]);
                                arr_29 [i_0] [i_0] [i_5 - 1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) var_0);
                            }
                            /* LoopSeq 2 */
                            for (short i_8 = 0; i_8 < 14; i_8 += 1) 
                            {
                                arr_34 [i_6] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_0 - 3] [i_5] [i_5 + 2] [i_6 + 2]))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8103)))));
                                var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)8117)) * (((/* implicit */int) (short)480)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) var_0))))));
                                var_20 = ((/* implicit */short) ((unsigned char) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_6]))) & (var_8)))));
                            }
                            for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                            {
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31155)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_5] [i_5] [i_6 + 1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_22 [i_5] [i_5 + 1] [5LL] [i_9]), (((/* implicit */unsigned long long int) arr_8 [i_9] [i_1] [i_0])))))))) : (((/* implicit */int) var_11))));
                                arr_37 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) (unsigned short)57413)) ? (arr_35 [i_5] [i_6 + 1] [i_6 + 2] [i_6] [i_6] [i_6] [i_6 - 1]) : (-7420645560977297161LL))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0] [i_0 - 2] [i_0 + 1]))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_10)), (var_8)));
    var_23 = ((/* implicit */unsigned long long int) (-(-7420645560977297165LL)));
}
