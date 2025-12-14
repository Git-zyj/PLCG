/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209194
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_9))))))) | (((/* implicit */int) var_0))));
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((var_4), (((/* implicit */int) (signed char)-109))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (unsigned char)255)))))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (7901817439620322673ULL))) && ((!(((/* implicit */_Bool) (signed char)-30)))))))));
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((int) 17U))))) % (max((((/* implicit */long long int) 12U)), (min((5222247911997435439LL), (((/* implicit */long long int) (unsigned short)0))))))));
            arr_5 [i_0] [i_1] [3ULL] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (unsigned short)65535)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))))) : (min((((/* implicit */unsigned long long int) -5656419516532365417LL)), (arr_0 [i_1 - 2])))));
        }
        var_15 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-120)))))));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        arr_8 [(_Bool)1] [15LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 + 3] [i_2 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))) : (arr_6 [i_2 + 4] [i_2 + 4])));
        /* LoopSeq 4 */
        for (signed char i_3 = 2; i_3 < 18; i_3 += 2) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31)))))) | (((arr_9 [i_2] [i_3] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_10 [(signed char)6])))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    var_17 = ((/* implicit */long long int) ((unsigned char) arr_14 [i_3 - 2] [i_4] [i_2 + 1]));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(7935437940072019463ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (4294967295U))) : (((((/* implicit */_Bool) var_11)) ? (arr_10 [5LL]) : (((/* implicit */unsigned int) var_6))))));
                }
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (9201603801717223055ULL))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_2) && (((/* implicit */_Bool) (unsigned char)250)))))) : ((-(var_9))))))));
            }
        }
        for (unsigned int i_6 = 3; i_6 < 18; i_6 += 1) 
        {
            var_20 = ((/* implicit */short) 7901817439620322685ULL);
            arr_19 [i_6] = ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)65535)) >> (((15917415236348022698ULL) - (15917415236348022690ULL)))))));
        }
        for (long long int i_7 = 1; i_7 < 18; i_7 += 1) 
        {
            var_21 |= ((/* implicit */unsigned char) 4294967278U);
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_20 [i_7]))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) -4495648693006609509LL))));
        }
        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [19LL])) && (((/* implicit */_Bool) 4294967278U))))))))));
                arr_26 [(signed char)16] [(signed char)16] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))) | (511ULL)));
            }
            var_25 += ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_8] [16U] [6ULL]))))) ? (arr_15 [i_8] [(signed char)7] [i_2] [18U] [i_2 + 4]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_3) : (arr_25 [i_8] [6ULL] [i_2] [i_2]))))));
        }
        var_26 = ((/* implicit */long long int) min((var_26), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (1125898833100800LL)))));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */int) ((6110191835590041643ULL) > (18446744073709551615ULL)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2]))))))))));
    }
    for (unsigned long long int i_10 = 3; i_10 < 9; i_10 += 1) 
    {
        var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8157495338614958880LL)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [(signed char)9])))))) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_10] [i_10])) & (((/* implicit */int) arr_22 [i_10])))))))) + (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned long long int) var_11)) * (7901817439620322673ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_10 - 2])))))));
        arr_30 [i_10 - 3] = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */int) ((unsigned char) var_6))), (((((/* implicit */int) (unsigned char)17)) ^ (((/* implicit */int) (unsigned char)138)))))));
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            arr_33 [i_11] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (arr_31 [1]))))) % (((((/* implicit */_Bool) arr_3 [i_11] [i_11])) ? (12990624206555976274ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_10])))))))) ? (((int) (!(var_2)))) : (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_7))))));
            arr_34 [i_11] [8ULL] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-14)) || (((/* implicit */_Bool) arr_25 [i_10] [i_10] [i_10] [10ULL]))));
        }
    }
}
