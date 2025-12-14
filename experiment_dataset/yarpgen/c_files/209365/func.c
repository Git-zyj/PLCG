/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209365
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
    var_14 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) ((var_13) <= (((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) arr_2 [i_0]))))));
        var_16 -= ((/* implicit */short) ((unsigned int) arr_1 [0U]));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_7 [i_1] [i_2] [8] = ((/* implicit */unsigned long long int) (_Bool)1);
            var_17 = ((/* implicit */signed char) (+(((/* implicit */int) (((~(((/* implicit */int) arr_0 [i_1])))) == (((/* implicit */int) arr_3 [5ULL] [i_2])))))));
        }
        for (unsigned short i_3 = 1; i_3 < 7; i_3 += 1) 
        {
            arr_10 [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
            arr_11 [i_1] [i_3] [i_1] = ((/* implicit */int) (_Bool)1);
            var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : ((+(((/* implicit */int) (_Bool)1))))))) + ((+(((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
            var_19 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_1]))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                arr_17 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (~(arr_9 [i_1]))))));
                var_20 = (~((~(((/* implicit */int) (_Bool)1)))));
                var_21 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_1] [i_5]))));
            }
            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) arr_14 [i_1] [i_4] [i_4]))));
            var_23 = ((/* implicit */unsigned int) var_13);
        }
        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [1ULL] [i_6]))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) -1363414100452039521LL)) && ((_Bool)0))))));
            var_25 = ((/* implicit */short) var_11);
            var_26 *= ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
        }
        arr_21 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(var_13)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-113)) | (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_16 [(unsigned short)0] [(unsigned short)0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) min((((short) -8583219288185733547LL)), (((/* implicit */short) arr_12 [i_1] [i_1] [i_1])))))));
    }
    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
}
