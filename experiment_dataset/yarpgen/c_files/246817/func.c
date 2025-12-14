/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246817
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_11 -= ((/* implicit */_Bool) min((max((((/* implicit */unsigned short) min((((/* implicit */short) (signed char)-124)), ((short)-5158)))), (arr_1 [i_1 - 3] [i_2 + 2]))), ((unsigned short)12363)));
                        var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_6 [i_1 - 3])), ((~(((/* implicit */int) var_1))))))), (12ULL)));
                    }
                    arr_11 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (short)5151));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18397))) - (12ULL)));
                        var_14 = ((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_1 - 2] [i_1 - 2]);
                        var_15 += ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)54648))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        var_16 ^= ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_5 - 1]) : (arr_9 [i_1] [i_0] [i_2] [i_5 - 1] [i_2 + 2] [i_1 - 3])))), (((((/* implicit */_Bool) var_2)) ? (arr_8 [i_0] [i_1] [i_0] [9ULL] [9ULL] [i_2]) : (446296631U)))))));
                        var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_0] [i_1 - 1] [i_2 + 1] [i_1 - 1])))))))), (min((max((arr_9 [i_0] [i_0] [i_1] [i_0] [i_5] [i_5 + 1]), (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) var_2))))));
                        arr_19 [i_1] [1LL] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_9 [i_1 - 3] [(unsigned short)0] [i_1] [i_2 + 1] [i_1 - 3] [i_5 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5 - 1] [i_2 + 1] [i_1 - 4] [i_1]))))) : (arr_9 [i_1 - 1] [(signed char)14] [i_1] [i_2 - 1] [i_2] [i_5 + 2])));
                    }
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)14465)) ? (910760004U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [9LL] [3LL] [i_0] [i_0] [i_0])) | (((/* implicit */int) (unsigned short)19177)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_1 - 4] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_2] [(unsigned char)5] [i_1] [i_0]))) : (arr_8 [12U] [i_2] [(unsigned short)6] [(unsigned short)6] [i_1 + 1] [7])))) ? (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_6] [(_Bool)1] [i_1] [i_0])), (arr_7 [i_0] [i_6] [i_0]))) : (((/* implicit */unsigned long long int) ((int) arr_7 [i_0] [i_2] [i_2])))))))));
                        arr_24 [i_1] [i_0] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_18 [i_2 - 2] [i_2] [i_2] [i_2 - 2]))));
                    }
                    var_19 -= (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_20 = (+(var_0));
}
