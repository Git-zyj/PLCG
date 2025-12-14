/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192731
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
    var_20 = var_15;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_21 *= ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((var_7) | (arr_6 [i_1] [i_3])))))) <= (arr_10 [i_3]));
                        arr_13 [i_3] = ((/* implicit */int) ((unsigned int) max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) (unsigned short)11523)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (short)-27710)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    {
                        arr_20 [i_1] [i_4] [i_4] [i_5] = ((/* implicit */short) ((((arr_10 [i_4]) - (arr_10 [i_4]))) > (((/* implicit */long long int) ((((((/* implicit */int) arr_12 [i_4])) + (2147483647))) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)27713))) : (arr_10 [i_0]))) - (27700LL))))))));
                        arr_21 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_4] [i_1]);
                        var_22 &= ((/* implicit */unsigned char) arr_12 [i_5]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            arr_24 [i_0] [i_6] = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0]);
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6] [i_6])) || (((/* implicit */_Bool) ((arr_16 [i_6]) - (((/* implicit */unsigned int) 1437123150)))))));
        }
        for (short i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            arr_27 [i_0] [i_7] = ((/* implicit */unsigned short) (short)(-32767 - 1));
            arr_28 [i_7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)33020)))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_15 [i_0] [i_0] [i_7] [i_7]), (((/* implicit */short) var_12)))))) / (((((/* implicit */_Bool) (unsigned short)31800)) ? (2629378304836499525ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17735)))))))));
            var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) (short)-8797))))) + (((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_7] [i_0])) + (((/* implicit */int) (unsigned char)66))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) 16000283658990108072ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_17))))))));
        }
        var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */int) arr_22 [i_0] [i_0])) / (((((/* implicit */int) (unsigned short)9693)) / (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) * (((unsigned int) (~(((/* implicit */int) (unsigned short)33736)))))));
}
