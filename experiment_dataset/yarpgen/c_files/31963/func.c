/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31963
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) > (((/* implicit */int) max((var_12), (((/* implicit */short) ((signed char) var_15))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_5))));
        var_22 = ((/* implicit */unsigned short) (+(var_6)));
    }
    /* LoopSeq 3 */
    for (signed char i_1 = 4; i_1 < 19; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_1 - 2]))) ? (((((/* implicit */_Bool) -677053685)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)62914)))) : (((int) (+(arr_2 [i_1]))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)26)))))));
            var_24 = ((/* implicit */unsigned long long int) var_8);
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) -19619800481629652LL)) ? (arr_3 [i_1 - 4]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 677053691)) ? (((1909726409) ^ (-1909726409))) : (((/* implicit */int) var_17))))))))));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 3])) ? (((((/* implicit */_Bool) var_18)) ? (var_7) : (((/* implicit */long long int) 2147483630)))) : (((/* implicit */long long int) arr_5 [i_1 - 2])))))));
            arr_13 [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_2 [i_1 - 4])) > (arr_7 [i_1] [i_1 - 2] [(signed char)4])));
            var_27 = ((/* implicit */unsigned short) arr_2 [(unsigned char)0]);
        }
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) max((var_0), (((/* implicit */unsigned int) ((9223372036854775807LL) <= (arr_3 [i_1 - 2])))))))));
    }
    /* vectorizable */
    for (signed char i_4 = 2; i_4 < 15; i_4 += 4) 
    {
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((arr_0 [i_4 - 2]) < (arr_0 [i_4 - 1]))))));
        arr_16 [i_4 + 1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)54327)) ? (arr_7 [15LL] [15LL] [(signed char)18]) : (((/* implicit */unsigned long long int) var_5)))));
    }
    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */long long int) 4041598729U);
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_2))));
            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((((/* implicit */int) arr_15 [i_5])) != (((/* implicit */int) arr_14 [i_5])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_6])) ? (arr_7 [i_5] [19U] [i_5]) : (arr_7 [i_5] [i_5] [i_5])))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
            {
                arr_30 [i_5] [(unsigned short)2] = ((/* implicit */long long int) ((arr_3 [i_5]) > (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_17))))));
                var_32 -= ((/* implicit */unsigned char) arr_5 [i_5]);
            }
            for (int i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [7U]))))) / (((/* implicit */int) arr_15 [i_6]))))), (((unsigned int) arr_4 [i_5])))))));
                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_25 [i_6] [(unsigned char)10])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) / (18446744073709551615ULL))))))));
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [(short)8] [i_6] [i_6])) ? (((/* implicit */long long int) (~(arr_29 [i_6] [i_6] [(signed char)9])))) : ((~(5199238469796653176LL))))) >= ((-(8909760691918467120LL))))))));
                var_36 = ((/* implicit */long long int) (signed char)-14);
                var_37 = ((/* implicit */unsigned short) -777731942);
            }
        }
        var_38 = ((/* implicit */unsigned short) (+(((((arr_5 [i_5]) == (((/* implicit */int) (unsigned short)2622)))) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-3)), (var_3))))))));
    }
}
