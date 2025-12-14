/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221310
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1])) - (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0 - 1]))))) : (((unsigned int) arr_0 [i_0 + 1]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((17113767759564796780ULL), (17113767759564796781ULL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            arr_6 [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) var_10));
            arr_7 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_2 = 3; i_2 < 22; i_2 += 2) 
        {
            arr_11 [i_0 - 1] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (17113767759564796782ULL))) == (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (short)31337)) && (((/* implicit */_Bool) (signed char)-106))))))));
            var_11 = ((/* implicit */long long int) (+(((/* implicit */int) (short)(-32767 - 1)))));
        }
        for (short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            arr_15 [i_0] [i_3] |= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1])) >= (((/* implicit */int) arr_12 [i_0 + 1] [i_0])))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                var_12 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_3]);
                arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-5985)) : (((/* implicit */int) var_1))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    for (long long int i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) arr_5 [i_5] [15]);
                            var_14 = ((/* implicit */signed char) var_2);
                            var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0 - 1])) ? (((/* implicit */int) arr_20 [i_0 - 1])) : (((/* implicit */int) arr_20 [i_0 - 1]))))) ? (((((/* implicit */int) arr_20 [i_0 - 1])) % (((/* implicit */int) arr_20 [i_0 - 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_20 [i_0 - 1])) <= (((/* implicit */int) arr_20 [i_0 + 1]))))));
                        }
                    } 
                } 
                arr_24 [i_4] [i_3] [i_0] = ((/* implicit */unsigned char) arr_22 [i_4]);
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((short) var_4)))));
            }
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_27 [i_0] [i_7] [i_0] = var_10;
            var_17 = ((/* implicit */unsigned char) (+(arr_17 [i_0] [11ULL] [i_7])));
        }
    }
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1332976314144754835ULL)) ? (var_5) : (((/* implicit */int) (signed char)89)))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11919861709327790768ULL)) ? (-637604473) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) max((var_3), (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8)))) : (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9)))))));
}
