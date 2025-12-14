/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193637
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
    var_14 = max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (-8996471348369380014LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1))))) >= (var_12)))), ((-(((((/* implicit */_Bool) 1458583018U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_13))))));
    var_15 = ((((/* implicit */long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_0))))) > (((((/* implicit */_Bool) max((var_0), (var_11)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) (signed char)82))))) : (((var_12) / (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))) : (arr_1 [i_0 - 3] [i_0 - 2])))) ? (((arr_1 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-20557)) / (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)13)) ? (-1554164714) : (((/* implicit */int) (signed char)103)))) / (((/* implicit */int) arr_0 [i_0 + 2])))))));
        arr_3 [i_0] &= ((/* implicit */unsigned int) var_8);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (long long int i_4 = 2; i_4 < 12; i_4 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_17 += ((/* implicit */unsigned short) var_8);
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_4 + 2] [i_2] [i_1 - 3])) ? (((/* implicit */int) arr_15 [i_4 - 1] [i_1 - 3])) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (short i_6 = 4; i_6 < 10; i_6 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */int) var_10);
                            arr_23 [i_2] [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (5738938611413220758ULL)));
                            arr_24 [i_1] [i_2] [i_3] [i_3] [i_6] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_19 [i_3])) > ((~(arr_20 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                        }
                        for (short i_7 = 4; i_7 < 10; i_7 += 3) /* same iter space */
                        {
                            var_21 |= ((/* implicit */unsigned long long int) ((var_9) ? (((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) arr_9 [(short)0] [i_4] [i_2])) : (((/* implicit */int) arr_9 [i_4] [i_4] [i_3])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)7467)) : (((/* implicit */int) var_10))))));
                            var_22 = ((/* implicit */long long int) ((var_6) + ((+(var_2)))));
                            arr_27 [i_1 + 1] [i_2] [i_3] [i_2] [10] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) | (((((/* implicit */_Bool) 2016045842U)) ? (((/* implicit */int) (short)-12484)) : (-1934553473)))));
                        }
                        var_23 = ((/* implicit */unsigned short) (-(arr_5 [i_2] [i_3])));
                        var_24 = ((/* implicit */unsigned short) var_0);
                    }
                } 
            } 
        } 
        var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)49783)) | ((~(((/* implicit */int) (signed char)105))))));
        var_26 |= ((/* implicit */unsigned short) (-(arr_19 [i_1 - 1])));
        arr_28 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (short)3)))))));
        var_27 = ((/* implicit */long long int) (+(2097151U)));
    }
}
