/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227391
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
    var_10 = ((/* implicit */signed char) (unsigned short)64985);
    var_11 = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */long long int) var_8)), (var_1))));
    var_12 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) (-(((/* implicit */int) var_3))))), ((+(670007041966618730LL))))) >> (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_7)), (var_0)))) >= (((/* implicit */int) var_2)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 += ((/* implicit */short) ((max((var_4), (max((var_5), (((/* implicit */unsigned long long int) var_3)))))) > (((/* implicit */unsigned long long int) ((4294967295U) * (0U))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (((!(arr_2 [i_0]))) ? (((((/* implicit */int) max((var_8), (((/* implicit */signed char) (_Bool)1))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)551))) <= (arr_0 [i_0])))))) : (((/* implicit */int) (_Bool)0))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((((_Bool) (unsigned short)8191)) ? ((+(var_5))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0]))))))) * (((/* implicit */unsigned long long int) 670007041966618718LL))));
        var_14 = ((/* implicit */short) ((((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned short)64980)))) != ((+(((/* implicit */int) min(((unsigned short)25426), ((unsigned short)816))))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2183813376U)) && (((/* implicit */_Bool) max((20U), (((/* implicit */unsigned int) (_Bool)1)))))));
    }
}
