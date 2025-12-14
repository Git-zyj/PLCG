/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197819
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (-1066164753)));
    var_17 = var_5;
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-32759))))) % (((/* implicit */unsigned int) (~(((/* implicit */int) var_13)))))))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) ((((((/* implicit */int) (short)32738)) >= (311267586))) || (((/* implicit */_Bool) var_2)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_8);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_7 [(short)8] [(short)8] [(short)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((((/* implicit */_Bool) arr_3 [8LL] [i_1] [i_0])) ? (arr_5 [i_0] [i_0]) : (var_15))) : (arr_5 [i_0] [i_1])));
            arr_8 [i_0] = ((/* implicit */unsigned short) (+(17245105828296556279ULL)));
        }
        for (signed char i_2 = 3; i_2 < 23; i_2 += 2) 
        {
            arr_11 [i_0] = ((/* implicit */long long int) var_14);
            arr_12 [i_0] = ((arr_5 [i_0] [i_0]) < (((/* implicit */int) (short)-29935)));
        }
        arr_13 [22] [(unsigned char)10] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_6))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 2627942158U)))));
        arr_17 [i_3] [i_3] = ((/* implicit */signed char) arr_5 [(_Bool)1] [i_3]);
        arr_18 [(unsigned char)17] = ((/* implicit */signed char) arr_1 [(unsigned char)2]);
        arr_19 [i_3] = ((/* implicit */unsigned int) (+(arr_9 [i_3] [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
    {
        arr_22 [i_4] = (~((-(((/* implicit */int) (unsigned char)128)))));
        /* LoopNest 3 */
        for (short i_5 = 2; i_5 < 22; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                for (int i_7 = 3; i_7 < 23; i_7 += 4) 
                {
                    {
                        arr_32 [i_4] [i_5 - 2] [i_6] [i_6] [(short)14] [i_5 - 2] = ((/* implicit */signed char) var_3);
                        arr_33 [i_6] [i_7 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_7 - 2] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7 - 1] [i_5] [i_7 - 2]))) : (arr_31 [i_7 - 1] [i_6] [i_6] [i_5 + 2])));
                    }
                } 
            } 
        } 
        arr_34 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)29941)) % (-1066164727)));
        arr_35 [i_4] = ((/* implicit */unsigned char) ((arr_20 [i_4] [i_4]) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-29930)))));
    }
}
