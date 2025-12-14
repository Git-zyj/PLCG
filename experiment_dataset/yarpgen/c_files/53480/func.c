/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53480
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((arr_3 [i_1] [i_1]) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (signed char)17)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (short)22088))));
                    var_19 = ((/* implicit */signed char) arr_4 [i_1] [(signed char)14]);
                }
                for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_1])) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) arr_4 [i_3] [i_1]))))) ? (((((/* implicit */_Bool) (short)22088)) ? (((/* implicit */int) arr_4 [i_3] [i_3])) : (((/* implicit */int) arr_4 [i_3] [i_3])))) : (((/* implicit */int) arr_4 [i_3] [i_3]))));
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 12; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) arr_6 [i_5 + 1] [i_1] [i_0]);
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_1])) ? (((/* implicit */int) arr_5 [9])) : (((/* implicit */int) (unsigned char)46))))) ? (((((/* implicit */_Bool) 2563200895U)) ? (((/* implicit */unsigned long long int) 7827700662715658282LL)) : (12ULL))) : (((/* implicit */unsigned long long int) arr_10 [i_1] [i_0 + 2] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1])) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) arr_12 [i_5] [(_Bool)1] [i_3] [i_1] [i_0 - 1]))))) : (((((/* implicit */_Bool) arr_11 [i_5 + 1] [i_5 - 1] [i_4 - 1] [i_0 + 3] [i_0 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5 - 1] [i_4] [i_4 + 3] [(short)12] [i_0 + 2]))) : (265193943779640364LL)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_1] [i_1] [i_0 + 3])) ? (((/* implicit */int) (short)13381)) : (-761719967)));
                }
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 1; i_7 < 14; i_7 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_8 = 3; i_8 < 13; i_8 += 2) 
                            {
                                var_24 = ((/* implicit */short) arr_12 [i_8] [i_7] [i_6] [i_1] [i_0 + 1]);
                                var_25 = ((/* implicit */unsigned int) arr_7 [i_0 + 1]);
                            }
                            var_26 ^= ((/* implicit */_Bool) 2393553583742448085LL);
                        }
                    } 
                } 
                var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -761719951)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1824967639)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16256))) : (-1LL)))) : (((((/* implicit */_Bool) 761719967)) ? (11820593884031966602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31322)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (7827700662715658276LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (7827700662715658295LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_1] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1])) ? (arr_8 [i_0] [i_0] [i_1]) : (4194303)))) : (((((/* implicit */_Bool) arr_20 [i_0] [(_Bool)1] [i_1] [(unsigned short)3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52092))) : (3136670968U)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_9 = 2; i_9 < 23; i_9 += 3) 
    {
        for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 11820593884031966602ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9] [i_9] [i_9] [i_11])) ? (2563200895U) : (((/* implicit */unsigned int) -761719953))))) ? (arr_28 [i_11] [i_10] [i_9]) : (((/* implicit */long long int) -578671276)))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_9] [i_9])))));
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13444)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10965))) : (339413070854926087LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9] [19LL] [i_11] [i_9]))) : (-4112909692985291092LL))))));
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13298)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_10] [i_10] [i_9] [i_9]))) : (2436329631U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [9ULL] [i_10])) ? (22LL) : (arr_28 [i_9] [i_10] [(signed char)17])))) : (arr_31 [(short)4] [17U] [2U] [i_11])))) ? (((/* implicit */int) (unsigned short)52092)) : (((/* implicit */int) (short)32767))));
                }
            } 
        } 
    } 
}
