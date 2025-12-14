/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221478
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (134216704U))))))) > (((/* implicit */int) ((((/* implicit */_Bool) min((-7409084535929202996LL), (-1LL)))) && (((/* implicit */_Bool) ((134216704U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [(signed char)11] [i_0 - 1])))))))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-17310)) : (((/* implicit */int) arr_2 [i_1] [i_2])))) * (((/* implicit */int) var_9)))) > (((((/* implicit */_Bool) -1413684558915270234LL)) ? (((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned short)24130)))) : (((((/* implicit */_Bool) var_16)) ? (2147483647) : (193638453)))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) <= (((((/* implicit */_Bool) 15839839116956158785ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_7))))) : ((~(((/* implicit */int) var_12))))))));
                    var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_3 [i_1])))))) || (((/* implicit */_Bool) 7409084535929203014LL))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((((var_10) - (((/* implicit */unsigned long long int) var_15)))) == (((arr_3 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_16);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 17617080104294444744ULL)))))))) : (((8589957309607066589LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
}
