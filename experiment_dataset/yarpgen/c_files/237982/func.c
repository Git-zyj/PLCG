/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237982
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [(unsigned char)14])) ? (((((/* implicit */int) (short)6)) / (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))) ? (-1009263224) : (min(((+(((/* implicit */int) arr_0 [i_0])))), (((arr_0 [i_0]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0]))))))));
        var_17 = ((/* implicit */int) min((((/* implicit */long long int) arr_0 [i_0])), (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_2))) * (((/* implicit */long long int) ((var_0) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                for (signed char i_3 = 2; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_2] = ((long long int) var_4);
                        var_18 = ((/* implicit */unsigned char) ((short) min((arr_5 [i_1] [i_1 + 2] [i_3] [i_3 - 2]), (arr_5 [2LL] [i_1 + 2] [i_3] [i_3 - 2]))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [1ULL] [(unsigned short)16])) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) var_6))))), (min((((/* implicit */unsigned long long int) 4912781892238316455LL)), (var_14)))))) ? (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_7))) / (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-25))))))) : (((/* implicit */long long int) var_5))));
    }
    for (unsigned short i_4 = 3; i_4 < 11; i_4 += 3) 
    {
        arr_12 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4 - 3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4 + 1]))) : (max((3U), (((/* implicit */unsigned int) var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1344113303)) ? (11354310372968602602ULL) : (((/* implicit */unsigned long long int) -1))))) ? (153847270976811901LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) -4912781892238316454LL)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) var_15))))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
        arr_13 [i_4] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) var_2)))));
    }
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_15))));
    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
}
