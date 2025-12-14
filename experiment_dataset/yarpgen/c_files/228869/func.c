/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228869
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
    var_12 = ((/* implicit */short) max(((-(((/* implicit */int) (signed char)124)))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_8)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10)))));
        var_14 = ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 2])));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 4; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((arr_2 [i_1]), (((/* implicit */int) var_5))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [10]), (((/* implicit */unsigned short) (signed char)115))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)122)) ? (-8554428076697211707LL) : (((/* implicit */long long int) (-2147483647 - 1)))))) : (arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 - 1]))))));
                        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((short) var_4))), (5887935288881378345ULL)));
                        var_17 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)208)), (12)));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */short) 12558808784828173272ULL);
    }
}
