/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212867
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
    for (short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_16 &= ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                var_17 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((unsigned long long int) var_9)) ^ (((/* implicit */unsigned long long int) ((((unsigned int) arr_3 [i_0] [i_1] [i_0])) << (((min((arr_0 [i_1]), (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1])))) - (26748U))))))))) : (((/* implicit */unsigned short) ((((unsigned long long int) var_9)) ^ (((/* implicit */unsigned long long int) ((((unsigned int) arr_3 [i_0] [i_1] [i_0])) << (((((min((arr_0 [i_1]), (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1])))) - (26748U))) - (4294950301U)))))))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned short) max((arr_0 [i_1]), (((/* implicit */unsigned int) var_10))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */signed char) var_11);
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) (((-(arr_0 [i_2]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_10))))))))) | (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) var_12))))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) (short)11386)))))))))));
        arr_8 [i_2] = ((/* implicit */unsigned char) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) / (var_11))), (((/* implicit */unsigned long long int) min(((unsigned short)58879), (((/* implicit */unsigned short) var_15))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [10ULL] [i_2] [i_2])) / (-900881409)))), (max((arr_1 [i_2] [(signed char)16]), (((/* implicit */unsigned int) var_7)))))))));
        var_20 &= ((/* implicit */signed char) (~((~(((/* implicit */int) arr_6 [i_2] [i_2]))))));
    }
    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
    {
        var_21 &= ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_3] [i_3]))))))) || (((/* implicit */_Bool) (~(var_11))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((long long int) (-((-(var_13)))))))));
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) (signed char)-124);
        var_24 &= ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_3)))));
        arr_16 [i_4] [i_4] = ((/* implicit */short) min((min((((((/* implicit */unsigned long long int) arr_1 [22ULL] [22ULL])) - (var_11))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_15)), (arr_5 [i_4] [i_4])))))), (((/* implicit */unsigned long long int) max((arr_9 [i_4]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 11850473675519202604ULL)) || (((/* implicit */_Bool) var_14))))))))));
    }
    var_25 &= ((/* implicit */unsigned long long int) ((max((max((var_7), (var_7))), (((((/* implicit */int) var_10)) | (((/* implicit */int) var_12)))))) < (((/* implicit */int) var_12))));
}
