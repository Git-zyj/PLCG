/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212115
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
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_14 = ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0 - 1])))));
                            arr_13 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_4 = 3; i_4 < 16; i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [i_4] [i_0 + 3] = ((/* implicit */signed char) ((_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_0]))))), (arr_10 [i_4 - 2] [i_0 - 1] [i_1]))));
                    var_15 = ((/* implicit */int) 4857081944106353811ULL);
                }
                for (signed char i_5 = 3; i_5 < 16; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((short) ((long long int) arr_17 [i_0] [i_5 - 3] [i_5])));
                        var_17 = ((/* implicit */int) (short)12376);
                    }
                    var_18 = ((/* implicit */_Bool) ((long long int) ((unsigned short) arr_15 [i_0 + 3])));
                }
                arr_21 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */int) (_Bool)0)), (268421460))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((unsigned long long int) ((int) var_7)));
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            {
                arr_26 [i_8] [i_7] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 1282990296)), (14355208279770654934ULL)));
                arr_27 [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) arr_10 [i_7] [i_8] [16ULL]);
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    var_21 = (i_9 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) var_1))) & (arr_6 [i_9] [i_9] [i_7]))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned char) 2147483647))) - (204)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_24 [i_8])) > (((/* implicit */int) arr_24 [i_7]))))) : ((((((_Bool)1) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_3 [i_8] [i_9]))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((((((/* implicit */long long int) ((/* implicit */int) var_1))) & (arr_6 [i_9] [i_9] [i_7]))) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned char) 2147483647))) - (204)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_24 [i_8])) > (((/* implicit */int) arr_24 [i_7]))))) : ((((((_Bool)1) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_3 [i_8] [i_9])))))));
                    arr_30 [i_7] [i_9] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_4 [i_7])) / (((/* implicit */int) arr_4 [i_7]))))));
                    arr_31 [i_7] [i_7] [i_9] [i_9] = ((/* implicit */unsigned int) arr_12 [i_7] [i_8] [i_8] [i_9] [i_9] [i_9]);
                    arr_32 [i_7] [i_7] [i_9] [i_9] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (unsigned short)44460)) : (((/* implicit */int) arr_29 [i_9] [i_9] [i_9] [i_9]))))))), (((unsigned long long int) arr_12 [i_7] [i_7] [i_7] [i_9] [i_7] [i_7]))));
                }
            }
        } 
    } 
}
