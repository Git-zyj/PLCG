/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40349
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) (-(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_4 [i_1] = min((arr_1 [i_0] [i_1]), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [(_Bool)1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))))));
            var_19 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(arr_1 [i_1] [i_0])))), (((11358282758852829329ULL) + (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)0)), (131071U))))))));
            var_20 = ((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) 1378824704)), (arr_3 [i_0] [i_0]))));
            var_21 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) ((signed char) var_11))))), (((/* implicit */int) (short)-32764))));
        }
        arr_5 [(signed char)18] = ((/* implicit */unsigned int) ((signed char) ((unsigned int) ((((/* implicit */_Bool) (signed char)-105)) || (((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1]))))));
        var_22 = ((/* implicit */signed char) max((((/* implicit */long long int) (-(max((2668602679U), (((/* implicit */unsigned int) (unsigned char)148))))))), (arr_1 [i_0] [i_0])));
    }
    var_23 = var_7;
    var_24 ^= ((/* implicit */unsigned long long int) ((var_2) && (((/* implicit */_Bool) var_11))));
    var_25 += ((/* implicit */long long int) var_1);
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3047275848U)) ? (14458458175915078164ULL) : (((/* implicit */unsigned long long int) 1653737011U))));
}
