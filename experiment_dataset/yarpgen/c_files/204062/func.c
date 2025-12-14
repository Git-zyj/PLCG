/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204062
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */signed char) (+(((/* implicit */int) (((~(arr_2 [10U]))) <= (((/* implicit */int) ((arr_2 [(signed char)16]) != (((/* implicit */int) arr_1 [i_0]))))))))));
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)73)) ^ (((/* implicit */int) (signed char)-56))));
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_3 [(_Bool)1]))))))), ((((!(((/* implicit */_Bool) arr_0 [(short)2] [(short)2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(short)14])) && (((/* implicit */_Bool) arr_8 [i_0])))))) : (max((((/* implicit */unsigned int) arr_8 [i_0])), (arr_4 [i_0] [18U] [18U]))))))))));
                    arr_11 [i_0] [i_1 - 2] [i_0] = ((/* implicit */short) (-((-(((unsigned long long int) arr_3 [i_0]))))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 20; i_3 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_9 [i_0] [i_1])) & (arr_2 [(_Bool)1]))) | (((/* implicit */int) arr_5 [i_3 + 1] [i_1 - 1])))))));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned long long int) (unsigned char)0)))));
                    var_16 *= ((/* implicit */signed char) ((unsigned int) arr_9 [i_1 + 3] [i_1 + 3]));
                    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_0] [i_0])))));
                }
                for (int i_4 = 1; i_4 < 20; i_4 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((arr_16 [i_0] [i_1 + 1] [i_1 - 1] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_4 + 1]))))), (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) : (arr_16 [i_0] [i_4 + 2] [i_1 + 3] [i_0]))))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])) | ((~(((/* implicit */int) arr_8 [i_0]))))))) | (((((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) & (max((arr_12 [i_0] [i_0] [i_4 + 2]), (((/* implicit */unsigned int) arr_0 [i_0] [i_4]))))))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_14 [i_4 + 1] [(short)18] [i_4 + 2] [i_4 + 2])) && (((/* implicit */_Bool) arr_14 [i_4 + 2] [(unsigned short)12] [i_4 - 1] [i_4 + 1]))))))));
                    var_21 = ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_4]);
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_6 [i_0] [i_1 + 2]) : (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_4]))))))) ^ (((((/* implicit */_Bool) min((((/* implicit */int) (short)19760)), (-1001284582)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((unsigned long long int) arr_0 [i_0] [i_1]))))));
                }
                var_22 = ((/* implicit */signed char) arr_16 [i_0] [i_0] [i_1 + 1] [i_1]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) var_8)))))));
}
