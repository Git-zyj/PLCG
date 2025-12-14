/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42788
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_1 [14U] [i_0]))))) - ((+(((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 22; i_1 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) min((min((min((((/* implicit */short) arr_4 [i_0])), (arr_0 [i_0]))), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_1 - 2] [(_Bool)1]))))))), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [i_0] [i_1])), ((unsigned char)193)))) && ((!(((/* implicit */_Bool) arr_2 [(unsigned char)12])))))))));
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_4 [i_0]), ((!(((/* implicit */_Bool) arr_2 [1U]))))))))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            arr_14 [i_2] [i_2] [i_4 - 1] = ((/* implicit */long long int) ((max((-1LL), (((/* implicit */long long int) (unsigned char)201)))) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1 - 2])))))));
                            arr_15 [(_Bool)1] [(unsigned char)15] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_5 [i_2] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) min((8190U), (((/* implicit */unsigned int) (signed char)-84))))) ? (((/* implicit */unsigned long long int) 2053098696U)) : (((16328580100997491133ULL) & (((/* implicit */unsigned long long int) arr_8 [(signed char)7] [i_2] [i_3] [i_4]))))))));
                            var_18 &= ((((/* implicit */_Bool) (short)1935)) ? (2076413831290015629ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                        }
                        for (signed char i_5 = 2; i_5 < 22; i_5 += 3) /* same iter space */
                        {
                            arr_19 [i_0] [i_2] [17U] [4] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_5]))))) % (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) ((((/* implicit */int) ((unsigned char) 6175262242846420741LL))) != (((/* implicit */int) (short)-1)))))));
                            var_19 = ((/* implicit */short) (-(((arr_9 [i_0] [i_0] [i_1 - 2]) - (((/* implicit */long long int) var_9))))));
                        }
                        for (signed char i_6 = 2; i_6 < 22; i_6 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [i_0] [i_1] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) var_8))))))) / (((((/* implicit */_Bool) (short)-15524)) ? (2489737256U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(short)19])))))))));
                            arr_23 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1 + 1]))))) ? (arr_18 [19U] [i_1] [i_2] [i_2]) : (arr_9 [i_0] [i_0] [(signed char)9])));
                        }
                        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_7 [i_2]), (((/* implicit */unsigned long long int) var_12))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) -196149810)) : (arr_18 [i_0] [i_1 - 2] [i_2] [i_2]))) : (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2] [i_0])))))));
                    }
                } 
            } 
            var_22 = arr_12 [i_0] [i_1 - 1] [i_0] [(_Bool)1] [19LL] [i_1];
        }
        for (short i_7 = 2; i_7 < 22; i_7 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) arr_6 [i_7 + 2] [i_7 - 1] [4ULL] [i_7 + 1])), (arr_26 [12U] [i_7 + 1] [i_7])))));
            var_24 = arr_7 [(unsigned char)0];
        }
        for (short i_8 = 2; i_8 < 22; i_8 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                for (short i_10 = 3; i_10 < 21; i_10 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) arr_22 [i_0] [i_8 - 1] [6LL] [i_9] [i_10]);
                        arr_34 [i_10] [i_8] [i_9] [i_8] = ((/* implicit */_Bool) min((6175262242846420741LL), (((/* implicit */long long int) arr_28 [i_0] [i_9]))));
                    }
                } 
            } 
            var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_0])) + (((/* implicit */int) arr_31 [i_8 + 2] [i_8 + 2] [i_8 + 2]))))) ? ((~(((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_8] [i_8] [i_0] [i_0]))))))) : ((-((-(((/* implicit */int) arr_16 [(signed char)10] [0] [(unsigned char)8]))))))));
        }
    }
    var_27 &= ((/* implicit */unsigned int) var_8);
}
