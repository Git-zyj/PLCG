/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210186
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */int) ((15805322479897580836ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) > (((var_2) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) var_8)))))))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9180544708508181622ULL)) ? (9266199365201369993ULL) : (((/* implicit */unsigned long long int) 4087874978193150888LL))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_13 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)30720))) <= (15805322479897580836ULL));
        var_14 = arr_3 [i_1];
        var_15 = ((/* implicit */short) (~((~(((/* implicit */int) var_1))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_16 = arr_0 [i_2];
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) (short)27354)) : (((/* implicit */int) (_Bool)0))));
            arr_12 [i_2] = var_5;
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_18 -= ((/* implicit */unsigned long long int) ((unsigned char) 13000015902362615855ULL));
            var_19 = ((/* implicit */unsigned char) ((((_Bool) arr_11 [i_2])) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_4])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2])))))));
        }
        var_20 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(4503462188417024LL)))) ^ (arr_8 [(short)8] [i_2])));
        var_21 = ((/* implicit */long long int) (_Bool)1);
    }
    var_22 = var_1;
    var_23 = ((/* implicit */long long int) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9))))));
}
