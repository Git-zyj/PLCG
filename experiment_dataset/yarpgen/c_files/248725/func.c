/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248725
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
    var_17 += ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)139))));
    var_18 = var_3;
    var_19 = ((/* implicit */unsigned long long int) var_1);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_15)) / (((/* implicit */int) var_2))))))) || (((/* implicit */_Bool) var_5))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((var_0) ? (((/* implicit */unsigned int) var_8)) : (var_5))) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_15)))))))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_2] [i_1] [i_1] [i_0])), (5281479001737675802ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_8 [20ULL] [20ULL] [20ULL] [i_2 + 1])) && (((/* implicit */_Bool) 144189990U)))))))) : (((unsigned long long int) (!(((/* implicit */_Bool) 1893831649U))))))))));
                    arr_11 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) min((arr_2 [i_1 - 1] [i_0]), (arr_2 [i_1] [(_Bool)1]))))));
                }
            } 
        } 
    } 
}
