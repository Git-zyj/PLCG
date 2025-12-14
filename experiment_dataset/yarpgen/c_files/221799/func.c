/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221799
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_15 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-79))))) ? ((-(((/* implicit */int) var_4)))) : ((-(2147483647))))) % ((~(((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) (-(arr_0 [i_0])))) * (((((/* implicit */_Bool) 0ULL)) ? (-2195564114635076400LL) : (((/* implicit */long long int) -1))))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-117))))) ? (-2195564114635076400LL) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535)))))))) ? (((/* implicit */unsigned long long int) (-((+(arr_0 [i_1])))))) : ((~(21ULL))))))));
            var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) ((1148112136U) == (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
            arr_5 [18] [i_1] = ((/* implicit */unsigned long long int) max((var_5), (min((((/* implicit */unsigned int) 1023)), ((+(3093995604U)))))));
        }
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_9 [(signed char)9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(min((2516749026689274371LL), (((/* implicit */long long int) (signed char)-71))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (3093995604U) : (((/* implicit */unsigned int) -1169073420))))) ? (((/* implicit */unsigned long long int) 3093995604U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48981))) + (var_14)))))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                var_19 -= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) arr_10 [i_3])) == (((/* implicit */int) arr_8 [i_3] [i_2] [i_0]))))), (((((/* implicit */_Bool) -1203290310434401651LL)) ? ((+(((/* implicit */int) arr_6 [i_0] [i_2] [i_3])))) : ((~(((/* implicit */int) (signed char)-91))))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 2; i_4 < 17; i_4 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) 2147483634);
                    var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) ((long long int) 2147483647))) ? (((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)114))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (-1))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_4 + 2] [i_4 - 1])) == (-2147483636))))));
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 16; i_5 += 3) 
            {
                for (long long int i_6 = 1; i_6 < 16; i_6 += 2) 
                {
                    {
                        arr_19 [i_0] [i_0] [i_0] [15LL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_16 [i_6 + 3] [i_5 - 2]) % (var_6)))) ? (((((/* implicit */_Bool) -271975830)) ? (((/* implicit */int) arr_11 [10] [i_6 + 3])) : (arr_16 [i_6 - 1] [i_5 + 3]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_6 + 2] [i_5 + 1])) || (((/* implicit */_Bool) var_9)))))));
                        arr_20 [i_0] [(unsigned short)6] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_5 - 1] [i_5 + 2] [i_5 + 3]))) ? (((/* implicit */unsigned long long int) (~(min((arr_16 [(unsigned short)11] [i_2]), (((/* implicit */int) arr_12 [(short)12]))))))) : (((((/* implicit */_Bool) min((2195564114635076399LL), (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_5] [(signed char)5] [i_5 - 1] [6LL]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))) % (18446744073709551612ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10))))))));
                    }
                } 
            } 
        }
        for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            arr_23 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) arr_17 [i_7] [i_7] [i_0] [i_0] [i_7]))))));
            var_22 |= (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0]))))));
            arr_24 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_7] [i_0])) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) arr_2 [i_0] [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((var_8) ^ (((/* implicit */int) (short)-26935))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_7] [i_7] [i_7] [i_0] [i_7]))) * (((var_0) % (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
        }
    }
    for (signed char i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] [(unsigned short)6] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8]))) % (arr_0 [i_8])))) ? (((unsigned int) 16744448)) : (max((134217727U), (((/* implicit */unsigned int) (unsigned char)71))))))));
        /* LoopNest 2 */
        for (long long int i_9 = 1; i_9 < 18; i_9 += 2) 
        {
            for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                {
                    var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(arr_4 [i_8] [i_8])))), (max((12433795105209288173ULL), (((/* implicit */unsigned long long int) arr_16 [i_9 - 1] [i_9 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 17; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 3; i_12 < 18; i_12 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */unsigned int) var_8)) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)31744)) != (var_6))))) + (((((/* implicit */_Bool) arr_13 [i_11] [i_10])) ? (var_5) : (var_5)))))));
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26935))) == (18446744073709551605ULL)))) % ((~(((((/* implicit */int) (short)24132)) * (((/* implicit */int) (_Bool)0))))))));
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_8] [i_9 + 1] [i_11 - 3] [i_12 - 1] [i_9 + 1] [14LL])) ? (arr_35 [i_8] [i_9 - 1] [i_11 - 1] [i_12 - 1] [i_12] [4LL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105)))))) ? ((+(arr_30 [i_12 - 3] [(short)18] [i_9 - 1]))) : (((long long int) arr_6 [i_9 + 1] [i_11 + 1] [i_12 - 3]))));
                                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-2195564114635076400LL) / (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned short) (unsigned char)134))) : (((/* implicit */int) ((unsigned char) 2147483647)))))) : ((+(arr_14 [i_8] [i_9 + 1] [i_10] [i_11 - 3] [i_12 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)248)) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))) ^ (var_14))))) : (((/* implicit */unsigned long long int) var_5)))))));
    var_29 = ((/* implicit */signed char) ((max((((/* implicit */long long int) min((var_8), (((/* implicit */int) var_4))))), (var_0))) % (((/* implicit */long long int) max((max((var_2), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (var_2))))))));
    var_30 = ((/* implicit */unsigned long long int) ((long long int) ((((unsigned long long int) 0ULL)) == (((/* implicit */unsigned long long int) var_12)))));
    var_31 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-100)) % (((((/* implicit */_Bool) (unsigned short)46283)) ? (((/* implicit */int) (signed char)122)) : (var_8)))))) % (var_5)));
}
