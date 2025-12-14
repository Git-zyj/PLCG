/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225482
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
    var_11 = ((/* implicit */_Bool) min((min((min((((/* implicit */long long int) (short)18862)), (5662503528809995460LL))), (((/* implicit */long long int) max((var_2), ((unsigned char)24)))))), (((/* implicit */long long int) min((max((2602421993U), (((/* implicit */unsigned int) (unsigned short)51065)))), (((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (var_6)))))))));
    var_12 = ((/* implicit */_Bool) min((max((min((var_7), (((/* implicit */unsigned long long int) -5662503528809995461LL)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (var_1)))))), (min((min((var_7), (((/* implicit */unsigned long long int) var_8)))), (min((503316480ULL), (((/* implicit */unsigned long long int) (short)-1))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */int) min((min((((/* implicit */long long int) min((arr_6 [i_0] [i_0] [i_1] [i_0]), (arr_6 [i_2] [i_2] [i_0 + 2] [i_0 + 2])))), (min((var_1), (((/* implicit */long long int) var_8)))))), (min((min((((/* implicit */long long int) arr_2 [i_1] [i_1] [i_2])), (var_1))), (((/* implicit */long long int) min((((/* implicit */short) var_9)), ((short)6768))))))));
                    var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((min(((short)6768), ((short)-788))), (((/* implicit */short) min((var_2), (((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_2] [i_2])))))))), (min((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned char) arr_6 [i_2] [i_0] [i_0] [i_0]))))), (min((((/* implicit */unsigned long long int) (_Bool)0)), (13ULL)))))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) min((min((max((((/* implicit */unsigned long long int) (_Bool)1)), (15960249624066344670ULL))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned char) arr_2 [i_0] [i_1 + 1] [i_0]))))))), (((/* implicit */unsigned long long int) min((min(((short)6768), ((short)-5))), (((/* implicit */short) min((arr_7 [i_0 - 2] [i_0 - 2] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned char) (_Bool)1)))))))))))));
                    arr_9 [9ULL] [i_1] [i_2] [(_Bool)0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((min((((/* implicit */unsigned int) var_5)), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) min((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */short) arr_6 [i_0] [i_0] [i_2] [i_2])))))))), (max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_5 [i_0] [i_1])), (var_4)))), (min((((/* implicit */long long int) (_Bool)1)), (5662503528809995460LL)))))));
                }
            } 
        } 
    } 
}
