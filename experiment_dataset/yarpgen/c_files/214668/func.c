/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214668
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)77)) ? (((max((((/* implicit */unsigned long long int) var_2)), (arr_4 [14ULL] [(signed char)10] [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) && (((/* implicit */_Bool) -2045093019)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) (short)-29401))) == (((/* implicit */int) arr_1 [i_1]))))))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_11 [i_1] = ((/* implicit */signed char) var_4);
                    var_11 = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */int) var_7)) & (var_5))) != (((/* implicit */int) (unsigned short)26273)))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 4; i_5 < 20; i_5 += 2) 
                        {
                            {
                                arr_19 [i_1] [i_1] [i_1] [3] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1] [i_5 - 1])) * (((/* implicit */int) arr_12 [i_1] [i_5 - 3]))));
                                var_12 = ((/* implicit */unsigned short) var_4);
                                arr_20 [(signed char)11] [i_5 - 2] [(signed char)11] [i_1] [(unsigned short)21] = (+(((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned short)12601)))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) arr_16 [i_3] [i_1] [i_0] [i_0]);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_24 [i_0] [i_1] [(short)4] = ((/* implicit */signed char) arr_12 [i_1] [i_1]);
                    var_14 = ((((((((/* implicit */_Bool) (short)-29401)) || (((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) arr_22 [i_1])))) && (((((((/* implicit */_Bool) (signed char)24)) && (((/* implicit */_Bool) (signed char)66)))) || (((/* implicit */_Bool) var_9)))));
                    arr_25 [i_1] = ((/* implicit */signed char) var_6);
                }
                var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_8 [i_0] [i_1])))) < (((((/* implicit */unsigned int) var_5)) | (arr_8 [i_0] [i_1])))));
                var_16 += ((/* implicit */signed char) ((((((((/* implicit */int) var_3)) % (((int) (signed char)-28)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (0U)))))))));
            }
        } 
    } 
    var_17 += ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)26821)))) & (((((/* implicit */int) (unsigned short)16)) >> (((var_4) - (7884396902527119721ULL)))))));
}
