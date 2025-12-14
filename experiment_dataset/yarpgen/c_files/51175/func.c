/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51175
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45669)))))) == (((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47)))))))) != (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (signed char)92))) == ((~(((/* implicit */int) arr_2 [i_0 + 1])))))))));
        var_12 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) (unsigned short)11249)), (max((var_5), (((/* implicit */unsigned long long int) 4294967293U))))))));
        var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) 7555323988898323826LL))))), (((((/* implicit */_Bool) 4294967295U)) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) min((max((arr_1 [i_0]), (arr_1 [i_0]))), (arr_1 [i_0])));
        var_14 *= var_0;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 3; i_3 < 7; i_3 += 1) 
            {
                for (int i_4 = 3; i_4 < 10; i_4 += 2) 
                {
                    {
                        arr_15 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_1] [i_3] [i_3] [i_1]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_2] [i_2]))) & (2U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4])))));
                        var_15 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_4] [i_1] [i_1] [i_3]))));
                        arr_16 [8LL] [i_3] [i_3] [i_1] = ((/* implicit */long long int) ((unsigned int) arr_5 [i_4 - 1]));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_5 = 1; i_5 < 8; i_5 += 1) 
            {
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_5 + 2] [i_5 + 1] [i_2])))))));
                var_17 *= ((/* implicit */unsigned long long int) (signed char)-113);
            }
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                arr_22 [i_6] = ((/* implicit */int) ((-4399897830784961739LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-112)))));
                var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((-4399897830784961739LL) + (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_7 = 2; i_7 < 10; i_7 += 2) 
            {
                arr_26 [i_7] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)2032))));
                arr_27 [i_2] = ((/* implicit */long long int) arr_12 [i_7] [i_7 - 2] [i_7] [i_7] [i_2]);
            }
        }
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((long long int) ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114)))))))));
            /* LoopSeq 1 */
            for (int i_9 = 2; i_9 < 10; i_9 += 4) 
            {
                var_20 *= ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) var_3)))));
                var_21 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [i_9] [i_8] [i_1])) : (((/* implicit */int) arr_11 [i_8] [i_8] [i_8]))))));
            }
            arr_32 [i_8] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 4399897830784961738LL)) && (((/* implicit */_Bool) arr_25 [i_8] [i_1]))))) + (((/* implicit */int) ((unsigned short) (unsigned short)61370)))));
            arr_33 [i_8] [i_8] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_0 [i_8])))));
        }
        arr_34 [i_1] = ((/* implicit */short) (unsigned short)10760);
    }
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((max(((~(-390411956))), (((/* implicit */int) var_6)))) % (((/* implicit */int) var_1)))))));
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((((/* implicit */unsigned long long int) 3000155196U)) % (4ULL))) != (4ULL)))))))));
    var_24 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((long long int) var_6))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)62156)), (min((18446744073709551613ULL), (((/* implicit */unsigned long long int) 1200064030U)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 3378054159U)))) ? (((int) (unsigned short)61381)) : (var_4))))));
    var_25 = ((/* implicit */unsigned int) (+(((2147483647) / (((/* implicit */int) ((short) (unsigned char)255)))))));
}
