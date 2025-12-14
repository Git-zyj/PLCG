/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43279
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_7))));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned char)253)))))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (var_6))) > (((/* implicit */unsigned long long int) 2137607637)))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((unsigned long long int) arr_1 [i_0] [i_0]));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)22276)) ? (((/* implicit */int) arr_2 [i_0])) : (arr_0 [i_0]))) % (((/* implicit */int) ((short) arr_1 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3369)) + (((/* implicit */int) arr_1 [i_0 + 2] [8ULL]))))) : (min((((/* implicit */unsigned int) ((8089808087448984227ULL) > (((/* implicit */unsigned long long int) arr_0 [i_0]))))), ((((_Bool)0) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
        arr_4 [i_0 - 2] = ((/* implicit */unsigned short) (_Bool)1);
        var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) ^ (((/* implicit */int) max((((/* implicit */short) arr_2 [i_0])), (var_8))))))) ? (min((arr_0 [i_0 - 2]), ((((_Bool)1) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_0] [i_0])))))) : (((/* implicit */int) (unsigned char)228))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */short) ((int) max((((/* implicit */unsigned long long int) min((-585932138), (((/* implicit */int) (short)32758))))), (max((((/* implicit */unsigned long long int) -585932141)), (arr_6 [i_1]))))));
            arr_9 [i_1] = ((/* implicit */short) ((long long int) 8156851141126769103LL));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) ((arr_11 [i_0 - 2] [i_2 + 1] [i_0 - 2]) >> (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) < (var_7))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned int) arr_0 [i_0]);
                var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) (unsigned char)6)) & (((/* implicit */int) ((short) arr_12 [i_0] [i_2])))))));
                var_19 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_11 [i_0] [i_0 - 1] [9]))) >= (((/* implicit */int) arr_14 [i_3]))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned char) ((arr_16 [i_0] [i_0 + 1] [i_4] [(signed char)5]) << (((((/* implicit */int) (unsigned char)247)) - (229)))));
                arr_18 [i_0 - 2] [i_0] [i_2] [7ULL] = ((/* implicit */unsigned short) ((int) arr_11 [i_0 + 2] [i_0 + 2] [i_0 - 1]));
            }
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46961))) + (11395012916857608925ULL))) : (((/* implicit */unsigned long long int) var_9)))))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_8 [i_0 - 1] [i_2] [i_0 - 1]))));
                arr_21 [i_2] = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)6));
                var_23 -= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)22375)))));
                var_24 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (-585932133))) + (2147483647))) << (((((((/* implicit */int) arr_14 [i_5])) + (4540))) - (27)))));
            }
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                arr_24 [i_0] [(unsigned char)5] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0 + 2] [i_0 - 1])) >> (((((/* implicit */int) (short)32760)) - (32760)))));
                arr_25 [i_0] [i_2 - 2] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53868))) : (4414595612746910842ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 + 1])))));
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [5ULL] [i_6] [5ULL])) || (((/* implicit */_Bool) arr_10 [i_0]))))) - (arr_0 [i_0 + 1]))))));
            }
        }
    }
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_5))));
        var_27 *= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_26 [i_7])) != (((/* implicit */int) var_4))))) - (((((/* implicit */int) arr_26 [i_7])) % (((/* implicit */int) (short)32767))))));
    }
}
