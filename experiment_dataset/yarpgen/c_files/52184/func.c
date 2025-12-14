/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52184
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
    var_19 = ((/* implicit */long long int) var_1);
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((((((((/* implicit */int) var_12)) & (((/* implicit */int) var_16)))) << (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) && (((((/* implicit */int) var_14)) <= (((/* implicit */int) var_9))))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((long long int) (signed char)17)) & (((/* implicit */long long int) ((/* implicit */int) (short)5939))))))));
                var_22 = ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        arr_7 [i_2 - 1] [i_2] = ((/* implicit */unsigned char) ((max((((arr_6 [i_2]) << (((-2745665350414094738LL) + (2745665350414094742LL))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)163))))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 3; i_3 < 17; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                for (signed char i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    {
                        arr_14 [i_3] [1U] [i_5] = ((/* implicit */short) ((((/* implicit */long long int) (-(var_1)))) < ((-((-(arr_12 [i_5] [16LL] [i_3] [i_2 + 4])))))));
                        arr_15 [0ULL] [i_3] [i_4] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_9 [i_2 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_18)))))))) : (((arr_12 [i_2] [19] [i_4] [i_5]) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2 + 2])))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((arr_11 [i_2]) / (((/* implicit */int) (short)-4025)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_3 + 1])))))))) ? (((arr_13 [i_4] [7] [i_4] [i_4] [i_4] [i_4]) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */unsigned int) var_3)) : (arr_6 [i_2 + 1])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47340)))))) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) var_16)))))));
                        arr_16 [12LL] [7LL] [i_4] [7LL] = ((((/* implicit */_Bool) (+(arr_11 [i_2 + 1])))) ? (arr_5 [i_2 - 1] [i_3]) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (arr_10 [i_5] [i_4] [i_3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                        var_24 *= ((/* implicit */unsigned long long int) var_14);
                    }
                } 
            } 
        } 
    }
    var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) 10745276408345339113ULL)) ? (min((11342063016630399897ULL), (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) (signed char)7))))))) : (min((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned short) (unsigned char)255))))), (10911420880547384390ULL)))));
}
