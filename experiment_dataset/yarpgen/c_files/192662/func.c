/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192662
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_5)) : (min((((/* implicit */long long int) ((var_13) ? (var_5) : (((/* implicit */int) var_9))))), (((var_19) ^ (var_18)))))));
    var_21 = ((/* implicit */short) max((var_18), (((/* implicit */long long int) max(((+(var_17))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))))));
    var_22 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0] = ((var_13) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_3 [i_0])));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_0])))))));
        var_24 = ((/* implicit */_Bool) min((var_24), (arr_3 [0ULL])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned short) (-((+(max((arr_5 [i_1] [i_1]), (((/* implicit */long long int) var_14))))))));
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((unsigned char) arr_7 [i_1]))) ? (((unsigned long long int) arr_8 [i_1] [5])) : (((/* implicit */unsigned long long int) min((arr_5 [i_1] [16ULL]), (arr_5 [(short)12] [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(arr_7 [i_1]))))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 2; i_2 < 17; i_2 += 3) 
        {
            var_26 = ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2])) ? (arr_10 [i_2 - 1] [i_2]) : (arr_10 [i_2 - 1] [i_2 - 2]));
            arr_14 [i_2] [i_2] [3LL] = ((/* implicit */long long int) ((((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) var_5))))) <= ((~(((/* implicit */int) var_8))))));
            arr_15 [i_1] [i_2] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (signed char)(-127 - 1)))))));
        }
        /* vectorizable */
        for (signed char i_3 = 4; i_3 < 20; i_3 += 4) 
        {
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (~(((/* implicit */int) arr_17 [i_3 - 2] [i_3 - 2] [i_3 - 2])))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        var_28 *= ((/* implicit */unsigned char) (-(var_17)));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_29 = ((/* implicit */signed char) (-(arr_8 [i_3 - 2] [i_3 - 1])));
                            arr_25 [i_6] [i_5] [i_4] [i_4] [(unsigned short)5] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (var_6)));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_28 [i_1] [i_3] [i_4] [i_5] [(unsigned char)10] = ((/* implicit */unsigned short) var_6);
                            arr_29 [(unsigned short)6] [i_3] [(unsigned short)6] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((arr_23 [i_3 - 3] [i_3 + 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                            var_30 = ((/* implicit */unsigned long long int) ((arr_11 [i_3 - 2] [i_1] [i_1]) ? ((+(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [(_Bool)1] [i_5])))));
                            var_31 = ((/* implicit */unsigned long long int) arr_21 [i_1] [i_3] [i_4] [i_3]);
                            var_32 = ((/* implicit */unsigned long long int) (-((-(var_2)))));
                        }
                    }
                } 
            } 
            arr_30 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_3 + 1] [i_3] [i_3 - 2]))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                var_33 *= ((/* implicit */unsigned char) var_14);
                arr_34 [i_8] [(unsigned short)12] [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_3 - 4] [i_1])) ? (((/* implicit */int) var_12)) : (var_5)));
                var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_20 [i_3 - 2] [i_3 - 3] [i_3 + 1]))));
            }
        }
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            arr_37 [i_1] [1U] = ((/* implicit */unsigned int) (-(arr_18 [i_1] [i_9] [i_9])));
            var_35 = ((/* implicit */unsigned char) (+(arr_24 [i_9])));
            arr_38 [8U] [i_1] [i_9] = ((/* implicit */_Bool) min((((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_9] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_5 [3LL] [i_1]))))) % (((/* implicit */int) arr_17 [i_9] [i_9] [i_1])))))));
        }
    }
}
