/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199609
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
    var_13 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 24; i_3 += 3) 
                    {
                        arr_13 [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)127)), (arr_4 [i_0] [i_3 + 1])))) ? (((unsigned int) var_12)) : (arr_12 [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_11) | (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (unsigned short)22911))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 + 3]))) / (-6035198682752138509LL)))))) : (arr_6 [i_1])));
                        var_14 ^= ((/* implicit */short) var_8);
                        arr_14 [i_3] [(signed char)20] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) var_8))))) % (max((arr_8 [i_1 - 2] [i_2 - 2] [i_2 - 1]), (((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) var_7)))))))));
                    }
                    arr_15 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_6 [i_0]) <= (var_12)))), (((((/* implicit */_Bool) var_5)) ? (-721857100297134499LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130)))))))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1])) : ((((_Bool)1) ? (var_8) : (var_8)))));
                }
            } 
        } 
    } 
}
