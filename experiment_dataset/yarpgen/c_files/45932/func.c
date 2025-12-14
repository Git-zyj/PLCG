/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45932
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((arr_2 [i_0] [i_0]) << (((min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (arr_2 [i_0] [i_1 - 3]))) - (2376318299408507464ULL))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)1338)))))))));
                var_11 = ((/* implicit */short) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_2 = 2; i_2 < 7; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */signed char) var_10);
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((arr_7 [i_2]), (arr_7 [i_2])))) || (((/* implicit */_Bool) 9223372036854775797LL)))) ? (min((((/* implicit */unsigned long long int) var_7)), (var_2))) : (((/* implicit */unsigned long long int) min((arr_1 [i_2 - 1] [i_2 - 2]), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (17177772032ULL))))))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744056531779571ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-1))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3]))) - (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))) & (arr_1 [i_3] [i_3])))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_3] [i_3])) - (((/* implicit */int) arr_11 [i_3] [i_3]))));
        arr_13 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3]))) : (arr_1 [i_3] [i_3])))) : (((((/* implicit */_Bool) -9223372036854775797LL)) ? (arr_2 [i_3] [i_3]) : (arr_10 [i_3])))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                {
                    var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (-1742013647) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 9151314442816847872LL)))))));
                    var_16 -= ((/* implicit */unsigned int) ((arr_3 [i_5] [i_4] [i_3]) & (((/* implicit */int) (_Bool)1))));
                    arr_20 [i_5] [i_4] [i_3] = ((/* implicit */long long int) arr_14 [i_4]);
                }
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (arr_0 [i_6] [i_6])))) * (((/* implicit */int) arr_0 [i_6] [i_6]))))), (min((((/* implicit */unsigned long long int) arr_21 [i_6] [i_6])), (1125899906580480ULL)))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                {
                    arr_27 [i_6] [i_7] [i_6] = ((/* implicit */short) 3932160U);
                    arr_28 [i_6] [i_6] = ((/* implicit */unsigned long long int) var_10);
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)4)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (var_8)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_6] [i_7]))) - (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))))) : (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)19079)), (arr_3 [i_6] [i_6] [i_8]))))));
                                arr_33 [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7] [i_7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned char)190))))))))));
                                arr_34 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (arr_3 [i_6] [i_6] [i_6]))))))) ? ((-(((/* implicit */int) ((arr_2 [i_6] [i_7]) == (((/* implicit */unsigned long long int) var_7))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) 17177772032ULL))), (((unsigned short) var_1)))))));
                                arr_35 [i_6] [i_6] [i_8] [i_6] [i_10] = ((/* implicit */unsigned short) (short)-18122);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) 751737715))) + (((var_4) ? (var_7) : (((/* implicit */int) var_4))))))) ? (((2147483647) ^ (((/* implicit */int) ((((/* implicit */_Bool) 4610560118520545280ULL)) || (((/* implicit */_Bool) arr_30 [i_6] [i_7] [i_8]))))))) : (((/* implicit */int) ((var_1) > (((((/* implicit */_Bool) (short)8471)) ? (-9223372036854775797LL) : (((/* implicit */long long int) 8388607U)))))))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        for (long long int i_12 = 0; i_12 < 16; i_12 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-29)) || (((/* implicit */_Bool) (short)255))))))))));
                var_21 = min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1)));
                var_22 = ((/* implicit */signed char) var_0);
                arr_42 [i_11] [i_12] [i_11] = ((/* implicit */unsigned short) -853586690);
                arr_43 [i_11] = ((/* implicit */_Bool) ((((((((/* implicit */long long int) (-(-660312026)))) + (var_1))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((((/* implicit */_Bool) (short)-30211)) || (((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 8388607U)) ? (9151314442816847872LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_10);
    var_24 = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */int) (unsigned short)31075)), ((-(((/* implicit */int) var_0)))))));
}
