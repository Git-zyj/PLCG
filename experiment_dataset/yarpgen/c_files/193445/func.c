/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193445
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
    var_12 = ((/* implicit */_Bool) ((long long int) max((((((/* implicit */int) var_5)) * (((/* implicit */int) var_9)))), (((/* implicit */int) (unsigned short)46356)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) max((((((arr_1 [i_0] [i_0]) ? (17ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_1)))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))), (((1831350880U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22896))))))) & (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (min((((/* implicit */unsigned int) var_0)), (arr_3 [(_Bool)1] [i_1]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)3520)))))))));
                    var_15 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) ((unsigned char) (unsigned char)241))) * (((/* implicit */int) arr_0 [i_0] [i_1])))));
                    arr_7 [i_0] = ((/* implicit */_Bool) (((+(1092467649875647158LL))) - (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) - (((/* implicit */int) (short)22899))))), (((unsigned int) 173724842U)))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) <= (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0])))));
        var_17 = (((!(((/* implicit */_Bool) ((signed char) var_10))))) && ((!(((/* implicit */_Bool) min((1286034119U), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [3U]))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) var_9);
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 3436722866U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8685))) : (arr_8 [i_3] [(short)12]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1717593005U)) && (((/* implicit */_Bool) 6657114248654481001LL))))))))));
        arr_10 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_8 [i_3] [i_3]) % (arr_8 [i_3] [i_3])))) ? (min((((/* implicit */unsigned long long int) min((344459655), (((/* implicit */int) var_11))))), ((+(var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)33), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_10)))))))))));
    }
    var_20 = min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)5810)) : (((/* implicit */int) var_11))))), (2577374291U))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)240))))) << (((/* implicit */int) ((((/* implicit */unsigned int) -344459641)) >= (var_3))))))));
}
