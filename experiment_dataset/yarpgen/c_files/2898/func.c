/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2898
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
    var_11 = ((/* implicit */unsigned int) (short)(-32767 - 1));
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((int) var_4)))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) (+(arr_0 [i_0])));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_0] = min((min((min((((/* implicit */unsigned int) var_2)), (arr_4 [i_0 - 2] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)18314)) ? (((/* implicit */int) (unsigned short)29015)) : (((/* implicit */int) (unsigned char)23))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (short)32767)))))));
            var_14 = ((/* implicit */unsigned char) var_1);
        }
        arr_7 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((arr_0 [i_0 + 1]) + (9223372036854775807LL))) >> (((arr_0 [i_0 - 2]) + (3169498444980178704LL))))))));
    }
    for (short i_2 = 1; i_2 < 6; i_2 += 2) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 734574816)) ? (((((/* implicit */_Bool) (short)10057)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)9771)) : (((/* implicit */int) (short)-10036)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 - 1]))) - (3868715220U)))) || (((/* implicit */_Bool) arr_10 [i_2])))))));
        var_15 = ((/* implicit */unsigned int) min((((signed char) (-(((/* implicit */int) var_10))))), (((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_2])) == (((/* implicit */int) (signed char)-127)))))));
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */int) ((_Bool) ((((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32742)))) >> (((((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3]))) : (1167982969U))) - (4294961786U))))));
        arr_15 [i_3] = ((/* implicit */unsigned short) arr_13 [i_3] [i_3]);
        var_16 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((unsigned int) arr_13 [5ULL] [5ULL]))))), (var_0)));
        var_17 ^= ((/* implicit */_Bool) (unsigned char)118);
    }
}
