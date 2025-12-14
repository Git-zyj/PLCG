/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240915
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_10 = arr_1 [i_0];
        var_11 &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((min((10061783761085137025ULL), (arr_0 [(_Bool)1] [(_Bool)1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) max((227249257), (-227249243)))) ? (((/* implicit */int) min((arr_2 [i_1]), (arr_2 [i_1])))) : (((((/* implicit */int) var_1)) & (((/* implicit */int) (unsigned short)36102))))));
                var_13 -= ((/* implicit */signed char) max((arr_9 [18U] [i_2] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */int) (short)24891)) ^ (((/* implicit */int) var_6)))))));
            }
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
            {
                arr_12 [i_1] [i_2] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) (~(arr_9 [i_2] [i_2] [i_4])))) ? ((+(160387310792790296ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (arr_6 [i_1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_1] [i_4])) | (((((/* implicit */int) (unsigned char)0)) | (-227249258))))))));
                var_14 -= ((/* implicit */unsigned int) 8788856600669768308ULL);
            }
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
            {
                arr_16 [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 619699531U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_2] [i_2]))) : (arr_15 [i_2])))) * (((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_2]))) : (var_2)))));
                arr_17 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (_Bool)1)) : (-805115253)));
            }
            var_15 = ((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_2] [i_2]))));
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (unsigned char)154))));
        }
        arr_18 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */int) min(((unsigned short)51492), (((/* implicit */unsigned short) arr_2 [i_1]))))) >> (((((/* implicit */int) arr_11 [i_1] [(signed char)16] [(signed char)16])) - (208))))), (((/* implicit */int) var_6))));
    }
    var_17 = ((/* implicit */short) min((((/* implicit */unsigned char) ((((var_7) << (((3675267793U) - (3675267793U))))) <= (((/* implicit */long long int) (-(var_3))))))), ((unsigned char)192)));
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_8))));
    var_19 += ((/* implicit */long long int) var_1);
    var_20 = ((/* implicit */_Bool) var_8);
}
