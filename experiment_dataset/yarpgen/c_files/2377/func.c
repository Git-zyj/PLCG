/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2377
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (var_0)))) && (((/* implicit */_Bool) ((var_13) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))))))))) : (min((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) var_2)) ? (4227858432U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_7)))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (11259441780181548264ULL)))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) (unsigned short)62809)) >> (((((/* implicit */int) (unsigned char)39)) - (11)))))));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)40518)) | (((/* implicit */int) (_Bool)1))));
            arr_5 [18] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((3179618677U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60269)))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))));
        }
        for (int i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (var_12)));
            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4434839160167958925LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))) ^ (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_1)))))));
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_6))) ^ (var_0))))));
        }
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)150)) ^ (((/* implicit */int) var_10))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_8)))))));
        }
    }
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_5))));
        arr_14 [i_4] = ((/* implicit */unsigned char) ((((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) > (((/* implicit */unsigned int) -1063793039))));
        var_26 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))) | (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))))), (340688992539817814ULL)));
    }
}
