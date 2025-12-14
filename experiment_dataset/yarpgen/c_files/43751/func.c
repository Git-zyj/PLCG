/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43751
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
    for (short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (arr_3 [i_2] [i_1]) : (((arr_3 [i_0] [i_0 + 2]) >> (((arr_3 [i_1 + 2] [i_0 + 1]) - (8754393349719888125ULL)))))));
                    var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (arr_8 [i_2] [i_1 - 1] [i_0 + 1] [(signed char)9])))) ? (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((6155655) == (((/* implicit */int) (signed char)-123))))))))) >= (((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0 - 2] [i_1 + 2]) == (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2] [i_2])))))) : (min((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_3 [i_0] [i_0])))))));
                    var_16 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (arr_4 [i_2] [i_0])))) && (((/* implicit */_Bool) arr_1 [i_2]))))), (arr_8 [i_0 - 1] [i_1] [i_1 + 2] [9ULL]));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0 - 1] [i_2]), (((/* implicit */short) (_Bool)1)))))) + ((~(0U)))))) > ((+((+(arr_1 [i_2])))))));
                }
            } 
        } 
    } 
    var_18 = (unsigned char)225;
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_2))))) && (((((/* implicit */int) var_8)) >= (((/* implicit */int) var_12))))))) : (((/* implicit */int) (signed char)0))));
    var_20 = ((/* implicit */unsigned short) var_12);
}
