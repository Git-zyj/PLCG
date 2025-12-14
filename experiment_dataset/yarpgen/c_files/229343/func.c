/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229343
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_13 = (signed char)-1;
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_7 [i_1] [17ULL] [i_0]))));
            var_15 -= ((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6607))) : (4294967295U));
        }
        for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)6607), (((/* implicit */unsigned short) (signed char)-36)))))))) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) ((unsigned char) (unsigned short)58908)))));
            var_17 |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 1814875478U)) ? (((((/* implicit */_Bool) (short)28173)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8512908527902354557LL))) : (((/* implicit */long long int) ((unsigned int) (short)32767))))), (((/* implicit */long long int) (unsigned short)58908))));
        }
        for (unsigned int i_3 = 4; i_3 < 22; i_3 += 4) 
        {
            var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) (-((+(((/* implicit */int) var_4))))))), (arr_10 [i_3])));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) (-(arr_6 [i_3] [i_3 + 2])))) ? ((+(arr_6 [(_Bool)1] [i_3 + 2]))) : (((/* implicit */unsigned long long int) max((arr_12 [i_3] [i_3 + 2] [i_3 + 2]), (arr_3 [i_3] [i_3]))))))));
        }
        var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (((_Bool)1) ? (2147483647) : (((/* implicit */int) (unsigned char)221))))) ? (((/* implicit */int) ((unsigned short) var_12))) : (arr_11 [i_0 - 1] [i_0 - 3] [i_0 - 3])))));
    }
    for (long long int i_4 = 3; i_4 < 22; i_4 += 2) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (unsigned short)32665)) : (((/* implicit */int) (unsigned char)244)))))))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) var_4);
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (+(((/* implicit */int) var_5)))))) - (((/* implicit */int) var_4))));
            var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((6538787530515244523ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(unsigned short)5] [(_Bool)1])))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) arr_13 [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_7)))))));
        }
        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            arr_23 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_4] [i_4])) : (var_1)))))) == (((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6] [i_4] [i_4]))) : (((((/* implicit */_Bool) 4991084169914418618ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) : (2184917752U)))))));
            var_24 = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) 2147483647)) : (1269051477U)))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        arr_26 [(unsigned short)21] [(signed char)5] = ((/* implicit */unsigned char) arr_25 [i_7] [i_7]);
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            for (long long int i_9 = 4; i_9 < 23; i_9 += 4) 
            {
                for (unsigned int i_10 = 4; i_10 < 22; i_10 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_9] [i_8] [i_9 + 1] [i_8])) ? (((arr_28 [(unsigned short)23] [(unsigned short)23]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8] [i_9]))))) : (((/* implicit */unsigned long long int) var_0))));
                        var_26 = ((/* implicit */unsigned int) (-((~(var_1)))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
    {
        for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 4) 
        {
            for (signed char i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                {
                    var_27 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */_Bool) -126485400)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)6943)) : (((/* implicit */int) var_6)))))), (((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) arr_19 [i_11] [i_11] [i_13])), (arr_8 [7U] [7U] [i_11])))))));
                    var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) & (var_7)))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-65)), (1042969041)))) ? (((((/* implicit */_Bool) (signed char)-6)) ? (3246136866534565530ULL) : (((/* implicit */unsigned long long int) 3508654746U)))) : (((/* implicit */unsigned long long int) ((long long int) var_5))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 18446744073709551613ULL)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_38 [1] [(unsigned short)0])))))));
                    arr_40 [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) max((((/* implicit */int) var_4)), (var_1)))))));
                }
            } 
        } 
    } 
}
