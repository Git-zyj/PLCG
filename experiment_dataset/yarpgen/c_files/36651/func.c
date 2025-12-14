/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36651
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned char) ((((0ULL) <= (var_13))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8740110405830891704LL))))) : (((/* implicit */int) ((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_17 ^= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)32704)) - (32701)))));
                        var_18 = ((arr_11 [10LL] [i_0] [i_2 + 1] [i_0] [16ULL] [i_2 + 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2 - 1] [i_2 + 2] [i_2]))));
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (short i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                var_19 = ((((/* implicit */unsigned long long int) -8740110405830891701LL)) > (9693432924595930998ULL));
                /* LoopNest 2 */
                for (unsigned short i_6 = 1; i_6 < 16; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((short) arr_5 [i_0] [i_4 + 1] [i_4 - 1]));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8740110405830891677LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 - 1] [i_6 - 1]))) : (arr_8 [i_0] [7LL] [7LL] [i_0])));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                arr_28 [i_0] [i_4] = ((/* implicit */signed char) (!((_Bool)1)));
                var_22 = (~(((3173258161U) >> (((((/* implicit */int) var_0)) - (20877))))));
            }
            arr_29 [i_4] [i_0] [(unsigned char)3] = ((var_7) + (arr_25 [(unsigned short)9] [i_4 - 1] [13] [i_0] [i_0] [i_0]));
        }
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            arr_32 [i_0] [i_0] = ((/* implicit */unsigned char) var_10);
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                var_23 |= ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_9] [i_9] [i_10] [8U])) : (var_12));
                var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8740110405830891692LL)) ? (((/* implicit */int) (short)-23604)) : (((var_6) ? (((/* implicit */int) arr_13 [(_Bool)1])) : (((/* implicit */int) (unsigned short)62718))))));
            }
        }
        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
        {
            var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-25))));
            /* LoopSeq 1 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_26 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-32750)))))));
                arr_42 [12] [i_11] [i_11] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
            }
        }
    }
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned long long int) var_4)), (((18446744073709551602ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)32688), ((unsigned short)32712)))))));
}
