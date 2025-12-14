/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201040
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
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) arr_3 [i_0 + 2])), (var_3)))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)128))) : (((/* implicit */int) (unsigned char)134)))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) && (((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)2060)))))))));
    }
    /* vectorizable */
    for (short i_1 = 4; i_1 < 13; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            {
                                arr_19 [i_1] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2589414068U)) ? (((/* implicit */int) arr_14 [i_1 + 2])) : (((/* implicit */int) arr_14 [i_1 - 2]))));
                                arr_20 [i_3] = ((/* implicit */long long int) (-(((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_3] [i_4])))))));
                                arr_21 [i_1] [i_1] [i_3] = ((/* implicit */int) arr_12 [i_1 + 2] [i_1 - 2] [i_1 - 2]);
                            }
                        } 
                    } 
                    var_17 = arr_0 [i_3];
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_6 = 3; i_6 < 14; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_3))))))));
                        arr_29 [i_8] [i_6] [i_7] [i_6] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_1 - 2] [i_6] [i_7] [i_8]))));
                        var_19 = ((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1]);
                    }
                } 
            } 
        } 
        arr_30 [i_1] = ((/* implicit */long long int) ((unsigned int) arr_23 [i_1 + 2]));
    }
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(max((var_13), (((/* implicit */long long int) var_8)))))))));
    var_21 = ((/* implicit */unsigned short) var_9);
}
