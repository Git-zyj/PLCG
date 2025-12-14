/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240983
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) var_9);
        var_14 = ((/* implicit */short) ((((/* implicit */int) var_12)) >= (((((/* implicit */_Bool) -215686923)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_1] [0] = var_12;
            var_15 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) <= (((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) var_8))))));
        }
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1153073862)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3918139279U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (((((/* implicit */unsigned long long int) 3890527337380892280LL)) * (var_4)))));
        var_17 *= (!(((/* implicit */_Bool) var_0)));
    }
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                arr_11 [i_2] [i_2] = ((/* implicit */_Bool) -35520411411637565LL);
                var_18 = ((/* implicit */int) ((_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) (_Bool)1))))));
            }
        } 
    } 
}
