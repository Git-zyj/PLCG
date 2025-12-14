/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224120
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((signed char) arr_4 [i_0] [i_1]);
                arr_6 [i_1] [i_0] [i_0] |= ((/* implicit */unsigned char) max(((~(3675904145729007809LL))), (((/* implicit */long long int) ((signed char) ((int) -3924545331896260911LL))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((unsigned int) ((((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) % (max((((/* implicit */unsigned int) arr_3 [(unsigned short)1] [(unsigned short)1])), (1206428128U))))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    {
                        var_21 = ((/* implicit */short) ((long long int) ((3924545331896260905LL) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [(unsigned short)6]))))));
                        var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)2])) ? (((/* implicit */unsigned int) arr_7 [i_3] [(unsigned char)0])) : (arr_9 [i_2])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) 3U)) | (-3924545331896260911LL)))))));
                        var_23 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_3 [12] [(unsigned char)4])) ? ((~(((/* implicit */int) var_19)))) : (((arr_11 [i_2] [i_3] [i_3]) + (((/* implicit */int) (short)4771)))))));
                    }
                } 
            } 
        } 
        arr_17 [i_2] = ((/* implicit */short) (~(var_9)));
    }
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        arr_21 [i_6] [i_6] = (-(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_19 [i_6])))))));
        arr_22 [i_6] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) arr_18 [i_6]))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) % (-3924545331896260923LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)31), (arr_18 [i_6]))))))));
    }
}
