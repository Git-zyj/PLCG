/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211195
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) var_9);
        var_19 *= ((/* implicit */unsigned int) (short)9695);
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */short) (_Bool)0);
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 17; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 16; i_3 += 3) 
            {
                {
                    arr_9 [i_3 + 2] [i_3 + 2] [i_1] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (short)-9665)), (30921580134980047ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 + 3] [i_3 + 3] [i_3] [i_3]))) < (((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9664))) : (-5341210852257884406LL))))))));
                    var_21 = ((/* implicit */_Bool) 30921580134980047ULL);
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((~(arr_6 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 17259009061538841104ULL)) && (((/* implicit */_Bool) var_17))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)63))) == (arr_11 [i_1] [i_1] [i_4])));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 2) 
                    {
                        {
                            var_23 ^= ((/* implicit */unsigned short) arr_12 [i_5] [i_7 - 2]);
                            var_24 = ((/* implicit */long long int) 1493921113);
                        }
                    } 
                } 
                arr_23 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_1]))))) & (1501087427587912605LL)));
                var_25 += ((/* implicit */signed char) arr_7 [i_5]);
            }
            var_26 = ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_4]);
        }
        var_27 += ((/* implicit */_Bool) ((arr_16 [(unsigned char)14]) ? (max(((~(16351101236681366298ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
    }
    var_28 = ((/* implicit */int) var_14);
}
