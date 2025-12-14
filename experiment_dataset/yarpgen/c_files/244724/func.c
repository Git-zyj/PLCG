/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244724
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11098201986707752473ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    for (long long int i_4 = 2; i_4 < 8; i_4 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) ((unsigned long long int) 272692775U));
                            var_13 = ((/* implicit */long long int) ((unsigned long long int) (+(3817226760U))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 2; i_5 < 7; i_5 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 2) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((long long int) (+(((/* implicit */int) arr_17 [i_5] [i_5] [i_6] [i_5] [i_5])))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15565)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? (-1134323159527671182LL) : (((/* implicit */long long int) arr_7 [i_1] [i_5 + 3]))));
                        }
                    } 
                } 
                arr_24 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_11 [i_0])) : (-1143065917)))) <= (1585399165801573550ULL)));
            }
            for (unsigned long long int i_8 = 2; i_8 < 7; i_8 += 4) /* same iter space */
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -864170023)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-1))))))))));
                var_15 = ((/* implicit */unsigned long long int) ((((arr_7 [i_1] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_0]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -2132426761))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_1] [i_1] [i_1])) & (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) -1)) ? (3488239802499696501ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6696)))))));
                arr_27 [i_1] [i_8] = ((/* implicit */unsigned long long int) (short)3793);
            }
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                var_17 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */long long int) arr_14 [i_1])) / (var_1))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 2; i_10 < 7; i_10 += 2) 
                {
                    for (unsigned char i_11 = 2; i_11 < 7; i_11 += 2) 
                    {
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_10]))) < (var_6)))) + (((int) (short)-11929))));
                            var_18 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_3)) - (99))))));
                            var_19 = ((unsigned short) arr_8 [i_0] [i_10 + 4] [i_9] [i_10]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_12 = 1; i_12 < 9; i_12 += 4) 
                {
                    arr_37 [i_0] [i_9] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned short)55218)) & (((/* implicit */int) arr_30 [i_9]))))));
                    arr_38 [i_0] [i_9] [i_0] = ((/* implicit */_Bool) ((signed char) (-(15882313475906230528ULL))));
                }
                var_20 = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
            }
            var_21 = ((/* implicit */unsigned char) (-(281474976710655ULL)));
        }
    }
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_8))));
    var_23 = ((/* implicit */unsigned int) ((unsigned long long int) ((signed char) (signed char)33)));
}
