/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245204
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((((/* implicit */_Bool) 1172807399271660947LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13511))) : (-8168872265329336293LL))) * (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_5))))))));
    var_16 = ((/* implicit */_Bool) (((((~(var_0))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (var_9)))))) ? (var_10) : (((/* implicit */unsigned int) var_9))));
    var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (var_13)))) ? (var_14) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (var_9))))))), (((((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) | (max((-8168872265329336272LL), (((/* implicit */long long int) (unsigned short)32279))))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (var_1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38395)) ? (((/* implicit */long long int) 2726435979U)) : (-8168872265329336293LL)))) ? (((/* implicit */int) ((_Bool) var_4))) : ((+(((/* implicit */int) (unsigned short)28955)))))) : (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [(unsigned char)9] [i_0])) | (((/* implicit */int) arr_2 [i_0] [i_0])))) <= (((((/* implicit */int) ((_Bool) arr_2 [i_0] [10ULL]))) & (((/* implicit */int) ((_Bool) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_4 [i_1] [(_Bool)1]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2])))))))) ? (min((((long long int) var_14)), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_1] [i_0]))) : (arr_5 [i_1]))))) : (max((min((((/* implicit */long long int) 841640854)), (8168872265329336291LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_4 [i_1] [i_2])))))))));
                    var_19 -= ((/* implicit */int) ((((((/* implicit */_Bool) (-(arr_0 [i_2] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) > (arr_4 [i_2] [i_1]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_11))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42292))))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */int) arr_6 [i_0] [i_0]);
    }
}
