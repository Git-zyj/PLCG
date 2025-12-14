/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197119
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((max((min((var_11), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [(unsigned short)10])))), (((/* implicit */unsigned long long int) max(((unsigned short)51674), (((/* implicit */unsigned short) var_6))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), ((+(((/* implicit */int) (unsigned short)65160)))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)61440)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [8U])))) << ((((-(((/* implicit */int) var_1)))) - (12804)))))));
                            arr_8 [i_0] [i_1] [(_Bool)1] [i_3] [i_1] = arr_2 [i_3] [(signed char)12] [i_1 + 3];
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                            {
                                arr_11 [i_0] [i_4] [i_1 - 1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) arr_2 [i_0] [i_2 - 1] [i_3]);
                                arr_12 [i_0] [i_1] [i_0] [23U] [i_0] = ((/* implicit */unsigned char) 1288476090263349818ULL);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) (unsigned short)61415);
                                arr_14 [i_0] [i_0] [(unsigned short)21] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((int) arr_0 [i_3] [i_1 - 1]))));
                            }
                            for (unsigned char i_5 = 1; i_5 < 21; i_5 += 4) 
                            {
                                arr_18 [(unsigned short)0] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_1 + 1] [i_1 + 1] [i_2 - 1] [i_2])), ((unsigned short)12560))))));
                                arr_19 [i_5] [i_3] [i_0] [i_5] = ((/* implicit */int) var_4);
                            }
                            for (long long int i_6 = 2; i_6 < 24; i_6 += 4) 
                            {
                                var_16 = ((/* implicit */unsigned char) min((((arr_21 [i_6 + 1] [(unsigned short)24] [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1]) ? (((/* implicit */int) arr_21 [i_6 - 1] [i_6] [i_6] [i_6] [i_6 + 1] [(unsigned short)3] [i_6])) : (((/* implicit */int) (unsigned short)12560)))), (((((/* implicit */int) arr_21 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 2] [i_6] [i_6 - 2])) * (((/* implicit */int) arr_21 [i_6 + 1] [i_6 + 1] [i_6] [i_6 - 2] [i_6 - 1] [i_6] [i_6 - 2]))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1 + 3] [i_1] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)19432))))) : (((1288476090263349818ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52975)))))));
                                arr_22 [i_6] [i_3] [i_2] [i_1] [i_1 + 3] [i_1 + 1] [i_0] = ((/* implicit */signed char) min((((((/* implicit */int) ((arr_9 [i_0] [i_1] [i_1] [i_3] [i_1]) >= (((/* implicit */long long int) 2093932494))))) & (((((/* implicit */int) var_1)) * (((/* implicit */int) var_10)))))), ((+(((/* implicit */int) (unsigned short)52990))))));
                            }
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (unsigned char)255))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned short) (unsigned char)42)), ((unsigned short)61415)));
    var_20 = ((/* implicit */int) min((var_20), (1926497934)));
    var_21 = ((/* implicit */int) var_10);
}
