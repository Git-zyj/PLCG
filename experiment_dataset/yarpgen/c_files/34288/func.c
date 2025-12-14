/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34288
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
    var_14 = ((/* implicit */short) ((unsigned char) var_12));
    var_15 *= ((/* implicit */short) max((((/* implicit */int) (signed char)-85)), ((+(((/* implicit */int) max((var_13), ((signed char)30))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_17 *= ((/* implicit */unsigned char) (~(-1285324041)));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            arr_12 [i_3] [i_3] [i_3] [13] [14LL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2 + 2] [i_2 - 4] [(short)14] [i_2 - 3] [i_3 + 1])) ? (((/* implicit */int) ((((/* implicit */long long int) arr_9 [i_0] [(unsigned char)9] [i_3 - 1] [i_4])) > (arr_11 [i_0] [(short)5] [i_0] [(unsigned char)1] [i_3])))) : (((/* implicit */int) (_Bool)1))));
                            var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_2 + 3] [i_3 + 1] [i_3 + 1]))));
                            arr_13 [i_3] [i_2] [i_3] [i_4] = ((/* implicit */short) arr_0 [i_2]);
                        }
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
                        {
                            arr_16 [i_5] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */int) arr_10 [i_0] [(unsigned short)3] [5U] [5U] [i_5]);
                            arr_17 [7] [7] [i_2] [i_3] [i_5] = ((/* implicit */unsigned int) arr_3 [(short)13] [(short)13] [i_3]);
                            var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-43))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_3] [i_3 - 1] [i_3 + 2] [i_2 + 1] [i_3])) ? (arr_19 [i_3] [i_3 - 1] [i_3 + 2] [i_2 + 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528)))));
                            arr_21 [(unsigned char)5] [i_3] [i_2] [i_3] [(unsigned char)2] = ((/* implicit */unsigned char) (unsigned short)7);
                            var_21 = ((/* implicit */long long int) ((arr_8 [i_3 + 2] [i_2 - 2] [i_2] [i_3]) >= (arr_8 [i_3 + 1] [i_2 + 1] [4LL] [i_3])));
                        }
                    }
                } 
            } 
        } 
        arr_22 [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_3)) ? (arr_9 [(signed char)0] [(_Bool)0] [i_0] [i_0]) : (arr_4 [i_0] [i_0]))));
        arr_23 [1] [1] = ((/* implicit */signed char) arr_18 [(short)14] [i_0] [i_0] [i_0] [i_0]);
    }
    for (short i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        arr_28 [i_7] = arr_26 [13LL];
        arr_29 [i_7] = ((/* implicit */short) (((-(((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) (short)-4096)) : (((/* implicit */int) arr_25 [i_7])))))) >= (-2147483645)));
        arr_30 [(_Bool)1] [i_7] = ((/* implicit */int) (signed char)-104);
    }
    for (short i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) ((signed char) min((max((var_7), (((/* implicit */short) (signed char)37)))), (((/* implicit */short) arr_31 [(_Bool)1])))));
        arr_33 [i_8] = arr_31 [i_8];
    }
}
