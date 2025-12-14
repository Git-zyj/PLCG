/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52051
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            var_11 = arr_1 [i_0];
            arr_5 [i_0] [i_0] [i_0 + 3] = ((/* implicit */short) max((arr_2 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32756)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_8 [i_2] [i_2] = ((/* implicit */short) ((((3020933363U) << (((((/* implicit */int) (short)-32741)) + (32748))))) & ((~(arr_7 [i_0 - 1] [i_0 + 3])))));
            var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max(((short)-32756), ((short)32752)))) != (arr_0 [i_0 + 3]))))) > ((~(arr_7 [i_2] [i_0 + 3])))));
        }
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                var_13 = ((/* implicit */_Bool) ((signed char) ((arr_3 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196))))));
                arr_14 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_4]);
                arr_15 [3ULL] = arr_6 [i_0 + 2] [i_3];
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (long long int i_6 = 1; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_14 += ((/* implicit */unsigned long long int) arr_2 [i_0]);
                            arr_20 [i_0 + 1] [i_3] [i_0 + 1] [i_3] [3U] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1274033933U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83)))))) && (((/* implicit */_Bool) arr_17 [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_4 - 1]))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [9U] [9U] [i_3] [i_3] [(_Bool)1] [i_4] [i_4]))))) ^ (((/* implicit */int) var_2))));
            }
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                arr_23 [12ULL] [(short)10] [0U] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)4020)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32757))) : (0LL)))));
                arr_24 [0ULL] [5LL] [i_3] [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (arr_7 [i_0 + 1] [i_0 - 1])))) > (((arr_13 [i_0 - 1]) * (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0 - 1] [4ULL] [i_0 + 3] [i_0 + 1])))))));
            }
            var_16 = ((/* implicit */int) arr_13 [i_0 + 2]);
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_7 [i_0] [i_3]))));
        }
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 3]), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-29585)), (((((/* implicit */int) var_5)) + (((/* implicit */int) arr_21 [i_0 + 1] [(signed char)0] [i_0] [i_0]))))))))))));
    }
    for (signed char i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
    {
        var_19 ^= (((!(((/* implicit */_Bool) 1274033912U)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((short) (short)25338))));
        arr_27 [i_8] = ((/* implicit */signed char) arr_25 [i_8]);
    }
    for (signed char i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((unsigned char) (~(arr_26 [i_9])))))));
        var_21 = ((/* implicit */unsigned int) ((9223372036854775807LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4020)))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 1; i_10 < 19; i_10 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) (unsigned char)153);
        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2809712015108447787LL))));
    }
    var_24 = ((/* implicit */unsigned short) var_0);
    var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (!(var_2)))), (var_8)))) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) (signed char)-6)))) == ((~(((/* implicit */int) (short)32734))))))))));
    var_26 -= ((/* implicit */unsigned int) ((int) (+(((11919333179190187974ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) (short)30905))));
}
