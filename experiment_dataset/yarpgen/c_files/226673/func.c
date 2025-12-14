/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226673
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
    var_16 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) var_6);
        var_18 -= ((/* implicit */unsigned long long int) arr_0 [i_0 + 2]);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            var_19 ^= ((unsigned short) (unsigned short)30000);
            var_20 = ((/* implicit */short) ((unsigned int) (signed char)-10));
        }
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (arr_4 [i_0 + 1] [i_2] [23]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35536))))), (arr_4 [i_0 + 3] [i_2] [i_2])));
            arr_11 [2LL] [i_0] [18ULL] = min((2862621195884034655ULL), (((/* implicit */unsigned long long int) (unsigned short)35536)));
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max((((unsigned long long int) 131072U)), (max((4018776975289133261ULL), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)128))))))))));
            arr_12 [i_0] [i_2] [14ULL] = ((/* implicit */int) arr_7 [i_0] [i_2]);
        }
        for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
        {
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_8 [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(var_7)))))) : (var_8)));
            arr_15 [i_0] [i_3] [i_0 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)35536)) ? (4227858432U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7935))))))))));
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) 24576U)) ? (((/* implicit */unsigned long long int) 1653019375U)) : (0ULL)));
            arr_16 [i_3] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_2 [i_3 - 1])) || (((/* implicit */_Bool) (signed char)-18)))));
        }
    }
    /* LoopSeq 2 */
    for (int i_4 = 2; i_4 < 12; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                {
                    arr_25 [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) max((((unsigned short) arr_17 [i_5])), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_4 + 4])) && (((/* implicit */_Bool) arr_2 [i_4 + 3])))))));
                    arr_26 [i_4] [(signed char)6] [(unsigned char)4] [i_6] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (short)7965)), (((1097100165404497855ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7935)))))));
                }
            } 
        } 
        var_25 ^= ((/* implicit */short) arr_7 [i_4] [i_4]);
        arr_27 [(unsigned char)5] = ((/* implicit */unsigned long long int) (+(arr_9 [i_4] [i_4] [i_4 + 3])));
    }
    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_9 [i_7] [i_7] [i_7]), (arr_9 [i_7] [i_7] [i_7])))) ? (((unsigned int) 0U)) : (((unsigned int) arr_28 [i_7]))));
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_10 [i_7] [i_7]), (((/* implicit */signed char) (!(((/* implicit */_Bool) 3885738206U)))))))) || (((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7])))))));
        var_28 *= var_7;
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    {
                        arr_40 [i_7] [i_7] [i_7] [i_9] [22] = ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) arr_31 [i_8])))));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (min((((unsigned long long int) ((int) (short)9684))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [12U])) < (((/* implicit */int) (unsigned short)5369)))))))));
                        var_30 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((short) ((-1987329356578159400LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17012))))))), (((((/* implicit */_Bool) 15U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))) : (8324533814915438186ULL)))));
                    }
                } 
            } 
        } 
    }
}
