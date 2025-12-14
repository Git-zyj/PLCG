/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37030
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
    var_20 = 5265536235923423717ULL;
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (short)-1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_22 = ((/* implicit */long long int) arr_3 [i_0 + 1] [i_0 + 2] [i_1]);
            var_23 = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned long long int) -1LL)) : (5265536235923423710ULL)))));
            arr_5 [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) || ((!(((/* implicit */_Bool) (-(18014397435740160ULL))))))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_3 = 1; i_3 < 17; i_3 += 1) /* same iter space */
            {
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) 6);
                var_24 = (-(((/* implicit */int) (short)-14881)));
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0]))))) * (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)1] [i_3 + 2]))) : (13181207837786127898ULL))))))));
            }
            for (long long int i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    arr_20 [i_0] [i_2] [i_2] [i_2] [i_4 + 2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [(short)11] [i_2] [i_0]))) | (35184372088831ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_4]))) : (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) var_3))));
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0 - 1]))))) ? (min((((/* implicit */unsigned long long int) min((arr_6 [i_5]), (((/* implicit */int) arr_15 [8ULL]))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (489276670088603727ULL))))) : (((unsigned long long int) (+(9067122020900361308LL)))))))));
                }
                var_27 = ((/* implicit */int) max((min(((~(var_15))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)12))))))), (((/* implicit */unsigned int) var_4))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)2)) * (min((((((/* implicit */int) arr_17 [i_0] [i_0] [3ULL] [3ULL] [i_0] [i_6])) / (((/* implicit */int) (unsigned char)31)))), (((/* implicit */int) arr_21 [i_0 + 2])))))))));
                var_29 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 1])) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)42)))))))) ? (min(((-(35182224605184LL))), (((/* implicit */long long int) arr_15 [14LL])))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [4U] [i_2] [4U])))));
            }
            var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_2]))))), (max((var_11), (((/* implicit */unsigned short) var_4)))))))));
        }
        var_31 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((((/* implicit */_Bool) arr_6 [19U])) ? (var_3) : (((/* implicit */int) (_Bool)1)))))));
        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_0 + 2]) / (max((arr_3 [i_0 - 1] [i_0] [i_0 + 1]), (arr_3 [i_0] [i_0 - 1] [i_0 + 1]))))))));
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0])) >= (((/* implicit */int) arr_1 [i_0])))))) : (6078082414763425931ULL)))) ? (((/* implicit */int) min((((/* implicit */short) ((unsigned char) (unsigned char)253))), ((short)511)))) : (((((/* implicit */int) arr_14 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2])) >> ((((~(((/* implicit */int) (unsigned char)255)))) + (271)))))));
    }
}
