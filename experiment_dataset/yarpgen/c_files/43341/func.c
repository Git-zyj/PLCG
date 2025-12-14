/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43341
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */long long int) arr_2 [i_0]);
                    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) arr_0 [i_2 + 2])) : (((/* implicit */int) arr_0 [i_2 - 1]))))) ? ((-(((/* implicit */int) arr_0 [i_2 - 2])))) : ((-(((/* implicit */int) (unsigned char)86))))));
                    var_11 = max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_6 [(unsigned char)4] [i_2] [i_1] [i_0])) >= (((/* implicit */int) (signed char)-102)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_5 [i_0]))))), (14614732579880533687ULL));
                    var_12 = ((/* implicit */signed char) var_9);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)21)) || (((/* implicit */_Bool) (+(arr_8 [i_3]))))));
        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1227117265569324784LL)) / (arr_10 [i_3]))))));
        arr_12 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned char)86), (var_3)))) & (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)7)), ((unsigned char)15))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-82)), ((unsigned char)255)))) : (((/* implicit */int) var_8))));
        var_14 = ((/* implicit */long long int) (unsigned char)5);
    }
}
