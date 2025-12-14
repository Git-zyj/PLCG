/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244802
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
    var_12 = ((/* implicit */signed char) var_10);
    var_13 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        var_15 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)40))));
        var_16 = ((/* implicit */unsigned long long int) ((signed char) min((arr_1 [i_0]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) (signed char)-34))))))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((unsigned int) 7162201147108133722ULL)))));
        var_18 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) < (((/* implicit */int) arr_1 [i_1])))))) == (arr_3 [i_1] [i_1])));
    }
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 11; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            {
                arr_9 [8ULL] [i_2] [i_2 - 2] = (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_2 - 3] [i_2 - 3]))) % (arr_3 [0] [i_2 - 3]));
                arr_10 [i_2] [i_3] = ((((/* implicit */_Bool) max(((short)8606), (((/* implicit */short) (signed char)-52))))) ? (var_3) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_2 + 3]))))));
                var_19 -= (!((_Bool)1));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_0 [i_5]), (arr_0 [i_2 + 1])))) < (((((((/* implicit */int) (short)-32758)) - (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_0 [i_4]))))));
                            var_21 = ((/* implicit */unsigned int) 6ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) ((((/* implicit */_Bool) 12789686937430549523ULL)) && ((_Bool)1))))))));
}
