/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35748
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
    var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)215)), (7221854780457672343ULL)))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) var_17))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) (unsigned short)1083)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (11224889293251879277ULL))), ((-(var_1))))) - (min((18446744073709551594ULL), (((unsigned long long int) 7221854780457672336ULL))))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_17))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_2] [i_2]);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)20))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_3])) ? (11224889293251879297ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_2 - 2] [i_2]), ((unsigned char)4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 1]))) : (max((((/* implicit */unsigned long long int) arr_2 [i_2 - 2] [i_2])), (11224889293251879291ULL)))));
                    }
                }
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    arr_16 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((11224889293251879273ULL), (11224889293251879278ULL)));
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((min((arr_15 [i_0] [i_0]), (arr_14 [i_0]))), (arr_3 [i_1 - 1] [i_1 + 3]))))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 2; i_5 < 19; i_5 += 3) 
                {
                    arr_21 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]);
                    var_23 &= ((/* implicit */_Bool) ((arr_10 [i_0] [i_0] [i_0] [i_1] [i_5 - 2] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2)));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), ((unsigned char)190)))) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (_Bool)1))))) : (((((/* implicit */_Bool) 11224889293251879278ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)63))))))));
}
