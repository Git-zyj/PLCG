/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229192
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
    for (int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((min((arr_5 [i_0 - 2] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 2]))))))) >> (((min((((/* implicit */int) ((unsigned short) var_3))), (arr_3 [i_0] [i_1] [i_0]))) + (1518553411)))));
                    var_14 = ((/* implicit */long long int) (+((((!(((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1698387635))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [3])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_1))))))));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0 - 3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5146))) : ((-(arr_4 [i_2] [i_1] [i_2] [i_2])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) -1698387636)) && (((/* implicit */_Bool) (signed char)-47)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (-1698387636)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_0))))) : (min((2249570818618693716LL), (((/* implicit */long long int) (short)-10129))))))) && (((/* implicit */_Bool) ((int) var_9)))));
    var_17 = ((/* implicit */int) var_13);
    /* LoopSeq 1 */
    for (signed char i_3 = 3; i_3 < 10; i_3 += 1) 
    {
        var_18 |= ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_3 + 3] [i_3 + 1] [i_3 - 3])) ? (arr_3 [i_3 + 1] [i_3 + 2] [i_3]) : (((/* implicit */int) (short)-5147)))) != ((-(arr_3 [i_3] [i_3 - 3] [1U])))));
        var_19 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_3 - 2] [i_3 - 2] [i_3]))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(1389532367))))));
    }
    var_21 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((int) var_11))), ((-(var_5))))) == (((/* implicit */long long int) var_6))));
}
