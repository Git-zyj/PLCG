/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214582
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
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) 425667405U))));
        arr_2 [(unsigned short)2] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(_Bool)1] [i_0])) + (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) var_14))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((unsigned long long int) arr_1 [2] [i_1]));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_12 [i_1] [(signed char)12] |= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_13)) + (arr_3 [i_2]))));
            var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1494)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)84))));
            arr_13 [(unsigned short)10] [i_2] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_3 [i_1]) : (((/* implicit */int) (unsigned short)39981))));
            arr_14 [i_2] = ((/* implicit */int) var_3);
        }
        for (short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_3])) ? (1789340773074469987ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11967)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_15 [i_1] [i_3])) : (((/* implicit */int) var_1))))) : (var_0)))) || (((/* implicit */_Bool) var_3))));
            arr_18 [i_1] [i_3] = ((/* implicit */unsigned short) min((arr_6 [i_3]), (((/* implicit */unsigned char) ((3U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))))))));
            arr_19 [i_1] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) (~((-(((/* implicit */int) (signed char)-95)))))));
            arr_20 [i_1] = ((/* implicit */int) 4294967295U);
        }
    }
    /* LoopSeq 2 */
    for (short i_4 = 1; i_4 < 9; i_4 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((short) var_4));
        /* LoopNest 2 */
        for (unsigned short i_5 = 4; i_5 < 6; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                {
                    arr_30 [i_4] [i_5] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24576)) ? (((/* implicit */unsigned long long int) 0)) : (var_11)))) ? (((((/* implicit */_Bool) (unsigned short)65531)) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) 0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24576)))));
                    arr_31 [i_4] = ((/* implicit */unsigned int) max(((short)21970), (((/* implicit */short) (!((!(((/* implicit */_Bool) arr_11 [i_5])))))))));
                    arr_32 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14026944089443857923ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)247))))) : ((+(var_5)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_5 + 4])) ? (arr_5 [i_5 + 2]) : (arr_5 [i_5 + 3])))) : (4294967295U)));
                }
            } 
        } 
    }
    for (short i_7 = 1; i_7 < 9; i_7 += 3) /* same iter space */
    {
        arr_37 [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_7 + 1])) ? (((/* implicit */int) arr_25 [i_7 + 1])) : (((/* implicit */int) arr_25 [i_7 - 1]))))), (6254826446686804675ULL)));
        /* LoopNest 2 */
        for (unsigned char i_8 = 2; i_8 < 8; i_8 += 4) 
        {
            for (short i_9 = 1; i_9 < 6; i_9 += 3) 
            {
                {
                    arr_43 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) min((min((((/* implicit */unsigned short) var_3)), ((unsigned short)0))), (((/* implicit */unsigned short) (((~(((/* implicit */int) var_3)))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8))))))))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_8]))) + (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_8])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_11 [i_8]))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) : (var_9))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_11 [(_Bool)1]))));
            var_23 = 268435455;
            var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) | (max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14594)) || (((/* implicit */_Bool) var_13)))))))));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_6 [i_7 - 1])))), (((/* implicit */int) ((17255030639522826018ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))));
        }
        /* vectorizable */
        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
        {
            arr_50 [(unsigned short)0] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_49 [(_Bool)1] [i_7] [i_11]))))) & (((((/* implicit */int) (unsigned short)11)) - (var_15)))));
            arr_51 [i_7] [i_7] = ((/* implicit */signed char) ((arr_10 [i_7] [i_7]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (0ULL)))))));
            arr_52 [i_11] [i_7] [i_7] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_17 [i_7] [i_11])) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (6ULL)))));
        }
        arr_53 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_49 [i_7] [i_7] [i_7])), (min((var_0), (((/* implicit */unsigned int) (_Bool)0))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (max((var_14), (((/* implicit */unsigned long long int) var_8)))))) : (arr_40 [i_7] [i_7])));
    }
    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (~(var_9))))));
    /* LoopSeq 1 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_27 = ((/* implicit */short) arr_1 [i_12] [i_12]);
        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((+(-750659337))))))));
        var_29 = ((/* implicit */int) var_8);
    }
}
