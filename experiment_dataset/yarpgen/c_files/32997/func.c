/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32997
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
    var_12 ^= ((/* implicit */unsigned short) (+(-392038828)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(392038827)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_8)))))) : (arr_2 [i_0])));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned char) arr_1 [i_0 - 1]))))) : (arr_0 [i_0]));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) : (2403264050813432620ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-99)) / (((/* implicit */int) (signed char)32))))))) & (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2] [i_2] [i_0 - 1])))))));
                    var_15 = ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned long long int) var_8)), (13406267290179773575ULL))) : (min((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))) : (9ULL))), ((+(arr_6 [i_1]))))));
                    arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_0 + 1] [i_1 - 1] [i_2 + 1]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (263882790666240LL))))))) ? (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (var_10)))), (arr_8 [i_0] [i_1] [i_2 + 1] [i_2 - 1])))) : (((/* implicit */int) arr_8 [1ULL] [i_1 + 2] [i_0] [i_2]))));
                }
            } 
        } 
    }
    var_16 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
}
