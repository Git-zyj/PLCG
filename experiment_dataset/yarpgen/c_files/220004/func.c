/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220004
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_12)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) / (var_8)))) ^ ((-(5527627546997857512ULL))))), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) <= (((/* implicit */unsigned long long int) ((-251753845389662048LL) % (-2377137728669883695LL)))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (long long int i_3 = 4; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */long long int) (unsigned char)127)), (-2377137728669883695LL))) <= (min((arr_1 [0ULL] [5LL]), (((/* implicit */long long int) (unsigned char)239)))))))) & (((((/* implicit */_Bool) max((var_13), (arr_11 [i_0] [i_0] [i_3 - 4])))) ? (((unsigned long long int) arr_9 [i_0] [7LL] [i_0] [i_0])) : (((/* implicit */unsigned long long int) (-(var_10)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            arr_16 [i_0] = ((/* implicit */long long int) var_7);
                            var_16 = ((arr_14 [i_1] [i_2] [i_2] [i_3 - 4] [i_2] [(unsigned char)7] [i_1]) % (arr_14 [i_3 - 4] [i_3] [i_3] [i_3 - 3] [i_3 - 4] [i_4] [i_4]));
                        }
                        var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [(unsigned char)0] [i_0] [i_0] [i_0])) ? (-248002198751152384LL) : (2377137728669883695LL))), (((/* implicit */long long int) var_7))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            var_18 ^= max((((/* implicit */long long int) arr_10 [i_0] [i_0])), (max((min((arr_18 [i_5]), (((/* implicit */long long int) var_6)))), (arr_7 [i_0] [i_0] [i_5]))));
            var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */unsigned long long int) 7LL)) % (var_12))) : (max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (12279463501326080572ULL))))), (((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0] [i_0]) % (((-3427637310512349002LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))))))))));
            arr_19 [i_0] = max((max((((/* implicit */unsigned long long int) max((2377137728669883694LL), (9223372036854775807LL)))), (max((((/* implicit */unsigned long long int) var_14)), (16495951916201913379ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_5])) && (((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5]))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 3) 
            {
                {
                    var_20 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min(((unsigned char)128), ((unsigned char)172)))), (600873856650066295ULL)));
                    arr_26 [i_0] [(unsigned char)10] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) : (2377137728669883686LL)));
                }
            } 
        } 
    }
}
