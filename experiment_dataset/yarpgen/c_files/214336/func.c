/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214336
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
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) 35180077121536ULL)) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_6)) >> (((min((11434815749497048790ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) - (11434815749497048772ULL))))))))));
    var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_11)), (var_0))), (((/* implicit */unsigned long long int) (+(var_7))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-31)), (var_9)))) : (((((((/* implicit */_Bool) var_1)) ? (var_2) : (var_5))) - (var_2)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [15] [i_0] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_12))))));
                        arr_14 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) var_0);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */_Bool) var_0);
        arr_15 [i_0] = ((/* implicit */long long int) (-(((unsigned int) var_11))));
        /* LoopSeq 3 */
        for (signed char i_4 = 3; i_4 < 20; i_4 += 4) 
        {
            var_17 = ((/* implicit */short) (-(((/* implicit */int) arr_6 [i_4] [i_4] [i_4 - 1] [i_4 - 2]))));
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4])))))) & (((var_10) << (((/* implicit */int) arr_12 [i_0]))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_22 [i_0] = var_9;
                        arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
                    }
                } 
            } 
            arr_24 [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) < (var_7))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0]))));
                        var_20 = ((/* implicit */int) arr_21 [i_0] [i_0] [i_7] [(unsigned char)10] [(unsigned char)10] [i_9]);
                        arr_32 [i_0] [i_8] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_26 [i_0] [i_8] [i_9]) * (((/* implicit */int) ((_Bool) var_9)))));
                    }
                } 
            } 
            arr_33 [i_0] [i_7] [i_7] = ((/* implicit */unsigned int) var_12);
        }
        for (long long int i_10 = 2; i_10 < 20; i_10 += 3) 
        {
            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_10 + 1] [i_10] [i_10 - 2] [i_10 - 1] [18]))));
            var_22 += ((/* implicit */signed char) (!(arr_8 [i_10] [i_10 - 2] [i_10 - 2])));
        }
        var_23 = ((/* implicit */unsigned short) max((var_23), (arr_6 [i_0] [i_0] [i_0] [i_0])));
    }
    var_24 = ((/* implicit */unsigned char) var_2);
}
