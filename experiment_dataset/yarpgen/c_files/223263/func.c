/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223263
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) 1406596465)) ? (((/* implicit */long long int) ((2083673828) ^ (arr_0 [i_0 - 1] [i_0 - 1])))) : (var_2)));
                arr_4 [i_0] [(unsigned short)11] = ((/* implicit */short) ((int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (9774572819320116908ULL))) == (((/* implicit */unsigned long long int) arr_3 [i_1 - 1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_1);
    /* LoopSeq 4 */
    for (int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_6 [i_2] [i_2]) : (((/* implicit */long long int) -2083673834))))) || (((/* implicit */_Bool) 9774572819320116883ULL)))) ? (9774572819320116908ULL) : (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_8))))))))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 3; i_3 < 22; i_3 += 3) 
        {
            for (signed char i_4 = 3; i_4 < 23; i_4 += 4) 
            {
                {
                    var_21 *= ((/* implicit */long long int) (_Bool)1);
                    var_22 = ((/* implicit */int) 9774572819320116918ULL);
                }
            } 
        } 
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_23 = ((/* implicit */int) min((((13332082516472812868ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8672171254389434698ULL)) || (((/* implicit */_Bool) 1586677503)))))))), (((/* implicit */unsigned long long int) var_17))));
        var_24 = min((1586677503), (arr_0 [i_5 - 1] [i_5 - 1]));
        var_25 = ((/* implicit */_Bool) (-(0)));
    }
    for (int i_6 = 3; i_6 < 12; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (short i_7 = 3; i_7 < 11; i_7 += 4) 
        {
            for (unsigned short i_8 = 1; i_8 < 11; i_8 += 4) 
            {
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) -1586677504))) ? (((1897515594) << (((((/* implicit */int) arr_11 [i_6 - 3] [i_6])) - (30424))))) : ((+(((/* implicit */int) arr_11 [i_6 - 2] [i_6]))))));
                    var_27 = ((min((max((-2083673829), (((/* implicit */int) (signed char)28)))), (((((/* implicit */int) var_11)) / (arr_0 [i_7 - 2] [i_8 - 1]))))) + (80159290));
                }
            } 
        } 
        var_28 *= ((/* implicit */signed char) min((((/* implicit */long long int) 511)), (-6483878472826952193LL)));
    }
    for (signed char i_9 = 4; i_9 < 16; i_9 += 4) 
    {
        var_29 = ((/* implicit */long long int) ((signed char) min((arr_10 [i_9] [i_9 - 3] [i_9 - 2] [i_9 - 1]), (((/* implicit */unsigned long long int) arr_5 [i_9])))));
        var_30 = ((((/* implicit */_Bool) (+(((/* implicit */int) (!((_Bool)1))))))) || (((/* implicit */_Bool) (~(arr_7 [i_9 - 3])))));
        var_31 = var_0;
    }
}
