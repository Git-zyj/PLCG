/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238776
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
    var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (signed char)-33))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (var_11) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (1LL)))) ? (((((/* implicit */_Bool) var_6)) ? (var_9) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
        var_20 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32802))))) ? ((+(var_1))) : (((/* implicit */unsigned long long int) var_6))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_22 -= ((/* implicit */_Bool) (+(15217849684211110702ULL)));
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_1] [i_1]))));
        }
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 1; i_4 < 23; i_4 += 3) 
            {
                for (int i_5 = 2; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_24 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_7 [i_5] [i_3] [16U])) ? (3241447787U) : (arr_10 [14U] [i_3] [14U] [(short)14])))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_1]))));
                            var_26 = ((/* implicit */int) (+(5389517544798643385LL)));
                            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5 + 2] [i_5 + 2] [i_4 + 1]))));
                            arr_18 [(signed char)23] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((1073741823ULL) < (((/* implicit */unsigned long long int) arr_10 [i_1] [i_4] [i_4] [i_6]))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1])) || (var_0))))));
                        }
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            arr_21 [i_1] [(unsigned short)4] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */unsigned long long int) arr_19 [i_3] [i_5] [i_7])) & (8256900173238995931ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4 - 1] [14] [i_4 - 1] [3ULL] [i_5 + 2])))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)17122))) : (arr_16 [i_3] [i_1] [i_3] [i_3])));
                            var_29 = ((((/* implicit */int) var_0)) + (-2147483639));
                        }
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                        {
                            arr_25 [i_1] = ((/* implicit */unsigned short) arr_8 [i_1]);
                            var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 7150684357387759351LL)) <= (var_11))))) / (((long long int) (unsigned char)15))));
                            arr_26 [i_1] [i_1] [(signed char)15] [i_1] [15ULL] [(short)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)15401)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25629))) : (63U)));
                        }
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned short) var_5);
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_5 + 1] [i_4] [(unsigned char)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5 + 1] [15U] [i_4]))) : (arr_23 [i_5 + 1] [i_3] [i_5] [i_5] [i_4 - 1] [i_4] [i_3]))))));
                        }
                        var_33 |= (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_16))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    {
                        arr_43 [i_12] [i_12] [i_12] [7ULL] = ((/* implicit */short) ((var_3) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_24 [i_13] [i_13] [i_12] [i_11] [i_11] [i_10] [i_10])) : (((/* implicit */int) arr_24 [i_10] [i_10] [i_11] [i_11] [i_11] [i_12] [(_Bool)1])))) : ((-(((/* implicit */int) arr_42 [14LL] [i_11] [i_11] [i_13]))))));
                        arr_44 [i_13] [i_12] [(unsigned char)19] [i_11] [i_12] [i_10] = ((((/* implicit */_Bool) -1LL)) ? ((-(min((((/* implicit */unsigned long long int) arr_7 [i_10] [i_10] [i_10])), (arr_23 [i_10] [i_10] [i_11] [i_11] [18U] [i_13] [18ULL]))))) : ((((!(var_2))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : (var_1))));
                        var_34 = ((/* implicit */unsigned char) max(((((+(63U))) + (var_6))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (-3564919375408277713LL) : (((/* implicit */long long int) 1319788344U))))))))));
                        arr_45 [i_12] = ((/* implicit */unsigned long long int) (-(min((-3564919375408277713LL), (((/* implicit */long long int) arr_9 [(unsigned char)21] [i_12] [i_12]))))));
                        var_35 &= ((/* implicit */long long int) ((unsigned char) min(((-(var_13))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_11] [i_12] [i_12]))))))));
                    }
                } 
            } 
        } 
        var_36 ^= ((/* implicit */short) arr_12 [i_10] [i_10] [(unsigned char)13] [(unsigned char)13] [17ULL]);
    }
}
