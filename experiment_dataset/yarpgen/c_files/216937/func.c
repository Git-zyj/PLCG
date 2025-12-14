/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216937
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
    var_11 = ((/* implicit */signed char) 100847688671102422ULL);
    var_12 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) 2097151)) : (4170920557U)))) ? (((var_3) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))) : ((~(((/* implicit */int) var_1))))))), (max((min((((/* implicit */unsigned int) var_9)), (var_8))), (min((((/* implicit */unsigned int) 2147483637)), (124046739U))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_13 = arr_1 [i_0];
                        arr_10 [16] [i_1] [i_2] [8U] &= ((/* implicit */unsigned char) var_9);
                        var_14 = ((/* implicit */int) arr_9 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [0]);
                        arr_11 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)96))));
                        var_15 = min(((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0])))) : (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_6 [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) -2097152))))) : ((+(((/* implicit */int) arr_8 [13] [23] [13] [13] [i_3]))))))));
                    }
                } 
            } 
        } 
        arr_12 [(unsigned char)14] &= ((/* implicit */int) ((min((min((arr_1 [(unsigned short)8]), (((/* implicit */unsigned int) arr_3 [10])))), (arr_1 [12ULL]))) / (max((max((4170920557U), (((/* implicit */unsigned int) var_1)))), ((~(124046738U)))))));
    }
    for (signed char i_4 = 3; i_4 < 23; i_4 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(min((915443467), (-2097163)))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 - 3] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (8214469706801609313ULL)))) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) arr_5 [i_4] [i_4])) : (2147483647))))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_6)) : (arr_0 [i_4 - 2]))) >= (((/* implicit */int) arr_7 [i_4] [i_4] [i_4]))))) == (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (short)32752)))) < (((/* implicit */int) var_6)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    {
                        arr_25 [i_4] = ((/* implicit */long long int) min(((+((+(12354878749779058174ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((109485683U) >> (((arr_14 [i_6]) - (303386043)))))) ^ (min((8785036020278194325LL), (((/* implicit */long long int) 915443467)))))))));
                        /* LoopSeq 3 */
                        for (int i_8 = 2; i_8 < 21; i_8 += 4) /* same iter space */
                        {
                            arr_29 [i_4] [i_4] [i_4] = (!(((/* implicit */_Bool) ((arr_1 [i_4]) - (arr_1 [i_4])))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_7))));
                        }
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 21; i_9 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) ((long long int) arr_20 [i_4 - 3]));
                            var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)226))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_7] [(unsigned char)2]) == (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8)))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_10] [i_10])), (arr_2 [i_7] [i_7])))), ((-(arr_30 [i_10] [i_7] [i_10] [i_7] [22ULL] [i_7] [i_4])))))))));
                            arr_35 [i_4] [i_4] [i_6] [(_Bool)1] [i_10] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)24)) ? (arr_13 [i_4] [i_6]) : (((/* implicit */int) (unsigned char)153)))), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4])) || ((_Bool)0))))))));
                            var_22 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((min((1045188536), (((/* implicit */int) (signed char)74)))) != (((/* implicit */int) (short)2048)))))) == (-8322504981683485318LL)));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) arr_23 [1U] [1U] [1U] [i_5])), (var_6)))), (arr_14 [i_4 - 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_4] [4] [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_6 - 2])) && (((/* implicit */_Bool) (unsigned char)1))))) : ((+(arr_32 [i_10] [10U] [10U] [i_7] [i_4] [i_10])))));
                        }
                        var_24 = ((/* implicit */int) ((((arr_17 [i_4 - 3]) >> (((((/* implicit */int) arr_7 [i_5] [i_6 + 2] [i_7])) - (48))))) != (((/* implicit */long long int) max((217200414), (((/* implicit */int) (_Bool)0)))))));
                        var_25 += (+(((((/* implicit */_Bool) arr_24 [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_6 - 3])) ? (arr_30 [i_6 - 1] [i_5] [i_6] [i_7] [i_4] [i_7] [i_4]) : (arr_30 [i_6 + 1] [i_5] [i_6 - 1] [i_7] [i_6 - 1] [i_7] [i_6]))));
                        var_26 = (~(((arr_31 [i_4] [i_4] [i_4] [i_4 - 2]) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))));
                    }
                } 
            } 
        } 
    }
}
