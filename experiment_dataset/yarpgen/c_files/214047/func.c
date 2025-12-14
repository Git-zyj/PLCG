/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214047
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 2; i_2 < 19; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            var_18 ^= ((/* implicit */signed char) ((var_15) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104)))));
                            var_19 -= ((/* implicit */short) ((((/* implicit */int) (!((_Bool)1)))) ^ (((/* implicit */int) arr_9 [i_2 + 1] [i_2] [i_1] [i_1 + 1]))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_4 + 1] [(_Bool)1] [i_4 - 1] [i_4])))))));
                            var_21 = ((/* implicit */_Bool) (~(var_6)));
                        }
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((arr_17 [i_1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 2]) ^ (var_16)));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) var_17)) || ((!(((/* implicit */_Bool) (short)-1)))))))));
                        }
                        for (int i_6 = 2; i_6 < 19; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) 671351376)) & (178013899722171925ULL)))));
                            arr_21 [i_0] [i_1] [i_1] [i_1] [(short)3] [i_3] = ((/* implicit */int) (~(178013899722171909ULL)));
                        }
                        arr_22 [i_0] [i_1] [i_1] [i_2] [i_0] |= ((/* implicit */signed char) ((arr_7 [(signed char)12] [i_1]) / (arr_7 [i_0] [(_Bool)1])));
                        var_24 = ((/* implicit */_Bool) ((18268730173987379696ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                        var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    arr_23 [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_17 [i_1] [19LL] [i_2 - 1] [16ULL] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                }
                for (short i_7 = 2; i_7 < 19; i_7 += 2) /* same iter space */
                {
                    var_26 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~((+(-206092983))))))));
                    var_27 = ((/* implicit */signed char) ((max(((~(1740264858655694026ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 17364436860256802853ULL))))))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)44)))))));
                    arr_27 [i_1] [i_1] = ((((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_1] [i_1 + 2]))))) >= ((~(arr_5 [i_1 + 1]))));
                }
                /* vectorizable */
                for (short i_8 = 2; i_8 < 19; i_8 += 2) /* same iter space */
                {
                    var_28 |= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
                    arr_30 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((18268730173987379707ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 3; i_9 < 16; i_9 += 1) 
                    {
                        for (short i_10 = 2; i_10 < 19; i_10 += 2) 
                        {
                            {
                                arr_36 [i_10] [i_1] [i_1] [i_8] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((var_7) == (((/* implicit */unsigned long long int) arr_26 [i_8 - 1] [i_1 - 1] [i_1]))));
                                arr_37 [i_0] [i_9] [i_1] [i_9] [i_10] [i_9] = ((/* implicit */long long int) (-(18268730173987379705ULL)));
                                arr_38 [i_8] [(short)17] [i_1] [i_9] [i_10] [i_0] [3LL] = ((/* implicit */long long int) ((((((/* implicit */int) arr_16 [i_10] [i_1] [10LL] [i_1] [i_0])) - (206092977))) != ((+(arr_29 [i_8] [i_1])))));
                                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((arr_14 [i_9 - 1] [i_1] [i_8] [i_8] [(_Bool)1] [i_1] [i_8]) | (((/* implicit */long long int) -206093002)))))));
                            }
                        } 
                    } 
                }
                var_30 += ((/* implicit */_Bool) max(((short)8191), ((short)21475)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_11 = 3; i_11 < 10; i_11 += 4) 
    {
        for (signed char i_12 = 3; i_12 < 10; i_12 += 2) 
        {
            {
                arr_45 [i_11] = max((max((((/* implicit */unsigned long long int) ((763698231) >= (-206092978)))), ((~(var_16))))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) | (var_1))), (206092982)))));
                var_31 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) min((arr_26 [i_11] [i_11 - 3] [i_11]), (((/* implicit */int) var_2))))) >= ((~(arr_1 [i_11]))))))));
            }
        } 
    } 
}
