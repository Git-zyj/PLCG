/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248092
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((unsigned long long int) var_5)) : (((((/* implicit */_Bool) var_13)) ? (var_13) : (var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) : (max((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), (max((var_7), (((/* implicit */long long int) var_2))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_13 [i_3] [i_2] [i_2] [i_1 - 1] [i_3] |= ((/* implicit */unsigned char) (-(-9012398985505428920LL)));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(arr_7 [i_0] [i_2] [i_4]))), (((/* implicit */long long int) arr_4 [i_2] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_1] [i_2]))) == (((/* implicit */int) max((arr_6 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_3 [i_3] [i_2] [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (arr_0 [i_2] [i_4 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_2] [i_2] [i_2] [i_3] [i_0])))))) ? (((/* implicit */int) arr_6 [i_1] [i_1 + 1] [(signed char)1] [i_4 + 2])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_2])), (arr_12 [i_0] [i_1] [i_2] [i_2]))))))));
                                var_16 |= ((/* implicit */_Bool) (+((-(((long long int) arr_3 [i_4] [i_3] [i_1]))))));
                                arr_14 [i_0] [i_1 - 1] [i_2] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) max((((unsigned long long int) max((arr_11 [i_4 + 3] [i_3] [i_0]), (((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_2] [(unsigned char)10] [i_2] [i_4]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))))) ? ((+(((/* implicit */int) arr_11 [i_0] [i_2] [i_4])))) : (((/* implicit */int) arr_3 [(unsigned short)5] [i_4 + 3] [i_4])))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_9 [14ULL] [i_2] [i_1] [i_1] [i_1] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [6U] [i_1]))) : ((~((~(arr_7 [i_2] [i_1 + 1] [i_0])))))));
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) 705354303U))))), ((~(((/* implicit */int) arr_1 [i_1 - 1]))))));
                }
            } 
        } 
    } 
}
