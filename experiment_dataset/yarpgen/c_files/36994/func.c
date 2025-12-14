/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36994
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) var_7);
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_3] = (!(((/* implicit */_Bool) ((long long int) (-(var_9))))));
                                var_14 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_2 - 2] [i_2] [i_2])) ? (arr_12 [i_0] [i_2 + 1] [i_4] [i_0] [i_4] [i_4]) : (arr_11 [i_1] [i_2 - 2] [18] [i_0])))), ((-(arr_7 [i_0] [i_2 + 2] [i_2 + 2] [i_4])))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))), ((~((~(((/* implicit */int) var_10))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) 3705765943U);
    /* LoopSeq 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_11 [i_6 + 1] [i_6 + 2] [i_6 - 1] [(unsigned short)20])) : (var_1)))));
            arr_21 [i_5] [i_6 - 1] [i_5] = ((/* implicit */short) max((min((arr_7 [i_6 + 2] [i_6 - 1] [i_6 - 1] [i_6 - 1]), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (~((-(arr_12 [i_5] [i_5] [i_5] [(short)12] [(short)12] [i_5]))))))));
            var_17 ^= ((/* implicit */short) (+((+(arr_15 [i_6 + 2] [i_6])))));
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        {
                            arr_31 [i_8] [i_8] [i_7] [i_6] [i_8] = ((/* implicit */int) var_8);
                            var_18 = ((/* implicit */int) max((((/* implicit */long long int) arr_1 [i_5] [i_5])), ((+(var_11)))));
                            var_19 &= ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
                            arr_32 [i_6] [i_9] [i_8] [i_8] [(_Bool)1] [i_6] [i_5] = ((/* implicit */signed char) var_3);
                        }
                    } 
                } 
            } 
        }
        var_20 = ((/* implicit */long long int) (unsigned short)11714);
        var_21 = ((/* implicit */long long int) (+((-(((unsigned int) var_9))))));
        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(var_12))))))) : (min((var_9), (((/* implicit */long long int) var_12))))));
        arr_33 [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_5 [i_5])))), (((/* implicit */int) (unsigned short)53830))))), (max((((/* implicit */unsigned int) var_8)), (arr_16 [i_5] [i_5])))));
    }
    for (int i_10 = 0; i_10 < 23; i_10 += 1) 
    {
        arr_36 [i_10] = var_8;
        arr_37 [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-67))))) ? (((/* implicit */int) arr_35 [i_10])) : (((/* implicit */int) arr_35 [i_10])))))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 965789701)))))) ? (1065353216U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_11] [i_11] [i_11] [i_11])))))));
        arr_40 [i_11] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) arr_7 [i_11] [i_11] [i_11] [i_11])))), (((/* implicit */unsigned long long int) min((arr_18 [i_11] [i_11]), (arr_18 [i_11] [i_11]))))));
    }
}
