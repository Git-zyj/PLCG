/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205550
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_3 [10U] [10U] [i_1 - 3]) : (arr_3 [i_0] [i_1] [i_1 - 3])))) ? (max((arr_3 [i_0] [i_0] [i_1 - 3]), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1 - 3])) && (((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1] [i_1 - 3]))))))));
                var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 3] [8])) ? (((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_1 + 1] [2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 280663764)))))));
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                arr_5 [i_0] [i_1 - 4] [11] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) : ((+(12492926297226135488ULL)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    var_12 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [(unsigned char)14]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)220)))) : ((((_Bool)1) ? (arr_6 [13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (short)29506))) && (arr_12 [i_2] [(unsigned char)21] [i_2] [i_4]))))));
                    arr_13 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) max((var_9), (((/* implicit */unsigned int) arr_12 [(_Bool)1] [i_3] [i_3] [i_3])))))) ? (((arr_8 [i_3]) + (((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_4])) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_3] [i_4]))) == (var_6))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_8);
}
