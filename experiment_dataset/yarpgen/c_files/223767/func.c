/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223767
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) (-(((arr_10 [i_3] [i_3] [i_2] [i_3] [i_3] [i_0]) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))));
                            arr_13 [i_0] [6ULL] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_3]))))) ? (((((/* implicit */_Bool) 6U)) ? (arr_0 [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [13] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [2] [i_0] [i_2])), (arr_1 [5]))))))));
                            arr_14 [i_0] [i_0] [9U] [(unsigned char)7] [i_3] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [3] [i_0] [i_0]))))) | (((int) arr_8 [i_3] [i_1] [i_2] [i_1])));
                            arr_15 [i_0] [i_1] [i_2] [(unsigned short)3] [i_3] [i_2] = min(((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (arr_1 [i_0]))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_3]))))));
                            arr_16 [i_0] [(_Bool)0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) var_8)) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) 1696207903)) : (var_6))) : (((var_4) ? (arr_6 [13] [i_1] [i_1] [i_1]) : (arr_6 [i_0] [i_0] [i_2] [i_3])))))) ? (((arr_1 [i_0]) + (arr_1 [i_0]))) : ((-(((/* implicit */int) min((arr_7 [i_3] [i_2] [i_1] [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))))));
                        }
                    } 
                } 
                arr_17 [i_1] = ((_Bool) max((-447427885), (((/* implicit */int) (unsigned char)231))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                arr_27 [i_4] [i_4] [i_4] [11U] [(_Bool)1] [i_6 + 1] [(_Bool)1] = ((/* implicit */int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_4])), (var_11)))) ? (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) var_8))))) : (((unsigned long long int) arr_21 [i_0]))))));
                                arr_28 [i_0] [i_4] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]) >> (((/* implicit */int) arr_24 [i_5] [i_6 + 1] [(_Bool)1]))))) || ((!(((((/* implicit */_Bool) -1952560567)) && (((/* implicit */_Bool) arr_9 [i_4] [i_5] [i_4]))))))));
                                arr_29 [i_0] [i_0] [6U] [i_4] [i_0] = ((/* implicit */unsigned short) ((_Bool) arr_24 [i_0] [i_1] [i_0]));
                            }
                        } 
                    } 
                } 
                arr_30 [10ULL] [(_Bool)1] [10ULL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [9U] [i_0])) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [(_Bool)1])) : (((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_0]))))) ? (max((((/* implicit */unsigned long long int) (_Bool)0)), ((((_Bool)1) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((int) var_13)))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_8)))))) * (var_0)));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62835))) != (min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_6))), (var_5)))));
    /* LoopNest 3 */
    for (unsigned short i_7 = 2; i_7 < 10; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                {
                    arr_39 [i_7] [i_7] [i_9] = ((/* implicit */int) arr_31 [i_8]);
                    arr_40 [i_7] [i_7] = ((/* implicit */unsigned char) ((unsigned long long int) ((arr_10 [13U] [4] [i_8] [i_8] [i_8] [i_9]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12)))) : (((unsigned long long int) arr_0 [i_9] [i_9])))));
                    arr_41 [i_9] [i_7] [i_7] [i_7] = ((/* implicit */short) arr_11 [i_7] [i_7] [4] [i_7] [i_7]);
                }
            } 
        } 
    } 
}
