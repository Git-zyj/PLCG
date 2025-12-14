/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40650
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_16 = ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) 16383ULL)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(880295833)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)10058)))) : (arr_1 [i_0])));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (((arr_1 [4ULL]) + (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_0 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0])) >= (((((/* implicit */_Bool) arr_0 [(signed char)16])) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_11))))))) : (arr_0 [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 14; i_1 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_3 [i_0] [(unsigned char)10]))));
            var_19 += ((/* implicit */signed char) arr_3 [4LL] [(_Bool)1]);
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((short) (unsigned short)0));
            var_20 = ((/* implicit */signed char) ((arr_1 [i_0]) - (arr_1 [i_0])));
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(5868852983531545609LL))))));
        }
        for (int i_2 = 1; i_2 < 14; i_2 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) var_12);
            var_23 = ((/* implicit */signed char) (unsigned short)65535);
            arr_8 [i_0] [(short)6] [i_2] = ((/* implicit */int) arr_3 [i_0] [i_0]);
        }
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_11)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) var_13))), ((-(-6738573877443330049LL))))))));
}
