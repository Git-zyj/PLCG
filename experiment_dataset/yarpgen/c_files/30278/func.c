/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30278
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) (((+(arr_1 [i_0 + 1] [i_0 + 1]))) + (max((arr_1 [i_0 + 1] [i_0 - 1]), (arr_1 [i_0 + 1] [i_0 - 1])))));
        var_18 = ((/* implicit */int) arr_0 [i_0]);
    }
    for (long long int i_1 = 1; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_0 [i_1]))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_3 [i_1])) << (((var_4) + (7148370368860932045LL))))), ((+(((/* implicit */int) var_7)))))))));
        var_20 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (17763609235363697695ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (var_1) : (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))))));
    }
    for (long long int i_2 = 1; i_2 < 20; i_2 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) << ((((+(-3224219200504273979LL))) + (3224219200504273988LL)))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 19; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_3] [i_2]))))), (((17763609235363697695ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned short)12] [(unsigned short)12])))))))) ? (((/* implicit */unsigned long long int) ((arr_7 [0U]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (min((((((/* implicit */_Bool) 683134838345853918ULL)) ? (683134838345853919ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) 2998101108U))))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 - 1]))))) << (((((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (((arr_1 [i_4] [i_2]) | (var_0))))) - (8791025235642932848LL)))));
                }
            } 
        } 
    }
    var_24 &= ((/* implicit */unsigned int) (+(max(((-(var_12))), (var_9)))));
    var_25 = ((/* implicit */long long int) var_1);
    var_26 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(var_1)))) ? ((+(var_9))) : (((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_16)) % (((/* implicit */int) var_16))))))))));
}
