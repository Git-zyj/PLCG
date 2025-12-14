/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34064
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_16 += arr_5 [i_0 - 1] [i_0 - 1] [2];
            arr_6 [i_0 - 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) -910835259))))) == (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) < (var_1))))));
        }
        var_17 = ((((/* implicit */int) arr_3 [i_0 + 1])) + (((/* implicit */int) arr_3 [i_0 - 3])));
    }
    for (short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 3; i_3 < 19; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 1; i_4 < 19; i_4 += 1) 
            {
                var_18 = ((/* implicit */signed char) arr_10 [i_2]);
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 18; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)77))))))) : ((-(3228586790U)))))) ? (((/* implicit */unsigned long long int) ((var_4) ^ (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-44)))))))) : (((((/* implicit */_Bool) max((var_3), (((/* implicit */int) arr_18 [i_2] [16LL] [i_2] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((arr_15 [i_2] [i_2] [i_4] [i_4] [i_5 + 1] [i_6]) ? (var_5) : (((/* implicit */long long int) arr_16 [i_2] [i_2] [i_2] [i_2]))))) : (((((/* implicit */_Bool) 3366967821U)) ? (arr_10 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_3] [i_3])))))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_7 [i_2]), (((/* implicit */int) (unsigned char)26))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_13 [i_2] [i_2] [2] [i_5]) : (arr_7 [i_6])))) : (var_7)))) % (((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */unsigned long long int) -2067656948)) : (((((/* implicit */_Bool) 2147483647)) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))))))));
                        }
                    } 
                } 
            }
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)65))))) : (arr_16 [i_3] [(_Bool)1] [(_Bool)1] [(_Bool)1])));
            var_22 += ((/* implicit */short) arr_17 [i_2] [(short)12]);
        }
        for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            arr_21 [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((var_1) > (((/* implicit */int) (signed char)-108)))) ? (((/* implicit */int) arr_17 [i_2] [(unsigned char)8])) : (arr_7 [i_2])))), (((((/* implicit */_Bool) arr_17 [i_2] [14U])) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) 1869995030)) : (2ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (arr_8 [i_2]))))))));
            arr_22 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_7] [i_7] [(signed char)14])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_4)))) ? (((((/* implicit */_Bool) 491149162)) ? (((/* implicit */int) (short)1717)) : (((/* implicit */int) (unsigned short)35618)))) : (((/* implicit */int) arr_9 [i_7] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_2] [(unsigned char)20])) : (((/* implicit */int) arr_20 [i_2] [i_2] [i_7]))))) + (((((/* implicit */_Bool) 5354204353196023530ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (927999472U)))))));
        }
        var_23 = ((/* implicit */short) arr_8 [i_2]);
        var_24 ^= ((/* implicit */int) ((arr_12 [i_2] [i_2] [i_2]) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (short)27538)))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 1; i_8 < 9; i_8 += 4) 
    {
        var_25 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_8 - 1])) * (((/* implicit */int) arr_9 [i_8 + 1] [i_8 - 1]))));
        /* LoopSeq 2 */
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            arr_28 [i_8] = ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) -250174590)) ? (1229276517458732722ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) var_6)));
            arr_29 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_9] [i_8 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [10ULL] [i_8 - 1]))) : (var_5)));
        }
        for (int i_10 = 2; i_10 < 7; i_10 += 4) 
        {
            var_26 = ((int) (+(((/* implicit */int) var_14))));
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_8] [i_8]))))) ? ((+(arr_12 [i_8] [i_8] [i_8]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)31312)) ? (((/* implicit */int) (short)-30277)) : (((/* implicit */int) var_13)))))));
        }
    }
    var_28 = var_8;
}
