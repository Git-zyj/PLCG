/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40272
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
    var_11 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)20), ((unsigned char)228))))))), (max((((var_4) / (var_7))), (var_8)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (-(min((((/* implicit */int) arr_1 [i_1])), (var_10))))))));
            var_13 ^= (~(2069442202951300022ULL));
        }
        for (unsigned short i_2 = 3; i_2 < 16; i_2 += 2) 
        {
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned short) (((~(((arr_5 [i_0] [i_2 - 2] [i_2 - 2]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0] [i_2])))))) * (((((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [14]))))) ? (((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) : (((/* implicit */int) ((signed char) (unsigned char)3)))))));
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_14 = ((827036529U) << (((/* implicit */int) (_Bool)1)));
                            arr_18 [i_2] [i_4] [i_3] [13U] [(_Bool)1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_4] [i_3] [i_0] [i_0])) | (((/* implicit */int) var_2)))))))) ? (((long long int) 4294967295U)) : (((/* implicit */long long int) arr_14 [i_0] [i_2] [i_3] [(unsigned short)5]))));
                        }
                    } 
                } 
            } 
            var_15 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)17022)) ? (((/* implicit */unsigned int) arr_14 [i_0] [i_2] [i_2] [i_2 - 2])) : (var_7)))))) ? (((((/* implicit */_Bool) min(((short)1), (((/* implicit */short) (_Bool)1))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [i_0] [i_0] [(signed char)11] [i_2]))))))) : (4294967275U));
            var_16 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max(((short)1), ((short)1)))), (((7845376572323512178ULL) << (((3374552091762497091LL) - (3374552091762497078LL)))))));
            var_17 = arr_17 [i_2];
        }
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) (unsigned short)48517);
            arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_4)))) ? ((-(arr_14 [(unsigned short)6] [i_0] [i_6] [i_6]))) : (((/* implicit */int) ((((/* implicit */unsigned int) var_10)) >= (13U))))));
            var_19 &= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_13 [(unsigned char)16] [i_0] [i_0])), ((~(((/* implicit */int) (unsigned char)221)))))))));
        }
        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])))) ? (min((((/* implicit */unsigned long long int) (unsigned char)43)), (16635899167157421658ULL))) : (max((2365564112374964263ULL), (((/* implicit */unsigned long long int) (short)-1))))));
        var_21 = ((/* implicit */unsigned int) arr_16 [1ULL] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (long long int i_7 = 1; i_7 < 11; i_7 += 2) 
    {
        arr_26 [i_7] [i_7] = ((/* implicit */short) (~(3013252831360185377ULL)));
        arr_27 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))))), (((/* implicit */unsigned int) var_3))))) == (((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (short)-10))))) ? (arr_8 [3ULL] [i_7 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [(short)10] [i_7 - 1])))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            for (signed char i_9 = 1; i_9 < 11; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((9410964927081355353ULL) * (((((/* implicit */_Bool) var_5)) ? (var_9) : (var_9))))) << (((/* implicit */int) (!((!(((/* implicit */_Bool) var_6)))))))))));
                                var_23 = ((/* implicit */long long int) var_5);
                                arr_38 [i_11] [i_7] [i_10] [(short)10] [(short)10] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_9 [i_11])))), (((/* implicit */int) (!(((/* implicit */_Bool) 13ULL)))))))) / (arr_4 [3ULL] [i_8] [i_9 - 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 3; i_13 < 11; i_13 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_40 [i_13 - 1] [i_9 - 1])) * (((/* implicit */int) arr_40 [i_13 - 2] [i_9 - 1]))))));
                                var_25 += ((/* implicit */_Bool) arr_41 [i_7] [(unsigned char)9] [i_9 + 1] [(unsigned char)9] [i_13]);
                                var_26 = ((/* implicit */_Bool) max((var_26), (((((/* implicit */unsigned long long int) 1073741823U)) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_12])) : (2147483647)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967288U)))))) : (((arr_24 [i_7]) / (arr_36 [i_7 + 1] [i_8] [i_8] [i_9 - 1] [i_9 - 1] [i_12] [i_13])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
