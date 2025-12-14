/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196956
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */unsigned char) (signed char)53)), ((unsigned char)224))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 543382180185986042LL))) || (((/* implicit */_Bool) max((12023529886138022336ULL), (((/* implicit */unsigned long long int) 3)))))));
                    var_21 ^= ((/* implicit */short) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -14))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_22 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) 22)) - (-6457696883337981804LL)));
                        arr_11 [i_1] [i_2 - 1] [6U] [6U] [i_1] = ((/* implicit */unsigned char) ((max((((unsigned long long int) (short)63)), (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_0] [i_1]))))) << (((((unsigned long long int) ((((/* implicit */int) (unsigned short)62588)) * (((/* implicit */int) arr_7 [i_3]))))) - (62570ULL)))));
                        arr_12 [i_0] [(short)7] [i_2] [i_1] = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) ((var_15) ^ (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                        arr_13 [i_0] [i_0] [13ULL] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((3) * (-3)))) || (((/* implicit */_Bool) min((var_11), (((/* implicit */signed char) var_3))))))));
                        var_23 ^= ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0])) | (-22)))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (9029935858808346713LL))))) ^ (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) arr_8 [4] [i_1] [i_2] [(unsigned char)8])), (arr_1 [i_0] [i_1])))) ^ (((/* implicit */int) ((unsigned char) var_4))))))));
                    }
                }
            } 
        } 
    } 
}
