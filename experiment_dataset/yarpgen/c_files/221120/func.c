/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221120
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
    var_13 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (min((var_12), (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) (unsigned short)44229)) ? (((/* implicit */int) var_6)) : (var_11))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)16194))))) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (var_12)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49342)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 1])) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (unsigned short)18499)) ? (2305843009213689856ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16201))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [10ULL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)18499)))))))));
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)36407))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (-1219168938))) : (((((/* implicit */_Bool) arr_0 [(unsigned short)12] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_1] [i_0]))))));
        }
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_16 += ((/* implicit */unsigned long long int) (+((-((~(((/* implicit */int) arr_1 [6ULL]))))))));
            var_17 = ((/* implicit */unsigned short) min(((+((+(var_11))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (arr_5 [i_0] [i_0])))) ? (((/* implicit */int) min(((unsigned short)47037), (((/* implicit */unsigned short) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)16211))))))));
            var_18 = ((/* implicit */long long int) min(((-(((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_2])))))), (max((min((arr_5 [i_0] [i_0]), (((/* implicit */int) var_6)))), ((~(arr_5 [i_0] [i_0])))))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(min((((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned short)2])), (var_1)))))) ? ((~(((/* implicit */int) min(((unsigned short)18499), ((unsigned short)0)))))) : (min((((/* implicit */int) min((var_10), (var_6)))), (min((var_12), (((/* implicit */int) (unsigned short)127))))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3] [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [(unsigned char)11])))) : (((((/* implicit */_Bool) (unsigned short)49334)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [(unsigned short)0]))))));
            var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_0])))) ? (((((/* implicit */_Bool) var_4)) ? (1040187392) : (((/* implicit */int) arr_6 [i_3] [(unsigned short)6])))) : (((((/* implicit */_Bool) -15654641181591213LL)) ? (var_12) : (((/* implicit */int) arr_9 [3ULL]))))));
            arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-2444338700199921948LL) : (((/* implicit */long long int) 1219168937))))) ? (((((/* implicit */_Bool) arr_8 [i_3] [(unsigned char)3] [(unsigned short)5])) ? (var_11) : (arr_5 [i_0] [i_3]))) : (((((/* implicit */_Bool) (unsigned short)33005)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) (signed char)-55))))));
            /* LoopSeq 1 */
            for (short i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                var_22 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (signed char)-18))))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_4 [i_0])))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_3] [i_4])))) : ((-(((/* implicit */int) arr_0 [(unsigned short)7] [5]))))));
                var_24 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) -4711278209043622499LL)))) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (var_12)))));
            }
        }
        var_25 ^= min((min((((/* implicit */unsigned long long int) min((var_4), (var_2)))), (((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)8])) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_2 [i_0] [(unsigned short)4])))), ((+(((/* implicit */int) arr_10 [i_0] [(short)8]))))))));
        var_26 = ((/* implicit */signed char) min((min((min((((/* implicit */int) var_3)), (var_1))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), ((unsigned short)32530)))))))));
        var_27 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)6527)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min((var_6), (var_4))))))), ((~(max((-4711278209043622484LL), (((/* implicit */long long int) (signed char)-47))))))));
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) min(((((!(((/* implicit */_Bool) (unsigned char)34)))) ? (min((((/* implicit */long long int) (unsigned short)32997)), (72057594037665792LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_5] [12ULL])) ? (((/* implicit */int) arr_3 [i_5] [i_5] [(short)9])) : (((/* implicit */int) (unsigned short)48519))))))), (((/* implicit */long long int) max(((-(((/* implicit */int) var_2)))), ((~(((/* implicit */int) arr_9 [i_5]))))))))))));
        var_29 = ((/* implicit */unsigned long long int) max(((-(max((-4797590499248983729LL), (((/* implicit */long long int) var_12)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) (unsigned short)18502))))) ? (max((((/* implicit */int) arr_14 [i_5])), (var_12))) : (((/* implicit */int) min((arr_7 [10ULL] [10ULL]), (((/* implicit */short) var_5))))))))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) min((var_0), ((unsigned short)32541)))), (max((var_11), (((/* implicit */int) arr_13 [(unsigned char)4] [i_5] [12] [(unsigned char)4]))))))) ? (((/* implicit */long long int) min((max((arr_5 [(signed char)12] [(signed char)12]), (var_12))), ((~(((/* implicit */int) arr_12 [8ULL] [8ULL]))))))) : (min((((/* implicit */long long int) min((((/* implicit */int) var_8)), (var_12)))), (((((/* implicit */_Bool) arr_10 [(unsigned short)4] [(unsigned short)4])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [8] [i_5] [i_5] [i_5])))))))));
    }
    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((max((((/* implicit */int) var_8)), (var_11))), ((-(((/* implicit */int) (signed char)-106))))))))))));
}
