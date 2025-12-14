/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42992
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_18 = ((((_Bool) (-(((/* implicit */int) arr_3 [i_1]))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1]))) ? (((arr_5 [i_0] [i_1] [i_1] [(unsigned short)4]) ? (arr_4 [i_0] [i_0]) : (((/* implicit */int) arr_3 [i_2])))) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) arr_5 [i_0] [(unsigned short)12] [i_0] [4])));
                    var_19 = ((/* implicit */int) arr_0 [i_2]);
                    var_20 = ((/* implicit */signed char) arr_6 [i_2]);
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_4 [i_0] [i_0])) : (arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [13]), (arr_3 [i_0]))))) : (arr_2 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) arr_9 [i_3] [i_3] [i_3])))));
            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [(signed char)14] [i_3] [i_3])))))) ? (((((/* implicit */_Bool) ((long long int) arr_6 [i_0]))) ? (((/* implicit */int) ((signed char) arr_2 [4] [4]))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))) : (((int) arr_3 [i_3]))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                var_24 = ((/* implicit */int) arr_2 [i_0] [i_3]);
                var_25 = ((/* implicit */int) arr_2 [14] [i_3]);
                var_26 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (arr_8 [i_0] [i_0])))), (((((/* implicit */_Bool) 17792790985650306638ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (~(arr_2 [i_3] [i_4]))))));
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) min((arr_0 [i_3]), (((/* implicit */long long int) arr_2 [i_4] [i_0])))))) ? (((/* implicit */int) ((signed char) arr_11 [i_4] [i_3] [i_0]))) : (((/* implicit */int) arr_3 [i_3]))));
                arr_12 [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            }
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                var_28 -= ((/* implicit */unsigned char) arr_2 [i_0] [i_3]);
                var_29 = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_8 [i_0] [i_3])))));
            }
        }
    }
    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) arr_7 [i_6]))))) ? (((((/* implicit */_Bool) arr_10 [i_6] [i_6])) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) arr_3 [i_6])))) : (((int) arr_7 [i_6]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8191)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (unsigned char)204))))) : (((unsigned int) (!(((/* implicit */_Bool) arr_14 [i_6] [4] [i_6] [(signed char)10]))))))))));
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6])) ? (((unsigned int) ((((/* implicit */_Bool) arr_0 [i_6])) ? (arr_8 [i_6] [i_6]) : (((/* implicit */unsigned int) arr_13 [i_6] [i_6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_15 [i_6] [i_6] [i_6]))))));
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 2) /* same iter space */
        {
            var_32 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 202099728)) ? (3349205727424838296LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4196)))));
            var_33 ^= ((/* implicit */long long int) arr_18 [i_8] [i_7]);
            var_34 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)3));
        }
        for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */int) ((68719476735ULL) << (((((/* implicit */int) (unsigned char)204)) - (171)))));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)203)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) (unsigned short)55273)) ? (((/* implicit */long long int) 4205726604U)) : (-6481553418486537800LL))) : (((/* implicit */long long int) arr_25 [i_7 + 1]))))) ? (((((/* implicit */_Bool) 89240692U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_19 [i_7 + 1])))) : (((/* implicit */int) arr_22 [i_7]))));
        }
        var_37 = ((/* implicit */long long int) arr_25 [i_7 + 1]);
        arr_26 [(unsigned short)9] = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_16 [i_7])), (((((/* implicit */_Bool) ((arr_15 [i_7] [i_7] [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7]))) : (arr_25 [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7 + 1]))) : (arr_8 [i_7] [i_7])))));
        var_38 = ((/* implicit */unsigned long long int) arr_16 [i_7]);
    }
    var_39 += ((/* implicit */unsigned short) var_14);
}
