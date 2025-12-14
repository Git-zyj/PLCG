/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189726
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            var_10 ^= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47346)) ? ((-(((/* implicit */int) (unsigned char)251)))) : (((/* implicit */int) arr_4 [i_0] [i_0])))));
            arr_6 [i_1] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (0U)))) ? (((((/* implicit */_Bool) arr_1 [14U])) ? (arr_5 [i_1] [(unsigned short)17] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((arr_2 [i_1 - 1] [i_0]) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))) << ((((~(((/* implicit */int) ((signed char) arr_2 [2U] [5U]))))) + (8))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [7U] [i_1 - 2] [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_2] [i_3]);
                        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) arr_0 [i_1 + 2])), (var_2)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 - 2] [i_1] [i_1] [i_3] [i_1 - 1] [i_0])))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 3) 
        {
            arr_15 [i_0] [i_0] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_4 + 3] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) (unsigned char)202))))) ? (var_3) : (var_3))) & (min((((/* implicit */unsigned int) max((arr_8 [i_0] [i_4] [i_0]), (((/* implicit */short) var_4))))), (min((((/* implicit */unsigned int) arr_2 [i_0] [i_4 - 2])), (var_1)))))));
            var_12 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4 + 2] [i_4 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4 + 3] [i_4 - 2] [i_4 + 1]))) : (var_1))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_4 + 3] [i_4 + 1] [i_4 - 1])))))));
        }
        for (unsigned char i_5 = 2; i_5 < 20; i_5 += 1) 
        {
            arr_20 [i_5] [19ULL] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) max((var_3), (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0]))))));
            arr_21 [8ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3820295421U)), (arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_14 [i_5 + 1] [i_5 + 1] [i_0])) < (((/* implicit */int) arr_14 [i_5 - 1] [i_5 - 1] [i_0]))))) : (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (arr_19 [20U]))))))));
            var_13 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((var_0) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) var_2)))), (((var_8) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_0]))))))), (max((((/* implicit */unsigned long long int) arr_17 [i_5 + 1] [i_5 + 1])), (max((((/* implicit */unsigned long long int) var_2)), (5637997112305036324ULL)))))));
        }
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_9 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6] [i_6] [i_6]))) : (474671882U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0] [i_6])) ? (((/* implicit */int) arr_8 [i_0] [i_6] [7ULL])) : (((/* implicit */int) arr_9 [i_6]))))))))));
            /* LoopNest 3 */
            for (unsigned char i_7 = 3; i_7 < 19; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_9), (var_2))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))))))) : (((((/* implicit */_Bool) arr_19 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5)))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((/* implicit */int) min((arr_4 [i_7 - 2] [i_6]), (arr_31 [i_0] [7] [(short)6] [i_0] [i_0] [i_0])))), ((+(((/* implicit */int) arr_4 [i_6] [i_6])))))))));
                            arr_36 [i_0] [18] [i_7] [i_8] [i_0] [18] [(unsigned char)6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_0 [i_9]), (((/* implicit */signed char) arr_2 [i_0] [4U]))))), (((unsigned long long int) arr_34 [i_7 - 2]))));
                        }
                    } 
                } 
            } 
        }
        var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)79))))), (max(((+(1354539050U))), (((/* implicit */unsigned int) arr_26 [i_0] [i_0]))))));
    }
    var_18 = ((/* implicit */unsigned long long int) (!(var_4)));
    var_19 = ((/* implicit */int) var_3);
}
