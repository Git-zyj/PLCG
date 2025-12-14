/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242982
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 50331648U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12376)))))));
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned short)58751)) < (((/* implicit */int) arr_0 [i_0] [i_1 + 2])))), (((_Bool) 4244635640U))));
            var_13 = ((((/* implicit */int) max((arr_0 [i_1 - 1] [i_1 + 2]), (arr_0 [i_1 - 1] [i_1 + 2])))) < ((-(((/* implicit */int) (unsigned short)33172)))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                for (unsigned short i_3 = 3; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) (-(12U)));
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)58740)) >> (((666917005U) - (666916980U)))))) ? (((((/* implicit */_Bool) -712611888)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20824))) : (0ULL))) : (max((((/* implicit */unsigned long long int) var_5)), (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (18446744073709551615ULL)))))));
                    }
                } 
            } 
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_16 = ((/* implicit */_Bool) var_11);
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 7LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58751))) : (18446744073709551597ULL)));
        }
        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 58750510U)))) ? (268435455LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118)))));
            var_18 = ((/* implicit */short) ((long long int) (+(((/* implicit */int) arr_1 [i_0])))));
            arr_17 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)144)), ((unsigned short)3)))) | (((/* implicit */int) (unsigned char)212))));
        }
        var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)58751)) <= (((/* implicit */int) (!(((/* implicit */_Bool) 2475137281U)))))))), ((-(((/* implicit */int) arr_7 [i_0]))))));
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2244333967617349165LL)) ? (1221918770U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */unsigned long long int) 536870912U)) : (((11003389742185519671ULL) | (0ULL))))) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)175)) ? (3343887827U) : (1819830015U))))));
            var_21 = ((/* implicit */signed char) (short)10694);
        }
        for (short i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) (((~(var_2))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_7])) && (((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) (unsigned short)0)))))))))));
            arr_23 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (1819830011U)));
            arr_24 [i_0] [i_7] [i_7] = ((/* implicit */unsigned int) arr_20 [i_7] [i_0]);
        }
    }
    var_23 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65531))));
}
