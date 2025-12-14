/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228349
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
    var_16 = ((/* implicit */unsigned char) min((var_16), ((unsigned char)255)));
    var_17 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_18 &= ((/* implicit */unsigned char) (+(((0ULL) ^ (min((var_14), (((/* implicit */unsigned long long int) var_7))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [(unsigned char)3] [i_0]);
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551613ULL)) && (((/* implicit */_Bool) 23ULL)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_20 &= ((/* implicit */unsigned short) ((8ULL) % (min((min((18446744073709551615ULL), (18446744073709551577ULL))), (((/* implicit */unsigned long long int) ((_Bool) 9ULL)))))));
        var_21 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [5ULL] [i_1 + 2])) ? (-1) : (var_7))));
        /* LoopSeq 2 */
        for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
        {
            var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 1])) : (-38298354)))));
            /* LoopNest 3 */
            for (unsigned short i_3 = 3; i_3 < 16; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (int i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) * (min((18446744073709551593ULL), (((/* implicit */unsigned long long int) -38298348))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), ((-(var_0))))))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) min(((((-(22ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1878789262))))))))));
                            var_25 += ((/* implicit */signed char) (+((((+(2ULL))) >> (((min((((/* implicit */unsigned long long int) (unsigned short)65535)), (18446744073709551615ULL))) - (65489ULL)))))));
                            arr_19 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_1] [10U] [i_1 + 2])) : (((/* implicit */int) arr_3 [i_1] [i_2 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-51)))))))) ? (18446744073709551608ULL) : (0ULL));
                            var_26 = ((/* implicit */signed char) (unsigned short)1679);
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) (~(arr_17 [i_1] [i_1 + 2] [i_1 + 1])));
            arr_20 [i_1] [i_2] = ((/* implicit */_Bool) (short)(-32767 - 1));
            var_28 &= ((/* implicit */unsigned long long int) ((var_5) <= (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)30400))))) ? (((6ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32764))))) : (var_1)))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            arr_24 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_12);
            /* LoopNest 2 */
            for (signed char i_7 = 1; i_7 < 16; i_7 += 2) 
            {
                for (signed char i_8 = 3; i_8 < 17; i_8 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_9 = 2; i_9 < 15; i_9 += 4) 
                        {
                            var_29 += ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                            arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_12 [i_1 + 2] [i_1] [3ULL] [5] [i_1]);
                            var_30 = ((/* implicit */unsigned char) (~(((var_5) << (((var_10) - (3287236703U)))))));
                        }
                        for (int i_10 = 3; i_10 < 16; i_10 += 3) 
                        {
                            arr_36 [i_1] [i_6] [17] [i_6] [i_6] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_15))))));
                            var_31 *= ((/* implicit */int) ((4294967294U) > (0U)));
                            arr_37 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((1ULL) != (45ULL))))));
                        }
                        arr_38 [i_1] [i_6] [i_6] [1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1 + 2] [i_6 + 1] [i_7 + 2])) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1 + 1] [i_6 + 2] [i_7 - 1])))));
                    }
                } 
            } 
            arr_39 [(unsigned char)16] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) << (((arr_29 [i_6 - 1] [i_6 + 2] [i_6 + 2]) - (142303341)))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 1) 
        {
            var_32 = ((/* implicit */unsigned char) (unsigned short)30400);
            var_33 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
            var_34 = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)30404)) * (((/* implicit */int) (short)-32756))))));
        }
        arr_43 [(unsigned char)10] &= ((((/* implicit */_Bool) min((10ULL), (((/* implicit */unsigned long long int) arr_4 [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [12ULL] [i_1 - 1]), (arr_3 [(_Bool)0] [i_1 - 1]))))) : ((~(18446744073709551613ULL))));
    }
}
