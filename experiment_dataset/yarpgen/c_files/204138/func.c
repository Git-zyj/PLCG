/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204138
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
    var_13 = var_4;
    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (signed char)-69)), (var_2)));
    var_15 = var_7;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) 1551281382);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (unsigned short)32767);
                                arr_13 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)20991)))))));
                                var_18 = ((/* implicit */_Bool) arr_10 [i_2] [i_2]);
                                var_19 = ((/* implicit */_Bool) (-(arr_6 [i_0 + 1] [i_0 - 1])));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] = ((/* implicit */_Bool) (unsigned short)32774);
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_0 + 2] [i_0])) | (((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1]))));
                    var_21 = ((/* implicit */long long int) (!(var_0)));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_22 &= ((/* implicit */signed char) (-((+(((/* implicit */int) max((arr_12 [6U] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */short) (signed char)127)))))))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 3; i_6 < 13; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) arr_9 [i_5] [i_5] [i_7] [(_Bool)1]);
                        arr_27 [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((511U), (arr_1 [i_6 + 1])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -283334307673038557LL))))), ((unsigned char)177)))) : ((~((~(((/* implicit */int) var_9))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                {
                    var_24 = min((((/* implicit */short) var_12)), (arr_23 [i_5] [(unsigned char)2] [i_9] [i_10]));
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_5))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) var_12);
    }
}
