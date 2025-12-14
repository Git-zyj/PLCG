/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242113
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] = 144044819331678208ULL;
            arr_5 [i_0] [i_0] [i_0] = arr_0 [i_0];
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
        {
            var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2731426091U)) ? (var_3) : (arr_2 [i_2])))) ? (min((arr_2 [i_2]), (arr_2 [i_2]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [i_0])) : (arr_2 [i_2]))))))));
            var_11 = ((/* implicit */long long int) var_4);
            var_12 *= (+(((unsigned long long int) 8132352889106412543ULL)));
            var_13 = ((/* implicit */unsigned int) min((var_13), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) 1421473201U)) : (arr_1 [i_0])))) ? (((arr_3 [i_2] [i_2]) << (((arr_3 [i_2] [i_2]) - (3936557848U))))) : (((((/* implicit */_Bool) 8662400887514471961ULL)) ? (arr_3 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148)))))))));
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned int i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_18 [i_5 + 1] [i_5 + 3] [i_5] [i_5] [8ULL] [i_0])), (arr_13 [i_5 + 3] [i_0] [i_5] [9ULL] [9ULL] [i_5 + 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5 + 3] [i_5] [(signed char)0] [7ULL] [i_0])))))) : ((~(arr_17 [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_0])))));
                            arr_19 [i_0] [i_2] [4ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0])) ? (15838401248375611623ULL) : (((/* implicit */unsigned long long int) 527591503U)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_4]))))))))) ? (((((/* implicit */_Bool) (unsigned short)24576)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 36690590U)) : (1730392625675985871ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84))))) : ((+(max((((/* implicit */unsigned long long int) (unsigned char)16)), (3207417081589616622ULL)))))));
                            var_15 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63))) : (var_6)))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (arr_13 [i_3] [i_2] [i_3] [i_4] [i_3] [i_4]) : (((/* implicit */unsigned long long int) var_1)))) % (((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */unsigned long long int) 2851153556U)) : (var_0))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
        {
            var_16 ^= ((/* implicit */unsigned int) 1073740800ULL);
            var_17 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-3332))));
        }
        /* vectorizable */
        for (signed char i_7 = 1; i_7 < 9; i_7 += 2) 
        {
            var_18 |= ((((((/* implicit */_Bool) arr_12 [(unsigned short)8] [(signed char)0])) ? (var_8) : (var_1))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -8430493084163520817LL)))))));
            var_19 = ((/* implicit */unsigned int) 6816183863673787238ULL);
        }
        arr_25 [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-4355)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)63720))))) - ((-(var_0))))) + (((((((/* implicit */_Bool) 13004244317149797205ULL)) ? (3916610747087623966ULL) : (15505837419984681907ULL))) + (max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (var_0)))))));
        var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [0ULL]))))) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned char)189)))), (((/* implicit */int) var_2))))) : ((+(arr_17 [4ULL] [i_0] [i_0] [i_0] [4ULL])))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)84)) ? (var_6) : (var_1)))), (max((var_0), (((/* implicit */unsigned long long int) 2738114184875645408LL)))))))))));
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned int) arr_27 [i_8]);
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (140737488224256ULL)));
        arr_29 [i_8] = ((/* implicit */unsigned long long int) var_1);
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6))))));
    }
    var_24 = var_3;
}
