/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32449
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
    var_18 = ((/* implicit */short) var_10);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((int) (+(11221381216696441847ULL)))))));
                    arr_7 [i_0 - 2] [1LL] [(short)1] = ((/* implicit */short) ((arr_3 [5U] [i_1 + 2]) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) (unsigned short)65519)))))) > ((+(-8734291910459481302LL))))))));
                }
            } 
        } 
    } 
    var_20 = var_1;
    var_21 = ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)1)))) < (109246747)));
}
