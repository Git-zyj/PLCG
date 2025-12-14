/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32835
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
    var_14 = ((/* implicit */short) min((((int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)101)) : (var_9)))) ? (258476678) : (max((((/* implicit */int) var_8)), (var_6)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 4; i_4 < 24; i_4 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? ((+(var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (arr_10 [i_0] [i_1] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34))))))));
                            var_16 += ((/* implicit */int) arr_2 [(signed char)3]);
                            var_17 &= ((/* implicit */_Bool) var_4);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (short i_5 = 3; i_5 < 23; i_5 += 4) 
            {
                arr_14 [19] [i_5] = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) arr_13 [i_0] [i_5] [i_0] [i_0 + 2])))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_5] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) : (arr_13 [i_0] [i_0] [i_1] [i_5 - 2])))) ? (((/* implicit */int) arr_0 [i_5 + 2])) : (((/* implicit */int) arr_0 [i_0])))))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_3 [i_0 - 4] [i_0 + 2]))));
            }
            /* LoopNest 3 */
            for (signed char i_6 = 1; i_6 < 24; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    for (signed char i_8 = 2; i_8 < 23; i_8 += 4) 
                    {
                        {
                            var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18128)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_6]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)88)) && (((/* implicit */_Bool) (signed char)-101))))) : ((+(((/* implicit */int) arr_16 [i_6 - 1]))))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((0) * (0)))) ? (((/* implicit */int) arr_19 [i_8 - 1] [i_6 - 1] [i_6 + 1] [i_1] [i_1] [i_0 - 4])) : (((/* implicit */int) (signed char)109))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (arr_9 [i_0] [i_9] [i_9] [18] [22] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 - 4] [i_9] [i_9]))) : (((var_10) & (var_10))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (arr_9 [i_0 + 2] [i_0] [i_0] [(unsigned short)4] [i_9] [i_9]) : (((/* implicit */unsigned long long int) -6)))))))));
            var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_24 [i_0 + 3]) ? (((/* implicit */int) arr_24 [i_0 - 1])) : (((/* implicit */int) arr_24 [i_0 - 4]))))) ? (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned short)33669)))), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) -14)))))))) : (var_10)));
            var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((12841350394139092400ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_9] [i_9] [i_9] [i_0 - 4] [i_0 - 4] [i_9]))))))))));
        }
        /* LoopNest 2 */
        for (short i_10 = 1; i_10 < 23; i_10 += 4) 
        {
            for (signed char i_11 = 2; i_11 < 24; i_11 += 4) 
            {
                {
                    arr_32 [(_Bool)1] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_27 [i_0] [i_0 - 4] [i_10]) <= (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_11] [i_11 - 1] [i_11 + 1] [i_10]))))))));
                    arr_33 [i_0] [i_10] [i_11] = ((/* implicit */unsigned long long int) (signed char)-77);
                }
            } 
        } 
        arr_34 [(unsigned short)2] = ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)47408)), (-258476679)));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
    {
        for (int i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            {
                var_25 = ((((/* implicit */long long int) (+(((((/* implicit */_Bool) 12841350394139092400ULL)) ? (arr_1 [i_12] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101)))))))) == (((((((/* implicit */_Bool) arr_13 [i_13] [i_13] [i_13] [i_12])) && (((/* implicit */_Bool) (unsigned char)149)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_12] [i_12] [i_12] [i_12] [i_13] [i_13]))))) : (arr_17 [i_12] [i_13] [i_13] [i_13]))));
                var_26 -= (+(((/* implicit */int) (unsigned short)47423)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_14 = 3; i_14 < 16; i_14 += 4) 
    {
        var_27 |= ((/* implicit */int) ((((/* implicit */int) ((arr_6 [i_14] [i_14] [i_14 - 3]) == (((/* implicit */int) ((_Bool) 2109518781U)))))) != ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [i_14] [9ULL] [(short)19]))))))));
        var_28 = ((/* implicit */unsigned int) arr_6 [i_14] [i_14] [i_14 - 3]);
    }
}
