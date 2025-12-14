/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19993
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (-2348239777631847212LL)))) ? (((((/* implicit */int) (short)-8902)) / (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((int) arr_2 [i_0]));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (((+(var_0))) == (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))));
                    var_20 = ((/* implicit */unsigned long long int) ((unsigned int) 1739528543087121105LL));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_21 -= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        arr_14 [i_3] = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) (signed char)-35)) || (((/* implicit */_Bool) arr_13 [i_3])))) ? (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3]))) : (var_8))) : (((/* implicit */unsigned long long int) (+(var_2))))))));
        arr_15 [(short)14] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (((((/* implicit */_Bool) arr_12 [(_Bool)1])) ? (((/* implicit */long long int) var_18)) : (arr_12 [0U])))));
        arr_16 [i_3] = ((/* implicit */unsigned long long int) arr_13 [i_3]);
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)23)) & (((/* implicit */int) (signed char)23))));
                arr_21 [(unsigned char)2] [i_4] [(unsigned char)2] [i_3] = ((/* implicit */int) ((short) arr_12 [i_3]));
                var_23 = ((/* implicit */short) max((arr_12 [i_3]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (52634836U))))));
            }
            for (short i_6 = 2; i_6 < 21; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 3; i_7 < 21; i_7 += 3) 
                {
                    for (unsigned int i_8 = 3; i_8 < 21; i_8 += 4) 
                    {
                        {
                            arr_28 [i_3] [i_3] [i_4] [i_6] [i_7] [1ULL] [i_8 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned short)31453), (((/* implicit */unsigned short) ((((/* implicit */int) var_11)) == (((/* implicit */int) (signed char)-35)))))))) / (((/* implicit */int) ((short) 288230376151711743LL)))));
                            var_24 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_23 [i_3] [i_8])) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (signed char)-5))))) : (((((var_18) + (2147483647))) >> (((/* implicit */int) var_6))))))) ? (((unsigned long long int) ((int) arr_26 [i_6] [i_4]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (arr_23 [i_6 + 1] [i_8 - 2])))));
                            arr_29 [i_3] [i_3] [i_4] [i_6] [(signed char)18] [i_6] [i_8 - 2] = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) arr_19 [i_7])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)45)))) % (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                arr_30 [i_3] [i_6] [i_6] [i_3] &= ((/* implicit */short) (_Bool)1);
                var_25 = ((/* implicit */unsigned char) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        {
                            var_26 |= max((max(((~(var_13))), (((((/* implicit */_Bool) (signed char)34)) ? (var_17) : (((/* implicit */int) (signed char)20)))))), (((/* implicit */int) max((arr_32 [i_3] [i_3] [i_6] [i_9] [i_10] [i_4]), ((short)6205)))));
                            var_27 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned int) arr_24 [i_3] [i_6 + 1] [i_6] [i_4] [(unsigned short)21] [i_3])) + (2047U))));
                        }
                    } 
                } 
                var_28 |= ((signed char) (-(3708370304U)));
            }
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_19 [i_3])) ? (arr_19 [i_3]) : (arr_18 [i_3]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_11])))))));
                var_30 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (signed char)15)), (576460752303423488ULL))), (max((arr_18 [i_4]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
            }
            for (int i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_3] [i_4] [i_4])) == (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) == (var_18))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) + (arr_19 [8U])))))))));
                var_32 -= ((/* implicit */unsigned int) var_7);
            }
            var_33 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_38 [i_3])), (arr_34 [3] [i_3] [i_4] [i_3] [i_4] [(_Bool)1] [i_4])))) ? (((11319732411229981513ULL) + (((/* implicit */unsigned long long int) arr_33 [8U] [8U] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned char) arr_26 [i_3] [i_4])))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) + (-81719934)))) / (arr_18 [i_4])))));
            arr_40 [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)15)) & (((/* implicit */int) (unsigned short)65527))))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_43 [i_3] [i_3] = ((/* implicit */unsigned long long int) -1);
            var_34 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)160)) + (var_13)))), (max((((/* implicit */unsigned long long int) var_5)), (arr_39 [i_3] [18LL] [18LL] [i_13])))));
            arr_44 [i_3] [16U] [5ULL] = ((/* implicit */signed char) (-(max((((((/* implicit */int) arr_31 [i_13] [i_3] [i_3] [i_3])) >> (((var_1) - (1330497192))))), (arr_24 [i_3] [i_3] [i_3] [i_3] [(unsigned char)20] [i_13])))));
        }
        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((unsigned int) 4900193131780267199ULL)))));
    }
    var_36 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
}
