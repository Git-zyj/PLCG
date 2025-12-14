/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216665
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_13 -= ((/* implicit */unsigned short) arr_1 [i_0 + 2]);
        arr_2 [i_0 - 1] [i_0] |= var_0;
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            arr_7 [17U] [i_1] = (-(((/* implicit */int) (unsigned char)129)));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 18; i_3 += 3) 
            {
                var_14 = ((/* implicit */unsigned char) ((var_6) / (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) && (((/* implicit */_Bool) var_2)))))));
                arr_10 [i_3 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 14949478292335304386ULL))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)127))))) : (var_2)));
                var_15 = ((/* implicit */unsigned long long int) ((_Bool) (!(var_10))));
            }
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_4 + 1])) << (((((/* implicit */int) arr_1 [i_4 + 1])) - (152))))))));
                var_17 = ((/* implicit */unsigned short) ((arr_11 [i_1] [i_2]) << (((arr_11 [i_1] [i_2]) - (3893801400U)))));
            }
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 1; i_6 < 16; i_6 += 2) 
                {
                    arr_17 [10LL] [i_2] [i_2] [10LL] [i_5] [10LL] = ((/* implicit */signed char) ((unsigned char) var_7));
                    arr_18 [i_1] [i_1] [(_Bool)1] [i_1] [(unsigned char)3] [(unsigned char)16] = ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
                    var_18 = ((unsigned char) var_2);
                }
                arr_19 [i_1] [i_2] [i_5] [i_5] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_12 [16LL])) ? (((/* implicit */int) (signed char)-87)) : (arr_14 [(unsigned char)14] [i_5] [(unsigned char)14] [i_1]))) + (2147483647))) >> (((/* implicit */int) var_11))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) arr_1 [i_1]))));
            }
            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_13 [i_1] [i_2] [i_2]))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_22 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned char) arr_14 [i_1] [i_7] [i_7] [i_7]))), (min((var_12), (((/* implicit */unsigned long long int) arr_11 [i_1] [i_7]))))));
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (long long int i_10 = 4; i_10 < 16; i_10 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (arr_23 [(signed char)10] [(signed char)10] [i_7] [(signed char)10])))) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (_Bool)1))))) : (max((var_2), (((/* implicit */unsigned int) arr_24 [i_10 - 4] [i_10 - 2] [i_10] [i_10 - 4]))))));
                            var_22 |= ((/* implicit */unsigned int) 0LL);
                            var_23 = ((/* implicit */unsigned long long int) (((((+(((/* implicit */int) (signed char)25)))) % ((~(((/* implicit */int) arr_1 [i_8])))))) | (((/* implicit */int) var_10))));
                            var_24 = ((/* implicit */unsigned short) var_3);
                            var_25 = (signed char)33;
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_11))) ? (min((((/* implicit */unsigned int) (unsigned char)38)), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75))))))));
            var_27 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 576460752303423487LL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_10)))) : (((((/* implicit */int) arr_25 [i_7] [i_1] [i_1] [i_1])) * (((/* implicit */int) (_Bool)0)))))));
            var_28 = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_4)))) & (((/* implicit */int) ((((((/* implicit */int) var_3)) * (((/* implicit */int) arr_1 [i_1])))) <= (((/* implicit */int) (!(var_11)))))))));
        }
        var_29 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */int) (unsigned short)0))))) / (arr_8 [i_1] [i_1] [i_1])))), (((unsigned long long int) arr_13 [i_1] [i_1] [i_1]))));
    }
    var_30 = ((/* implicit */unsigned int) var_3);
    var_31 = ((/* implicit */signed char) (+((-(((/* implicit */int) ((-1363060126899544820LL) <= (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
}
