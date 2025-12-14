/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31532
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
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */short) ((int) (+((~(((/* implicit */int) (short)17864)))))));
                                var_12 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-14958))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0 + 1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0 + 1]))))) ? (5354327521530169366LL) : (((/* implicit */long long int) (~(((/* implicit */int) (short)14957)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 23; i_5 += 3) 
    {
        for (int i_6 = 1; i_6 < 23; i_6 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    arr_20 [i_5] [(unsigned char)10] [i_5] = ((/* implicit */_Bool) ((unsigned short) 1951675402U));
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        var_13 = ((/* implicit */_Bool) (short)12629);
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~((~((-(((/* implicit */int) arr_21 [i_5] [i_6] [4U] [i_5])))))))))));
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (short)-11677))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (((((/* implicit */_Bool) 1129509424)) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (short)-14945)))))) : (5354327521530169377LL)))));
                            var_17 ^= ((/* implicit */long long int) var_6);
                        }
                        for (int i_10 = 1; i_10 < 23; i_10 += 3) 
                        {
                            var_18 = ((/* implicit */int) ((signed char) arr_25 [23ULL] [23ULL] [(_Bool)1] [i_8] [i_10]));
                            arr_30 [i_5] [i_6] [18] [i_8] [i_5] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) max((var_9), (((/* implicit */short) (unsigned char)38))))) / (((/* implicit */int) (short)16383))))));
                            arr_31 [i_5] [i_6] = ((/* implicit */unsigned long long int) (-((-((~(((/* implicit */int) (unsigned char)56))))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                        {
                            arr_36 [(short)19] [i_6 - 1] [(unsigned char)17] [i_7] [i_8] [i_5] [(unsigned char)17] = ((/* implicit */unsigned long long int) var_3);
                            arr_37 [i_11] [6LL] [(_Bool)1] [i_6 + 1] [6LL] [i_5] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)14948)) << (((var_0) - (1306163100)))));
                            var_19 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (short)14941)))) | (((/* implicit */int) (unsigned char)74))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                        {
                            var_20 += ((/* implicit */unsigned int) max((((/* implicit */long long int) 4294967295U)), ((-((+(5354327521530169367LL)))))));
                            var_21 = var_2;
                            var_22 = ((/* implicit */short) (-(((unsigned int) (-(((/* implicit */int) var_9)))))));
                            var_23 = ((/* implicit */long long int) ((var_10) | (var_2)));
                        }
                        var_24 = (((-(var_1))) >= (((/* implicit */unsigned long long int) ((var_6) ? (((((/* implicit */_Bool) arr_16 [9U] [8ULL])) ? (((/* implicit */int) var_6)) : (var_5))) : (((/* implicit */int) (unsigned char)1))))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)200))))), (((((/* implicit */_Bool) 4121960083U)) ? (var_1) : (((/* implicit */unsigned long long int) var_2))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_13 = 2; i_13 < 21; i_13 += 3) 
                    {
                        var_26 = ((((/* implicit */unsigned int) var_3)) | ((-(var_10))));
                        var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_0)) : (var_1))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_3))))))));
                        arr_42 [i_5] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                    }
                }
                arr_43 [i_5] [i_5] = ((/* implicit */short) ((signed char) ((long long int) (!(((/* implicit */_Bool) 1061453351U))))));
                arr_44 [i_5] [i_6 + 1] [4U] = (+(min((((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (4844488766957936725ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), ((short)-7219)))))));
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_6))));
            }
        } 
    } 
}
