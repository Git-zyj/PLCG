/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214082
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
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != ((~(var_4))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] [10U] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 932560641U)) || (((/* implicit */_Bool) (unsigned short)1024)))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1024)) - (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_1 [i_0] [(short)10])) : (((/* implicit */int) var_11))))))) ? (((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8))))));
        var_18 = ((/* implicit */unsigned int) max((max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [10U]))) != (var_14)))), (((((/* implicit */_Bool) 3755308992U)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)31)))))), ((+(((/* implicit */int) var_0))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 22; i_3 += 4) 
            {
                {
                    arr_10 [i_1] [i_2] [i_3] = (-(arr_4 [i_2]));
                    arr_11 [i_1] [(_Bool)1] [(unsigned short)22] [i_3] = ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)64511)) || (((/* implicit */_Bool) (short)-27983))))));
                    var_19 = ((/* implicit */_Bool) (+(7U)));
                    var_20 = ((/* implicit */unsigned char) (signed char)-112);
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_6 [13LL] [i_2] [i_3 - 1]))));
                }
            } 
        } 
        var_22 = ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) (short)12119)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (unsigned short)0)))))));
        arr_12 [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_1] [(_Bool)1] [i_1]);
        arr_13 [i_1] = ((/* implicit */unsigned short) arr_3 [i_1] [(short)20]);
        var_23 = ((/* implicit */short) ((0ULL) ^ (((/* implicit */unsigned long long int) var_5))));
    }
    for (short i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
    {
        arr_17 [i_4] = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (((14717489321329685025ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned short)5] [(unsigned short)19]))))))));
        arr_18 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned int) arr_4 [i_4])) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((arr_14 [i_4] [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) == (((((/* implicit */_Bool) 2943732880U)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) : (((/* implicit */int) var_6))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 4; i_5 < 21; i_5 += 4) 
        {
            arr_23 [(_Bool)1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_2)), (arr_19 [i_4] [i_5 - 4] [i_5])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_4] [i_5 + 1] [i_4])) * (((/* implicit */int) (signed char)120))))) : (((((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) : (arr_3 [i_5 + 2] [i_4])))));
            arr_24 [i_4] [i_4] = ((/* implicit */int) var_0);
        }
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            arr_29 [i_4] = ((/* implicit */int) (+(9215190781221765969ULL)));
            arr_30 [i_4] = ((/* implicit */unsigned short) ((arr_9 [i_4] [11LL] [i_4]) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-12329)))));
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_13), ((signed char)31))))) | (((3298530872U) & (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                var_25 = ((/* implicit */short) arr_5 [i_4] [(unsigned short)7]);
                var_26 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) var_6)))) == ((~(((/* implicit */int) (signed char)64)))))))));
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_31 [i_4] [i_6] [16LL] [16LL])) ? (arr_8 [i_4] [i_6] [i_4]) : (((/* implicit */long long int) arr_21 [(short)14] [i_4] [i_7])))))) || (((/* implicit */_Bool) (unsigned short)13423))));
            }
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_8 [i_4] [i_6] [i_4]), (((/* implicit */long long int) (signed char)-31))))) || (((/* implicit */_Bool) ((short) var_15)))));
                var_29 -= (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(short)7] [i_6] [i_6] [22U]))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (var_14))))));
            }
        }
        arr_37 [i_4] [i_4] = ((/* implicit */unsigned short) arr_22 [(signed char)1] [i_4]);
        var_30 += ((/* implicit */unsigned int) var_15);
    }
}
