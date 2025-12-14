/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228650
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) (_Bool)1);
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_8)))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) arr_1 [i_0])))));
        var_14 = arr_1 [i_0];
        var_15 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(signed char)12])) * (((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) var_0))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (short)-23;
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (signed char)-49))));
    }
    for (short i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_16 = ((/* implicit */_Bool) ((short) arr_4 [i_2]));
            var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (((~(arr_4 [i_2]))) <= (((/* implicit */int) arr_7 [i_2])))))) != (arr_10 [i_2])));
            arr_12 [i_3] = ((/* implicit */short) ((_Bool) ((((((/* implicit */int) arr_9 [i_3] [i_3] [i_2])) ^ (((/* implicit */int) arr_8 [i_2])))) ^ (((((/* implicit */_Bool) (short)-5)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_0 [i_2] [i_2])))))));
            var_18 = ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_2]))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 1) 
        {
            var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4 - 3] [i_2])) ? (((/* implicit */int) ((short) (short)-1))) : (((/* implicit */int) (short)-10))));
            arr_16 [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_4 - 3]);
        }
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_20 += max((2U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_2])))))))));
            var_21 ^= ((/* implicit */short) arr_7 [i_2]);
            arr_19 [i_2] [i_2] = ((/* implicit */long long int) var_1);
            arr_20 [i_2] [8U] [i_5] = ((/* implicit */short) max((((/* implicit */long long int) ((short) (short)-1))), ((((~(var_9))) & (min((((/* implicit */long long int) arr_4 [(unsigned char)11])), (arr_11 [i_2] [(short)8] [i_5])))))));
        }
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_13 [i_2] [i_2]))));
        /* LoopNest 2 */
        for (long long int i_6 = 1; i_6 < 10; i_6 += 1) 
        {
            for (long long int i_7 = 2; i_7 < 12; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -874000999267497764LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (max((min((874000999267497764LL), (((/* implicit */long long int) (short)-27763)))), (((/* implicit */long long int) ((signed char) arr_3 [i_7])))))));
                    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((long long int) (short)0))) ? (-874000999267497764LL) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6 - 1] [(signed char)9]))))) - (min((min((-874000999267497764LL), (((/* implicit */long long int) arr_17 [i_2] [i_6 + 3] [i_6 + 3])))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)172)) <= (((/* implicit */int) var_0)))))))));
                    var_25 |= ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) min((arr_0 [i_2] [(signed char)0]), ((short)20)))))));
                }
            } 
        } 
        arr_27 [i_2] = ((/* implicit */unsigned short) -874000999267497764LL);
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_26 ^= ((/* implicit */short) (~(max(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_28 [i_2] [(unsigned short)0]))))))));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_29 [i_2] [i_8] [i_2]))) ? (8589934591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31)))))) || (min((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) -8478202194845642512LL)))), (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_13 [i_2] [i_2]))))))));
        }
        for (unsigned int i_9 = 2; i_9 < 12; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */long long int) (+((+(((/* implicit */int) arr_32 [(_Bool)1]))))))) <= (((((((/* implicit */_Bool) (short)0)) ? (-1LL) : (((/* implicit */long long int) arr_4 [i_2])))) % (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) var_5))));
                            var_30 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_12] [7LL] [i_9] [7LL])) * (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)57302)))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(0ULL)))))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned int) var_1);
            arr_39 [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) <= (((/* implicit */int) (signed char)-54)))))));
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) arr_35 [i_2] [4LL] [i_9] [i_2]))));
        }
    }
    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) (short)15516)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= ((~(var_2))))))));
}
