/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223067
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_20 ^= ((/* implicit */signed char) 7653580057584529002LL);
        var_21 = ((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))))) & (134217727LL));
        var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)14753))))), (arr_2 [i_0] [i_0])));
        var_23 |= ((/* implicit */unsigned long long int) (signed char)6);
        var_24 = ((/* implicit */unsigned short) ((unsigned int) arr_2 [i_0] [i_0]));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_25 &= ((/* implicit */unsigned int) arr_3 [i_1]);
            arr_9 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_2] [i_1])), ((-(arr_7 [i_1] [i_2])))))) ? (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)84)) <= (((/* implicit */int) (unsigned char)84)))))) : (((-3325655239344643261LL) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_1]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((max((var_6), (((/* implicit */int) var_13)))) > (((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) (unsigned short)0))))))))));
            arr_10 [i_1] [i_1] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)18)) * (((/* implicit */int) (signed char)0)))) < (((((/* implicit */_Bool) -7793101459574471317LL)) ? (((/* implicit */int) var_12)) : (var_15))))))) >= (var_1)));
        }
        arr_11 [i_1] = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)84)) * (((/* implicit */int) (unsigned short)65535)))))));
        arr_12 [(short)6] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)39027)) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [(signed char)2])) : (((/* implicit */int) var_8))))))) & (var_1)));
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
            {
                var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-22057)) ? (((/* implicit */unsigned long long int) arr_17 [i_3] [i_4] [i_4])) : (((arr_7 [i_3] [i_5]) >> (((arr_19 [i_5] [i_4] [i_4] [i_3]) + (6837827070818020600LL)))))));
                arr_21 [i_5] [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) 1677490679496984922LL)) : (var_17))))));
                arr_22 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_5]))) : (arr_16 [i_3] [i_3])));
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)5570))))) + ((-(arr_19 [i_3] [i_4] [i_5] [i_3]))))))));
            }
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
            {
                arr_25 [(signed char)15] [(signed char)15] [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) arr_17 [i_6] [i_4] [i_3]));
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) 16612100006062164618ULL))));
            }
            arr_26 [i_3] [i_3] [i_3] = arr_14 [i_3] [i_4];
            arr_27 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_16 [i_3] [i_3])) != (((((/* implicit */_Bool) arr_4 [i_4] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_4] [i_3]))) : (arr_14 [i_4] [i_3])))));
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_4] [i_3] [i_3] [i_3])) ? (((unsigned int) (signed char)94)) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22056)))));
        }
        var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) 8258467954024671640LL)))) ? (((unsigned int) 7793101459574471316LL)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65331))))))))) > (min((((long long int) arr_13 [i_3])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((/* implicit */int) arr_4 [i_3] [2LL])) : (((/* implicit */int) (unsigned char)84)))))))));
        arr_28 [i_3] [i_3] = ((/* implicit */signed char) arr_24 [i_3]);
        arr_29 [i_3] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7793101459574471317LL)) ? (8164905368614395645LL) : (((/* implicit */long long int) arr_15 [i_3] [i_3]))))), (((0ULL) >> (((((/* implicit */int) (unsigned short)33559)) - (33557))))))) <= (((/* implicit */unsigned long long int) min((arr_15 [i_3] [i_3]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3]))))))))));
        var_31 = ((/* implicit */unsigned long long int) arr_6 [i_3]);
    }
    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (unsigned short)24))));
    var_33 &= var_11;
}
