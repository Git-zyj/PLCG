/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247027
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
    var_10 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
    var_11 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))), (((((/* implicit */int) var_8)) >> (((((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - (2120344162U)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned long long int) var_0);
            var_13 = ((/* implicit */int) (_Bool)1);
            /* LoopSeq 4 */
            for (short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                var_14 = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned short)124)) ^ ((~(2147483647))))), (((/* implicit */int) ((short) (~(((/* implicit */int) var_4))))))));
                var_15 += ((/* implicit */signed char) ((unsigned char) arr_6 [i_0] [i_2 - 1] [i_2]));
            }
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_16 = ((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_1]));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483625)) ? (((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) arr_2 [(signed char)5] [i_0]))))) : ((+(((/* implicit */int) var_8))))));
            }
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                var_18 = ((/* implicit */_Bool) ((unsigned long long int) (~(arr_10 [i_0] [(_Bool)1] [i_0]))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) && (((/* implicit */_Bool) arr_15 [i_1] [i_1])))))));
                            var_20 ^= ((/* implicit */unsigned short) (+(-2147483625)));
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_4] [i_4] [i_4]);
                var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (+(var_6))))) >> ((((~(((/* implicit */int) arr_4 [i_0] [i_1])))) + (22022)))));
                var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_2)), (max((((/* implicit */unsigned short) var_2)), (var_5)))));
            }
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((var_6), (((/* implicit */long long int) arr_1 [i_1])))), (((/* implicit */long long int) ((2147483627) / (((/* implicit */int) (short)19)))))))) ? ((-(((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5))))));
                var_25 &= ((/* implicit */short) var_1);
            }
            var_26 = ((/* implicit */unsigned char) max((((((int) 2147483629)) - (((/* implicit */int) var_5)))), ((+((-(2147483625)))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_15 [i_0] [i_8])) >= (((/* implicit */unsigned long long int) max((arr_17 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) var_8)))))));
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (max((((unsigned long long int) arr_5 [i_8] [i_0])), (((/* implicit */unsigned long long int) ((((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) != (((/* implicit */unsigned long long int) arr_15 [i_0] [10])))))))));
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    {
                        var_29 = ((/* implicit */long long int) (~(((-2147483619) * (((/* implicit */int) ((((/* implicit */int) (short)7023)) <= (((/* implicit */int) (unsigned char)5)))))))));
                        var_30 = var_0;
                    }
                } 
            } 
            var_31 = ((/* implicit */short) (~(((/* implicit */int) var_7))));
        }
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (max((((/* implicit */unsigned long long int) ((long long int) (signed char)-1))), (((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */unsigned long long int) 2147483647)) : (max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0])), (var_3)))))))));
        var_33 = ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) arr_17 [i_0] [i_0] [(unsigned char)20] [i_0])) : (arr_20 [4ULL] [i_0])))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (-8666944752359009009LL))))));
    }
}
