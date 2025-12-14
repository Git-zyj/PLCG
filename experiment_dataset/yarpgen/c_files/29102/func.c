/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29102
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)6144)) : (((/* implicit */int) (unsigned short)20235))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)0))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
        var_18 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)20228))))));
    }
    for (unsigned short i_1 = 4; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_19 |= ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) (unsigned short)54816)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)13760)))), (((((/* implicit */int) var_11)) ^ (((/* implicit */int) (unsigned short)51776))))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)20228))))));
            arr_10 [i_1] = arr_6 [i_1 - 4];
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)8074)) >= (((/* implicit */int) (unsigned short)65535))));
        }
        arr_12 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45307)))))));
        var_20 = var_1;
        arr_13 [i_1] [i_1] = (unsigned short)31424;
    }
    /* vectorizable */
    for (unsigned short i_3 = 4; i_3 < 19; i_3 += 1) /* same iter space */
    {
        var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3]))))) : ((-(((/* implicit */int) var_9))))));
        var_22 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned short)1329))))));
        arr_18 [i_3] = arr_7 [i_3] [i_3 - 3];
    }
    for (unsigned short i_4 = 4; i_4 < 19; i_4 += 1) /* same iter space */
    {
        var_23 = ((unsigned short) (unsigned short)20228);
        arr_23 [i_4 + 1] [i_4 + 2] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_19 [i_4 - 3])))) < (((/* implicit */int) ((((/* implicit */int) (unsigned short)36419)) != (((/* implicit */int) var_4)))))));
        var_24 += ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
    }
    var_25 = ((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned short)45301)) >= (((/* implicit */int) var_14)))) ? (((/* implicit */int) min(((unsigned short)57565), ((unsigned short)31285)))) : (((/* implicit */int) var_16)))) | (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65530)) / (((/* implicit */int) (unsigned short)9835))))) ? (((/* implicit */int) (unsigned short)65531)) : (((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (unsigned short)45301))))))));
    var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)51263))));
    var_27 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)768)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)4002)) > (((/* implicit */int) (unsigned short)51263))))))), (max((((((/* implicit */int) (unsigned short)65525)) - (((/* implicit */int) (unsigned short)16)))), (((/* implicit */int) var_0))))));
}
