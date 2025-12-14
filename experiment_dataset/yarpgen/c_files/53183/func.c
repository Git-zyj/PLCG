/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53183
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), ((+(((((/* implicit */_Bool) min((7U), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (((var_6) % (((/* implicit */unsigned long long int) var_5))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = var_12;
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_1 [(signed char)10] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (32U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
            var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 2]))));
        }
        arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)236)) % (((/* implicit */int) arr_5 [i_0]))));
        var_18 = ((/* implicit */long long int) ((unsigned short) arr_4 [i_0 + 3] [i_0 + 3]));
    }
    for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */short) (-((+(((/* implicit */int) var_9))))));
        arr_10 [i_2] = ((/* implicit */unsigned char) 4294967264U);
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -1576199764)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) : (var_6))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 4) 
        {
            var_20 = ((/* implicit */int) arr_12 [i_4] [i_4 + 2]);
            var_21 = ((/* implicit */int) arr_1 [i_4] [i_4]);
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)5384)) ? (var_3) : (arr_4 [i_3] [i_3])))) * (((unsigned int) 0U)))))));
        }
        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                var_23 = ((/* implicit */unsigned int) -1287360022);
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (774360681) : (((/* implicit */int) (short)-15))))) ? (((((/* implicit */int) var_4)) % (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                arr_21 [i_3] [i_5] [i_6] = ((/* implicit */unsigned short) ((arr_17 [i_3] [i_3]) % (((/* implicit */unsigned long long int) ((unsigned int) var_11)))));
            }
            arr_22 [i_3] [i_5] [i_5] = (~(var_8));
        }
        arr_23 [i_3] [i_3] = ((/* implicit */long long int) ((unsigned long long int) ((11324248655820975585ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
    }
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -4531365609583088198LL)), (((var_6) / (((/* implicit */unsigned long long int) var_14))))))) ? (((/* implicit */int) (unsigned char)32)) : ((~(((/* implicit */int) (_Bool)1))))));
}
