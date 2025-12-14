/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34436
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
    var_12 = ((/* implicit */unsigned long long int) var_7);
    var_13 -= ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)19)) < (((/* implicit */int) var_2)))))) - (var_5)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_1])) || (((/* implicit */_Bool) (signed char)19)))))) >= (((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 1])) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_2] [i_1])))));
                    var_16 = ((/* implicit */signed char) arr_2 [i_1]);
                    var_17 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) 32767)) && (((/* implicit */_Bool) 1222239286U))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_10 [i_0] [4] &= ((/* implicit */signed char) (-(arr_7 [i_1] [i_1] [i_1])));
                    var_18 &= ((/* implicit */signed char) ((((/* implicit */int) ((arr_7 [i_0] [i_1] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [12ULL] [4])))))) <= (var_1)));
                }
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), ((~(((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_1]))))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)19)) ? (3766248102U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57)))));
                        arr_17 [i_0] [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_4]))) : (arr_11 [i_0] [11ULL])));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        var_21 = (+(arr_9 [i_0]));
                        arr_22 [i_1] &= ((/* implicit */_Bool) (short)-5008);
                    }
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-19))) / (var_8))));
                        var_23 = ((/* implicit */unsigned int) arr_13 [12U] [12U] [(_Bool)1] [(unsigned char)13]);
                        arr_25 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1]);
                    }
                    var_24 = ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) arr_5 [i_4] [i_0])))) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1] [i_4])));
                }
            }
        } 
    } 
}
