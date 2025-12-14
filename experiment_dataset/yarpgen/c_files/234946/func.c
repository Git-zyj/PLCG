/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234946
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
    var_18 = ((/* implicit */long long int) max((((((-1281544430) + (2147483647))) << (((((-330368262) + (330368291))) - (28))))), (((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (_Bool)1))))));
    var_19 = ((/* implicit */unsigned long long int) var_4);
    var_20 = ((/* implicit */unsigned short) ((long long int) 15LL));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] [2] = ((/* implicit */unsigned char) (+(arr_2 [i_1 + 1] [i_1 + 1])));
            arr_5 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1833409682)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209))) : ((+(var_1)))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
        {
            var_21 = ((((/* implicit */unsigned long long int) 0U)) - (var_1));
            arr_8 [i_2] = ((/* implicit */unsigned int) var_5);
        }
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
        {
            arr_11 [i_0] [i_3] [i_3] = ((/* implicit */int) var_6);
            arr_12 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0] [i_3]))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
        {
            var_22 -= ((/* implicit */short) (-((+(arr_14 [i_4] [i_0])))));
            arr_17 [i_4] [i_4] [i_0] = ((/* implicit */unsigned short) ((arr_13 [i_0] [(_Bool)1]) ? ((~(var_16))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)3669)))))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_4])) ? (arr_14 [i_0] [i_4]) : (arr_14 [i_0] [i_4])));
        }
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            var_24 = ((/* implicit */long long int) 6509073308691961680ULL);
            arr_20 [i_0] [i_5] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */long long int) var_15)) : (var_8))));
            var_25 = ((/* implicit */unsigned int) (unsigned char)53);
        }
    }
}
