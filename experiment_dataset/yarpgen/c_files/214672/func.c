/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214672
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
    var_13 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (_Bool)1))))) + (((/* implicit */int) max((((unsigned char) (_Bool)1)), (((/* implicit */unsigned char) var_2)))))));
    var_14 *= ((/* implicit */unsigned long long int) (~(849867492225056824LL)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_6)))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_0 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (~(max((((/* implicit */int) var_11)), ((~(((/* implicit */int) (_Bool)1))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) -1330464624);
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_2] [i_2] [i_1] = ((unsigned char) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)14))));
            var_16 = ((/* implicit */int) ((long long int) arr_7 [i_1]));
            arr_11 [i_1] = ((/* implicit */short) var_6);
        }
        for (short i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)165)))) - (((var_9) / (((/* implicit */long long int) arr_0 [(signed char)0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_13 [i_3 - 2])))) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)248))))), ((-(arr_1 [i_1]))))))))));
            var_18 = ((/* implicit */int) ((((/* implicit */int) ((signed char) (_Bool)1))) < (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_3] [i_1]))))))))));
        }
        arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) min((((((/* implicit */_Bool) (signed char)-17)) && (((/* implicit */_Bool) -1910008193)))), ((_Bool)1))));
    }
    for (unsigned char i_4 = 3; i_4 < 16; i_4 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_15 [i_4 - 3] [i_4 + 2])) << (((((/* implicit */int) arr_15 [i_4 - 1] [i_4 + 2])) - (243)))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((int) (_Bool)1)))));
    }
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_12))));
}
