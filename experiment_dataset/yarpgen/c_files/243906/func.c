/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243906
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
    var_17 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) var_1);
        arr_2 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned short) 4324219519213452295ULL);
        var_19 |= ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
    }
    for (short i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_14);
        var_20 = ((/* implicit */signed char) ((((((((/* implicit */int) arr_4 [i_1] [i_1])) - (((/* implicit */int) (unsigned char)151)))) > (((/* implicit */int) ((short) arr_4 [(short)1] [(short)1]))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) arr_9 [i_4 + 2] [i_4 + 2] [i_2 + 2]);
                    arr_12 [(_Bool)1] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) ((max((min((536870911LL), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (~(((/* implicit */int) var_14))))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_3] [i_4])))));
                    arr_13 [i_2 + 2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_6 [i_2 + 2])))));
                    var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)-96)), (8191LL)));
                    /* LoopNest 2 */
                    for (signed char i_5 = 4; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_19 [i_2 + 1] [i_3] [i_2 + 1] [i_2 + 1] [(short)11] [1ULL] [(short)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */int) arr_15 [i_2] [i_3] [i_4] [i_5])) : (((/* implicit */int) arr_7 [i_4] [i_4]))));
                                var_23 |= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                                var_24 |= ((/* implicit */unsigned short) arr_14 [i_2]);
                                arr_20 [i_2] [i_2] [(unsigned char)4] [i_2] [(unsigned char)4] [i_2] [i_2] = ((min((((/* implicit */unsigned long long int) arr_15 [i_2] [i_3] [i_4 - 1] [i_5 - 3])), (var_15))) | (((/* implicit */unsigned long long int) arr_8 [(signed char)6] [i_3])));
                                var_25 = (signed char)8;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_15))));
}
