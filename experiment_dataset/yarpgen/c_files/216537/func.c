/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216537
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
    var_12 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (max((max((((/* implicit */long long int) (_Bool)0)), (var_5))), (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (signed char)49))) - (var_4))))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (max((((/* implicit */int) arr_0 [i_0] [i_0])), (var_4)))))) ? (((/* implicit */int) ((signed char) arr_1 [i_0]))) : (((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2147475456LL) & (((/* implicit */long long int) ((((/* implicit */_Bool) 2147475453LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)49)))))))) ? (min(((+(((/* implicit */int) arr_5 [i_1] [i_2] [i_2])))), (((/* implicit */int) max((arr_5 [i_1] [i_1] [i_3]), (((/* implicit */short) var_10))))))) : (((/* implicit */int) ((_Bool) ((arr_1 [i_1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))))));
                        arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)47279)));
                        var_15 = var_5;
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_10 [i_3])))) ? (((((((/* implicit */_Bool) 2147483647)) ? (arr_7 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41994))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4398012956672LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)128)))))));
                    }
                    var_17 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) max(((short)26867), (((/* implicit */short) arr_4 [i_1] [i_1] [i_1]))))) != ((~(var_4))))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) (-((((+(((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))) / (((/* implicit */int) (short)26867))))));
    }
}
