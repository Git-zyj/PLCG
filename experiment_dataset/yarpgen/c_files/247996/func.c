/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247996
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned int) arr_1 [i_0]))), (((arr_1 [12U]) | (((((/* implicit */_Bool) 2986669047U)) ? (((/* implicit */long long int) 1308298251U)) : (arr_0 [19])))))));
        var_13 = ((/* implicit */long long int) ((int) ((unsigned int) arr_0 [i_0])));
        var_14 = 3209377841014872333LL;
        var_15 = ((/* implicit */_Bool) var_6);
        var_16 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) ((_Bool) 1308298249U))))), (((/* implicit */int) ((9329140578176958826ULL) >= (9117603495532592811ULL))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_3 [i_1])))) ? (arr_2 [i_1]) : (((((/* implicit */_Bool) var_5)) ? (2986669059U) : (var_10)))));
        arr_4 [i_1] = ((/* implicit */long long int) (-(arr_2 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-45)) ? (9329140578176958819ULL) : (((/* implicit */unsigned long long int) arr_7 [i_2]))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) -2101212495))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (1308298249U)))) : ((-(9117603495532592822ULL)))));
    }
    for (int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_3 [i_3]) : (arr_3 [i_3])))));
        var_21 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) 1410051886150583519LL)), (arr_5 [i_3] [i_3]))), (arr_5 [(short)14] [i_3])));
    }
    var_22 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
}
