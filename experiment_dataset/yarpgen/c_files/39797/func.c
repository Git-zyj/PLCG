/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39797
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_1)) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (var_0)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))) - (((var_1) << (((4294967291U) - (4294967291U)))))));
                    var_18 &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [(short)12])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (short)-22433)))) - (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)65535))))));
        var_20 = ((/* implicit */short) ((var_7) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34692)))));
    }
    /* LoopNest 2 */
    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */int) (-(min((((/* implicit */unsigned int) (short)3798)), (4294967280U)))));
                                arr_20 [(_Bool)1] [i_7] [i_3] [i_6] [i_3] [(unsigned short)21] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 + 3] [i_3] [(signed char)14] [i_3 - 1]))) - (arr_15 [i_3])))) ? ((-(((/* implicit */int) (unsigned short)60027)))) : (((/* implicit */int) ((unsigned short) ((unsigned int) arr_17 [i_3] [i_4] [i_5] [i_6] [i_6]))))));
                                arr_21 [i_3] [i_4] [i_5] [(unsigned short)1] [i_7] = ((/* implicit */unsigned char) var_13);
                            }
                        } 
                    } 
                } 
                var_22 = ((((/* implicit */int) arr_14 [i_3] [i_3 + 3] [i_3 + 3] [i_3 + 1])) - (((/* implicit */int) (unsigned short)5220)));
                var_23 += ((/* implicit */int) ((((unsigned int) var_10)) / (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)39288), ((unsigned short)11521)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) (unsigned short)5220)))));
}
