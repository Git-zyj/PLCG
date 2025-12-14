/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3519
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
    var_11 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */int) (signed char)32)) : (268369920)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))));
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                var_13 = ((/* implicit */short) ((((/* implicit */int) (signed char)122)) != (((/* implicit */int) (unsigned short)14654))));
                /* LoopNest 2 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 12; i_4 += 4) 
                    {
                        {
                            arr_16 [i_0] [i_1] [i_2] [7U] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((var_10) % (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_2])), (var_4))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [(short)7] [(short)7] [i_3]))));
                            var_14 ^= ((/* implicit */unsigned int) 268369920);
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            var_15 ^= ((/* implicit */signed char) (+(2ULL)));
            var_16 = (+(((/* implicit */int) ((short) 4294967295U))));
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                var_17 = ((/* implicit */int) 248LL);
                arr_24 [i_0] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((max((arr_6 [(short)4] [i_6]), (((/* implicit */unsigned long long int) 6U)))) == (((/* implicit */unsigned long long int) var_6))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_18 = ((signed char) var_2);
                    var_19 += var_3;
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((int) var_5))) : (((unsigned int) (unsigned char)11))));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 2; i_8 < 10; i_8 += 1) 
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((long long int) var_10)))));
                        var_22 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-13528)) : (((/* implicit */int) (short)-17347))));
                    }
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [(signed char)11] [i_5 - 1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))) : (var_4)));
                }
                /* vectorizable */
                for (unsigned short i_9 = 1; i_9 < 11; i_9 += 4) 
                {
                    var_24 = ((/* implicit */unsigned short) (-(var_6)));
                    arr_33 [0ULL] [0ULL] [0ULL] = ((/* implicit */int) var_3);
                }
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_26 [i_6] [4] [i_5] [i_0])), (13653044893707343650ULL)))) ? (((((/* implicit */_Bool) -1042704296)) ? (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0])) : (var_10))) : (((4793699180002207963ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [9ULL]))))))) / (((/* implicit */unsigned long long int) 1475267263U)))))));
            }
        }
        var_26 = ((/* implicit */long long int) ((unsigned int) ((int) 5U)));
    }
    var_27 = ((/* implicit */int) var_7);
    var_28 = ((/* implicit */signed char) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)-2995))));
}
