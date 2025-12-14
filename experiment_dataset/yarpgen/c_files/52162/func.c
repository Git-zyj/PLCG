/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52162
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
    var_18 = ((/* implicit */int) var_1);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [13U] [i_0]))), (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (((/* implicit */int) (unsigned short)192)) : (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_1);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */short) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_7)) : (arr_1 [i_0])))) ? (((var_5) ^ (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) arr_1 [i_0]))))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)68))))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) (+(872906065U)))) : ((+(var_11))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((signed char) min((var_2), (2465937255U)));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            arr_10 [i_1] [i_2] [i_1] = ((/* implicit */short) (-(((long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_6 [i_2])))))));
            var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)5))))) : (((2305843009213691904LL) / (((/* implicit */long long int) ((/* implicit */int) (short)2835)))))))));
            var_22 = (((+(var_1))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))));
            var_23 = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (short)-2836))))), ((~(var_11)))));
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 12; i_3 += 4) 
            {
                for (unsigned short i_4 = 2; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_24 = ((/* implicit */short) arr_15 [1U] [i_2] [1U] [i_4 - 1]);
                        arr_17 [i_1] [i_1] = ((((((/* implicit */_Bool) min(((unsigned short)38883), ((unsigned short)58332)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_14)), (var_15)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6254))) : (arr_16 [i_1] [i_1] [i_2] [i_1]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_8 [i_3 - 3] [i_1] [i_1]), (arr_8 [i_3 - 2] [i_1] [i_3]))))));
                        var_25 = ((/* implicit */_Bool) max((var_13), ((-(((((/* implicit */int) var_8)) ^ (arr_13 [i_4] [i_4] [i_1] [i_4])))))));
                    }
                } 
            } 
        }
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            arr_20 [i_1] [5ULL] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_16 [i_1] [i_1] [i_1] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) <= (var_15))))))))));
            arr_21 [i_1] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
        }
    }
    for (unsigned int i_6 = 2; i_6 < 22; i_6 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) max(((~(arr_24 [i_6 - 2]))), (((/* implicit */long long int) (unsigned char)16))));
        arr_25 [i_6] = ((/* implicit */_Bool) (+(((((arr_22 [i_6]) && (((/* implicit */_Bool) -2305843009213691905LL)))) ? (9223372036854775801LL) : (((/* implicit */long long int) arr_23 [i_6 - 2]))))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 2; i_7 < 22; i_7 += 2) /* same iter space */
    {
        var_27 = ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4749129814025077094LL))))) : (((((/* implicit */_Bool) -5756310235097516869LL)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned char)82)))));
        arr_30 [i_7 - 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7 - 2] [i_7 - 2]))) ^ ((~(var_11)))));
        arr_31 [i_7] = ((/* implicit */unsigned short) arr_22 [i_7 - 1]);
    }
    var_28 = ((/* implicit */unsigned long long int) ((var_2) & (max((((/* implicit */unsigned int) (unsigned char)0)), (4064781430U)))));
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        {
                            arr_42 [i_8] [i_9] [i_9] [i_8] [i_8] = ((/* implicit */unsigned int) var_16);
                            var_29 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_35 [i_8] [i_10] [i_11])) ? (var_5) : (((/* implicit */long long int) arr_35 [i_8] [i_8] [i_8])))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned long long int) arr_36 [i_9] [i_11])) * (((/* implicit */unsigned long long int) arr_24 [i_8]))))) ? (min((var_17), (((/* implicit */unsigned long long int) ((signed char) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_34 [15U]), (arr_34 [i_8])))))));
                            var_31 = ((((/* implicit */_Bool) max((((long long int) var_2)), (((/* implicit */long long int) ((signed char) var_10)))))) ? (max((6449437184425837202ULL), (((/* implicit */unsigned long long int) (short)-6505)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (var_8))))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_0))))));
                arr_43 [i_8] = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) var_16))))));
                var_33 = ((((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)172))) <= (-5756310235097516847LL))))) == (max((var_13), (min((((/* implicit */int) var_0)), (arr_1 [i_8]))))));
            }
        } 
    } 
}
