/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23784
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
    var_18 = ((/* implicit */short) 1758527160);
    var_19 = ((/* implicit */long long int) ((short) var_3));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((unsigned long long int) ((signed char) (_Bool)1))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0 - 1] [i_3] [i_2] [(_Bool)0]))))))))));
                        arr_8 [i_1 - 3] [i_1] = ((/* implicit */long long int) var_15);
                    }
                    arr_9 [i_2] [i_2] [(_Bool)1] |= ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max(((unsigned short)4), (((/* implicit */unsigned short) (unsigned char)218))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [(short)14])) ? (((/* implicit */int) arr_6 [i_0] [i_1 - 4] [i_2] [18ULL])) : (((/* implicit */int) (unsigned short)14088)))))) - (max((((((/* implicit */_Bool) (signed char)126)) ? (-587886730) : (((/* implicit */int) (unsigned short)51448)))), (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 3]))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)14075)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (arr_5 [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (var_16)))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1 - 3] [i_0])) | (1055724874779444734LL)))) * (var_9)))));
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)23999))));
}
