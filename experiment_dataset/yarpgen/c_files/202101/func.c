/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202101
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_10 = ((/* implicit */int) arr_1 [i_0]);
        var_11 = ((/* implicit */signed char) ((unsigned int) ((arr_0 [i_0]) ^ (((/* implicit */unsigned int) var_4)))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_12 = ((/* implicit */short) (((~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_6) : (((/* implicit */int) (unsigned char)158)))))) != (((/* implicit */int) (_Bool)1))));
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (signed char)-121))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_14 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (((/* implicit */int) arr_7 [i_1] [i_2])) : (((/* implicit */int) var_3))))));
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (var_6))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1]))))))))));
            var_16 = ((((/* implicit */_Bool) (short)-28034)) ? (((/* implicit */long long int) (~(((unsigned int) var_4))))) : (arr_6 [(short)10]));
            /* LoopNest 2 */
            for (short i_3 = 3; i_3 < 11; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_17 ^= ((/* implicit */unsigned int) var_1);
                            arr_16 [i_1] [i_1] [i_1] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */short) ((int) ((long long int) ((arr_10 [i_1]) <= (((/* implicit */unsigned int) -1))))));
                            arr_17 [i_5] [i_5] [i_1] [i_4] [i_1] [i_2] [(short)9] = ((/* implicit */unsigned short) (+(min((var_2), (((((/* implicit */_Bool) var_9)) ? (var_2) : (arr_4 [i_1] [i_1])))))));
                        }
                        for (short i_6 = 2; i_6 < 12; i_6 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((signed char) (+(((unsigned int) arr_7 [i_1] [i_1]))))))));
                            var_19 -= 3328351125U;
                            var_20 &= ((/* implicit */short) (+(max((arr_2 [i_1]), (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)110)), (arr_10 [i_4]))))))));
                            var_21 = ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) arr_8 [i_3])))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) arr_1 [i_2])))), ((+(((((/* implicit */_Bool) (unsigned short)1020)) ? (-1007179567) : (((/* implicit */int) (_Bool)1))))))));
                            var_22 = ((/* implicit */short) var_7);
                        }
                        /* vectorizable */
                        for (short i_7 = 2; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */short) -6787819098819267673LL);
                            var_24 = ((/* implicit */unsigned short) var_0);
                        }
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(((unsigned int) arr_22 [i_3] [i_4] [i_3] [i_4] [i_3 - 3])))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */_Bool) -6787819098819267673LL);
        }
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            arr_27 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_25 [i_1]))))));
            arr_28 [i_1] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_13 [i_1] [i_8] [i_1] [i_8] [i_1])) << (((((/* implicit */int) arr_13 [i_1] [i_8] [i_1] [i_8] [i_8])) - (48261)))))));
            var_27 = ((/* implicit */int) arr_4 [i_1] [i_1]);
            var_28 += ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >= (((/* implicit */int) ((((/* implicit */int) arr_12 [i_8] [i_1])) <= (var_4)))))));
        }
        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)35363), (((/* implicit */unsigned short) (unsigned char)156))))) ? ((+(max((((/* implicit */unsigned int) 2147483622)), (3312851862U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((arr_19 [i_1] [6LL] [6LL] [i_9] [i_9] [i_9] [i_9]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */int) arr_24 [i_1] [i_9] [i_1] [i_1] [i_9])))) | (((/* implicit */int) (signed char)110)))))))));
        }
        var_31 *= ((/* implicit */_Bool) var_8);
    }
    for (short i_10 = 0; i_10 < 17; i_10 += 4) 
    {
        arr_35 [i_10] = ((/* implicit */unsigned short) arr_33 [i_10]);
        var_32 = var_2;
        arr_36 [(unsigned char)1] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_10])) ? (arr_33 [i_10]) : (((/* implicit */unsigned int) var_4)))))))) << ((((-(((var_9) & (((/* implicit */long long int) arr_33 [i_10])))))) + (3227312258LL)))));
    }
    var_33 = 679384096U;
}
