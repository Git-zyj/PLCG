/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26743
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
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
        {
            var_13 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_1])), (-2009161437033744669LL)))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [(unsigned char)3])))))))) : (((/* implicit */int) var_1)));
            var_14 = ((/* implicit */signed char) var_8);
            arr_6 [i_0] [i_0] = ((/* implicit */short) (~(((arr_0 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
            arr_7 [i_0] [i_1] [i_0] = ((max((arr_4 [i_0]), (arr_4 [i_0]))) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) arr_2 [8U])) < (((/* implicit */int) (unsigned short)634))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-3228723980436785746LL)))))));
        }
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                arr_13 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned int) var_11)) : (arr_8 [i_0] [i_2] [i_3])));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 3; i_5 < 7; i_5 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_2 [i_5]))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-984)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64883))) : (-8134865731688031580LL)));
                        }
                    } 
                } 
            }
            for (long long int i_6 = 3; i_6 < 9; i_6 += 3) 
            {
                var_17 = ((/* implicit */long long int) arr_14 [i_6 - 2] [i_0] [i_0] [i_0]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    arr_26 [6LL] [i_2] [6LL] [i_7 - 1] |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64901)))))) ^ (((((/* implicit */_Bool) arr_4 [0U])) ? (((/* implicit */long long int) var_11)) : (arr_21 [i_2] [i_2] [0LL])))));
                    arr_27 [i_2] [i_2] [i_2] [i_2] [i_0] [8LL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_22 [(signed char)0] [(signed char)0])) / (var_2)))) ? (((((/* implicit */int) arr_11 [i_0] [i_2] [i_6 - 2] [i_2])) % (((/* implicit */int) arr_5 [i_0] [i_2] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_8)))))));
                    arr_28 [i_0] = ((/* implicit */unsigned char) (unsigned short)652);
                    var_18 = ((/* implicit */long long int) (short)983);
                }
                for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    var_19 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)665))) : (arr_24 [i_0] [i_0])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-984))))) : (((arr_3 [i_8] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) 2517059468U)) ? (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_8])))) : ((-(((/* implicit */int) var_12))))))));
                    var_20 = ((/* implicit */signed char) arr_8 [(_Bool)1] [i_2] [i_0]);
                }
                arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)653)) | (((/* implicit */int) (_Bool)0))));
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_29 [i_0] [i_2] [i_2] [i_6])) ? (arr_30 [i_2] [i_2] [i_2] [i_2]) : (arr_8 [i_0] [i_2] [i_0]))))))));
            }
            arr_33 [i_0] [i_2] = ((/* implicit */long long int) arr_31 [i_0] [i_2] [0] [i_0]);
            arr_34 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) (short)-25062)) + (25075)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (arr_24 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_2])) * (((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) (-(arr_3 [i_0 - 2] [i_0 - 2]))))));
        }
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            arr_38 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 + 1] [(unsigned short)0] [i_0 + 2])) ? (arr_21 [i_0 + 1] [i_0 - 3] [i_0]) : (arr_21 [i_0 - 3] [i_0 + 2] [i_0])));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 3]))))));
            arr_39 [i_0] [i_0 - 2] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)652)) | (((/* implicit */int) (unsigned short)64901)))))));
            var_23 = ((/* implicit */short) var_2);
        }
        var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_10) : (arr_36 [i_0 - 3] [i_0 - 1])))) ? (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-1769203851669385121LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 2] [i_0]))))) != (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_24 [i_0 - 2] [i_0])))), (var_9)))))));
    }
    for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 1) 
    {
        arr_44 [i_10] [i_10] = ((/* implicit */unsigned int) arr_41 [i_10 + 1]);
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_43 [i_10] [i_10 + 1]), (arr_43 [13] [i_10 + 1])))) ? ((+(arr_43 [i_10] [i_10 + 1]))) : (((arr_43 [i_10] [i_10 - 1]) % (arr_43 [i_10] [i_10 - 1])))));
    }
    var_26 = ((/* implicit */unsigned short) var_4);
}
