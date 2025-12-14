/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30935
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_15 += ((/* implicit */short) (~(min((max((((/* implicit */long long int) 1280032652U)), (8732379605454902965LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [19LL] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned short)20] [i_2 + 2]))) - ((~(arr_2 [i_0] [i_1 + 1])))));
                    var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_5 [i_1])) : (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */int) var_13))))))) - (arr_2 [(unsigned short)20] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)19))))) + ((~(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
                                var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [11] [i_3] [11])) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) arr_6 [i_1 - 1] [i_2] [i_4]))))) ? (var_0) : (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_3] [i_1 + 1]))))))) : (((/* implicit */long long int) (+((+(((/* implicit */int) var_14)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */short) arr_10 [i_0] [i_0 - 1] [i_0]);
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(((((/* implicit */int) max((arr_12 [i_0] [i_0] [(signed char)16]), (arr_12 [i_0 + 2] [0] [18LL])))) + (((((/* implicit */_Bool) (unsigned short)1782)) ? (((/* implicit */int) (unsigned short)65517)) : (((/* implicit */int) (signed char)(-127 - 1))))))))))));
    }
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_9))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_5])))))));
        arr_15 [i_5] = min((-5617653751692010370LL), (((/* implicit */long long int) arr_3 [i_5])));
        arr_16 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))) ? ((+((+(((/* implicit */int) arr_1 [i_5])))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_3))));
    }
    var_23 = var_10;
}
