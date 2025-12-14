/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212307
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
    var_18 = ((unsigned short) (unsigned short)65535);
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) min((max((((/* implicit */unsigned short) var_10)), ((unsigned short)65535))), ((unsigned short)17)))) + (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_11 [(unsigned char)16] [(unsigned char)16] [(signed char)6] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-29913))));
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (max((92367610953441952ULL), (((/* implicit */unsigned long long int) arr_6 [i_2] [(unsigned short)12] [i_0])))))) ? ((((!(((/* implicit */_Bool) arr_3 [i_2])))) ? (((/* implicit */int) max((var_14), (((/* implicit */unsigned char) arr_8 [i_0] [i_1 + 2] [i_2]))))) : (((/* implicit */int) (short)20002)))) : ((-(((/* implicit */int) arr_8 [(signed char)9] [i_1] [i_1 + 1]))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned char) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (arr_1 [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)30582)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59251)))))))) ? (((/* implicit */int) arr_2 [i_2] [i_0])) : (((/* implicit */int) max((min((((/* implicit */unsigned short) var_17)), (var_2))), (((/* implicit */unsigned short) min((((/* implicit */short) arr_3 [i_0])), ((short)-29913)))))))));
                    arr_12 [11ULL] [(signed char)14] [(signed char)14] = ((/* implicit */unsigned int) ((((((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) arr_8 [(unsigned char)8] [i_1] [i_2]))))) + (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_0])) <= (((/* implicit */int) arr_4 [i_0] [(unsigned char)11]))))))) <= (((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) > (((/* implicit */int) ((_Bool) (unsigned short)41907))))))));
                }
            } 
        } 
    } 
    var_22 = ((max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) var_0)) ? (377691950864196883LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33786))))))) <= (((/* implicit */long long int) ((/* implicit */int) var_15))));
}
