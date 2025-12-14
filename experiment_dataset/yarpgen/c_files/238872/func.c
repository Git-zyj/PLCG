/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238872
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) ? (max((((/* implicit */unsigned long long int) 1173145081013071568LL)), (3290828438410199387ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8388607LL)) ? (((/* implicit */unsigned long long int) var_13)) : (var_10))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 6; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((((unsigned long long int) (+(((/* implicit */int) var_6))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15155915635299352204ULL)) ? (511LL) : (-1752170551923632545LL)))) ? (((8658654068736ULL) * (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)41344))))))));
                    arr_11 [i_2] [i_2] &= ((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_2] [9LL] [i_0])) ? (var_10) : (arr_3 [i_1]))) <= (((/* implicit */unsigned long long int) ((unsigned int) var_4))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_3), (1752170551923632545LL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))), (var_0)));
    var_16 = ((/* implicit */long long int) max((((int) var_12)), (((/* implicit */int) var_8))));
    var_17 = ((/* implicit */short) (-(((long long int) var_3))));
}
