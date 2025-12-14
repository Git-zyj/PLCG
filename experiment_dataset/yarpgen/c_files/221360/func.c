/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221360
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
    var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_0)))), ((((_Bool)0) && (((/* implicit */_Bool) 3663376705U)))))))) <= (var_7));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((var_4) << (((min((1435993379U), (((/* implicit */unsigned int) 402653184)))) - (402653157U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)53655))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) : (((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), (arr_0 [i_0]))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max(((-(arr_1 [i_0]))), (((((arr_1 [i_0]) + (2147483647))) << (((arr_1 [i_0]) + (878905217))))))))));
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned char) ((min((((631590591U) ^ (((/* implicit */unsigned int) 402653179)))), (((/* implicit */unsigned int) max(((short)32760), (arr_0 [i_0])))))) / (max((max((4294967284U), (((/* implicit */unsigned int) arr_1 [i_0])))), (((/* implicit */unsigned int) (unsigned short)56774))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-17984)) ? (((/* implicit */int) (short)32034)) : (((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) <= (1150115323U)))))))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_21 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (arr_1 [i_1]))))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_1]))) && (((/* implicit */_Bool) ((int) arr_6 [i_1]))))))));
        var_23 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)0));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 16547796401109350128ULL)) ? (((/* implicit */int) max((arr_2 [i_1]), (arr_5 [i_1] [i_1])))) : (((/* implicit */int) ((arr_6 [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))))));
    }
    var_25 = (-((~(4U))));
    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) min((var_11), (((/* implicit */int) var_14)))))));
}
