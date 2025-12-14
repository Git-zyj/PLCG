/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205874
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
    var_11 = ((/* implicit */signed char) ((3U) < (((/* implicit */unsigned int) 407536385))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((signed char) ((short) (short)9871));
        arr_2 [i_0] [i_0] = min((((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-126))))), ((signed char)126)))), (max((((/* implicit */unsigned int) (unsigned char)228)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) * (var_1))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) max((min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1))), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) (unsigned char)19))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))) <= (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))))))));
            arr_7 [i_0] = ((/* implicit */int) arr_0 [i_1]);
        }
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_13 -= ((/* implicit */long long int) ((int) var_0));
            arr_12 [i_0] = ((/* implicit */signed char) ((int) max((arr_4 [i_0] [i_0 - 2] [i_0]), (arr_4 [i_0] [i_0 - 1] [i_0]))));
            var_14 = ((/* implicit */unsigned char) var_0);
            var_15 += ((/* implicit */unsigned long long int) var_1);
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0 - 1])) + (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 3]))))))));
        }
        var_16 = ((/* implicit */unsigned char) ((int) (signed char)92));
    }
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (unsigned char)228))));
        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
    }
    var_19 = ((/* implicit */unsigned short) 4194176);
    var_20 -= ((/* implicit */int) var_3);
    var_21 = ((/* implicit */unsigned short) (~(var_0)));
}
