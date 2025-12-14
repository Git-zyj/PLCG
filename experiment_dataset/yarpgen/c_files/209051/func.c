/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209051
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_7))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28540)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (short)-4371)))))));
        var_13 = arr_0 [(_Bool)1];
    }
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */short) arr_5 [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), ((-(((/* implicit */int) (signed char)-127))))))) ? (((int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1]))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    var_15 -= ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1)) && (((/* implicit */_Bool) (short)-1))))), (((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))) : (var_1)))))));
                    var_16 = ((/* implicit */_Bool) arr_12 [i_3] [i_1] [i_1] [i_1 + 1]);
                    arr_15 [i_3] [i_1] [i_1] = (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_6)))));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */unsigned int) arr_11 [(unsigned char)8] [(unsigned char)8]);
        var_17 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_16 [i_4 - 1] [i_4 + 1])))), (min((((/* implicit */int) arr_0 [i_4 + 1])), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) (unsigned short)51821))))))));
    }
    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 4) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */int) arr_11 [i_5] [i_5]);
        /* LoopNest 3 */
        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    {
                        var_18 = ((/* implicit */short) var_8);
                        arr_32 [i_5] [i_5] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_5] [i_5]))));
                        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_28 [i_5] [i_6] [i_7] [i_6]))))) || (arr_2 [i_6 + 1]))) ? (max((var_11), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)18)))))) : (((/* implicit */unsigned int) max((-1902595578), (arr_17 [i_7]))))));
                        var_20 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_26 [i_8]) : (((/* implicit */int) arr_11 [i_5 + 1] [i_8])))) : (((/* implicit */int) var_4))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) (+((-(((int) (unsigned char)96))))));
    }
    var_23 = ((/* implicit */unsigned char) ((unsigned long long int) ((short) 16155561888014027410ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        for (int i_10 = 3; i_10 < 12; i_10 += 4) 
        {
            {
                arr_38 [i_9] = ((/* implicit */short) (-(max((((/* implicit */int) ((unsigned char) var_6))), (max((((/* implicit */int) arr_28 [i_9] [(unsigned short)2] [i_10] [i_10])), (var_9)))))));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) (~(3555602683U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51823))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_2))))) : ((+(var_8)))))))));
            }
        } 
    } 
}
