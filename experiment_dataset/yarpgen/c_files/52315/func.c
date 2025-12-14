/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52315
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
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                var_17 = ((/* implicit */signed char) (+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)15))))));
                var_18 = ((/* implicit */int) max((var_18), ((((~(var_10))) + (((/* implicit */int) ((short) arr_2 [13U])))))));
                arr_7 [(unsigned char)2] = ((/* implicit */signed char) arr_3 [i_0 + 1]);
                arr_8 [3LL] [6LL] = ((/* implicit */signed char) (+(arr_3 [i_0 - 1])));
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    arr_11 [3ULL] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -891534759437064560LL))));
                    arr_12 [i_3] [(unsigned char)13] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-31))))) : (((/* implicit */int) ((signed char) var_2)))));
                    var_19 *= ((/* implicit */unsigned short) var_5);
                    arr_13 [7ULL] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-43))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [(_Bool)1])) ? (((/* implicit */int) arr_6 [i_0 - 2] [13U] [i_0 - 2] [i_4])) : (((/* implicit */int) arr_6 [7LL] [1ULL] [(signed char)6] [i_4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)36))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [6U] [i_0])))))));
                    var_21 -= ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_4] [(unsigned char)12] [i_4]))))) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 2] [i_2])))));
                }
            }
            arr_16 [9ULL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (var_7)))) ? (((/* implicit */int) arr_6 [14ULL] [i_0 + 3] [i_0] [i_0 - 2])) : (((/* implicit */int) var_5))));
            arr_17 [8] [i_1] [i_1] &= ((/* implicit */short) arr_10 [i_0 + 1] [(signed char)9] [2LL] [i_0 - 1]);
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    {
                        var_22 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [(signed char)2])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                        arr_23 [i_5] [5LL] [(unsigned short)0] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0 - 1]))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [8U] [i_1] [(unsigned char)8] [i_6]))))) ? (((/* implicit */int) ((unsigned char) var_3))) : (((((/* implicit */_Bool) arr_3 [(_Bool)0])) ? (var_10) : (((/* implicit */int) var_15))))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0 - 1] [i_1] [6ULL] [i_6])))))));
                    }
                } 
            } 
        }
        arr_24 [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_3 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-29)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) / (var_9)))))) ? (((unsigned int) (-(var_0)))) : (((/* implicit */unsigned int) (~((-(((/* implicit */int) (unsigned short)24489)))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) arr_2 [(_Bool)1]);
        arr_28 [14LL] [i_7] &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_12))))))) <= (((/* implicit */int) (_Bool)1))));
        var_26 = ((/* implicit */unsigned long long int) ((long long int) arr_27 [i_7]));
    }
    for (signed char i_8 = 3; i_8 < 16; i_8 += 2) 
    {
        var_27 += ((/* implicit */long long int) (!(((((/* implicit */int) var_5)) > (((/* implicit */int) var_8))))));
        arr_33 [i_8] &= ((/* implicit */unsigned char) var_9);
        var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((signed char) var_12))), ((-(((/* implicit */int) (signed char)-31)))))))));
        arr_34 [i_8] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_30 [(signed char)8]))))))), (((((/* implicit */_Bool) ((unsigned int) (unsigned char)112))) ? ((~(((/* implicit */int) var_16)))) : ((~(((/* implicit */int) (_Bool)1))))))));
        arr_35 [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)57008)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) min((arr_30 [i_8 - 3]), (((/* implicit */unsigned long long int) var_1))))))) : (max((3170241225206005436LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4)))))))));
    }
    /* LoopSeq 1 */
    for (short i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            arr_44 [i_10] [i_9] [(unsigned short)12] &= max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-112))))), (((arr_43 [i_10] [i_9]) ? (arr_30 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
            var_29 = ((((/* implicit */_Bool) -3784923558440508490LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1082252293)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (var_3)))) : ((-(arr_30 [2ULL])))))));
            var_30 = ((/* implicit */unsigned long long int) -891534759437064560LL);
            var_31 *= (-(min((((/* implicit */unsigned int) (unsigned short)57008)), (511158794U))));
            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (-(((/* implicit */int) var_16)))))));
        }
        arr_45 [5LL] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) - (((((/* implicit */_Bool) -891534759437064560LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 2147483644)) : (-3170241225206005434LL)))))));
    }
    var_33 = ((/* implicit */int) (((!(((/* implicit */_Bool) (short)-21)))) ? ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28838))) ^ (var_12))))) : (((/* implicit */unsigned long long int) var_10))));
}
