/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240796
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
    for (int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((((/* implicit */_Bool) arr_2 [i_3])) ? (min((var_9), ((-(((/* implicit */int) (unsigned char)81)))))) : (1850948617));
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 1; i_4 < 21; i_4 += 1) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned int) var_8);
                                var_19 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) 1850948617)) | (((unsigned int) var_13))))));
                                var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_2 + 2] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_0] [i_2 + 1] [i_4 + 1] [(short)2]))))));
                            }
                            for (unsigned int i_5 = 1; i_5 < 21; i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_0] [i_0] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1]))))) : (max((arr_11 [i_0 - 1] [i_0]), (((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))))));
                                var_21 = ((/* implicit */int) arr_14 [i_5 + 2] [i_1] [i_0] [i_3] [i_0 + 1] [i_3]);
                                var_22 = ((/* implicit */signed char) ((((var_4) ^ (((/* implicit */int) var_1)))) < (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1])) < (((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)8188)))))))));
                                arr_20 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [(unsigned short)14] [i_3] [i_5])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_3] [(_Bool)1])) ? (arr_11 [i_0] [i_0]) : (((/* implicit */int) arr_3 [i_0] [i_0] [1])))) : (((((/* implicit */_Bool) -1850948618)) ? (var_14) : (((/* implicit */int) (unsigned char)236)))))) | (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (-2070601657) : (((/* implicit */int) arr_2 [21ULL]))))) < (max((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_10 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0])))))))));
                            }
                            for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) /* same iter space */
                            {
                                var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_6 + 2] [i_0 + 1])))) < (1850948617)));
                                var_24 = ((/* implicit */long long int) max(((short)-25494), (((/* implicit */short) (_Bool)1))));
                            }
                            arr_23 [i_0] = ((/* implicit */_Bool) (unsigned char)81);
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_18 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_1]))))))));
                var_26 = ((/* implicit */int) var_11);
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) (-((((-(((/* implicit */int) var_12)))) - (((/* implicit */int) var_1))))));
}
