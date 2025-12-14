/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246077
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0] [i_0];
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            arr_7 [(_Bool)1] [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [(signed char)10]))))) ? ((+(((/* implicit */int) arr_6 [(short)10])))) : (((((/* implicit */int) arr_6 [8LL])) & (((/* implicit */int) arr_6 [(unsigned short)14]))))));
            arr_8 [(signed char)6] [(signed char)6] [(short)8] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)4])) ? (((/* implicit */int) arr_3 [(signed char)14])) : (((/* implicit */int) arr_3 [(signed char)4]))))) ? ((~(var_15))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [(short)14])))))));
            arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_5)))))))));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) -9223372036854775791LL);
        }
        for (short i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            arr_13 [i_2] [i_0] [i_2] &= ((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_0] [i_2])), ((+(((/* implicit */int) var_0))))));
            arr_14 [i_2] [i_2] &= ((/* implicit */short) min((((((/* implicit */int) min((((/* implicit */short) var_3)), (var_2)))) + ((-(((/* implicit */int) (short)32750)))))), ((-(((/* implicit */int) min((((/* implicit */short) var_4)), ((short)-128))))))));
            var_17 &= ((/* implicit */unsigned int) arr_5 [i_0]);
        }
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            arr_17 [i_0] [i_0] [(short)0] &= ((/* implicit */unsigned char) var_14);
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) + (min((var_1), (((/* implicit */long long int) arr_6 [i_0])))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [(short)5]))))), (var_6)))));
        }
        for (short i_4 = 1; i_4 < 14; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    for (short i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */short) arr_19 [i_0] [i_4] [i_5]);
                            var_19 &= ((/* implicit */signed char) (short)15391);
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(3946599800U)))) / (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned int) var_15))))) : (((288230376151711743LL) % (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 3; i_9 < 15; i_9 += 2) 
                {
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        {
                            arr_40 [i_0] [i_0] = ((/* implicit */unsigned short) ((max((arr_20 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */int) (short)979)) / (((/* implicit */int) (_Bool)1))))))) & (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4 - 1])) % (((/* implicit */int) var_16))))) ? (((/* implicit */long long int) max((var_12), (((/* implicit */unsigned int) var_16))))) : ((+(var_8)))))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)0))))) ? ((+(((/* implicit */int) (short)-32759)))) : (((/* implicit */int) max((arr_1 [i_9]), (arr_1 [i_10]))))));
                            var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (var_10)))))))));
                            var_23 = ((/* implicit */short) var_7);
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
        {
            for (signed char i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                for (short i_14 = 1; i_14 < 16; i_14 += 4) 
                {
                    {
                        arr_51 [12U] [i_11] [(unsigned char)10] [i_13] [i_14 - 1] [i_14 + 1] = ((/* implicit */unsigned char) arr_49 [i_11] [i_12] [i_12] [(signed char)9]);
                        arr_52 [i_11] [(signed char)12] [i_11] [i_11] = ((/* implicit */long long int) 825138515U);
                    }
                } 
            } 
        } 
        arr_53 [i_11] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_39 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))));
    }
    for (long long int i_15 = 0; i_15 < 17; i_15 += 1) /* same iter space */
    {
        arr_56 [i_15] = ((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) ((short) 3946599820U)))))), (var_1)));
        var_24 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_21 [i_15] [(short)16] [i_15]))))));
    }
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) 4249168189U))));
}
