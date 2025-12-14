/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49329
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) < (9223372036854775807LL))))) : (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned char)209)))))));
        arr_3 [3ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_11)))) > ((~(var_6))))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) (signed char)16))))), (((var_16) - (((/* implicit */long long int) 1352401430))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            for (unsigned short i_3 = 2; i_3 < 17; i_3 += 1) 
            {
                for (signed char i_4 = 4; i_4 < 20; i_4 += 4) 
                {
                    {
                        arr_13 [i_1] [i_1] [i_3 + 3] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1]))))))) : (arr_7 [i_2 - 1] [i_2 - 1] [i_3 - 1]))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_10))))));
                        arr_14 [i_1] [i_1] [i_1] = max((((((/* implicit */_Bool) ((short) var_9))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-30278)) : (((/* implicit */int) arr_4 [i_1] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (((int) arr_11 [i_2 - 1] [i_4])));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_12 [(_Bool)1] [i_2] [i_4]))));
                        arr_15 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-26)) && (((/* implicit */_Bool) arr_12 [i_3] [i_4 - 4] [i_1]))))) << (((((((/* implicit */long long int) arr_12 [i_2 - 2] [i_4 - 1] [i_1])) ^ (var_11))) - (181994255375999756LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-26)) && (((/* implicit */_Bool) arr_12 [i_3] [i_4 - 4] [i_1]))))) << (((((((((/* implicit */long long int) arr_12 [i_2 - 2] [i_4 - 1] [i_1])) ^ (var_11))) - (181994255375999756LL))) + (363988510565913147LL))))));
                        var_18 = ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) (short)-11415)));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)11994))));
    }
    var_20 = ((/* implicit */unsigned int) max((var_9), (var_14)));
    var_21 = ((/* implicit */int) var_15);
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_3))));
}
