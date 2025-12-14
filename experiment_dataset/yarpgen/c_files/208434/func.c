/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208434
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)10848))) - (var_4))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)10835))))))) : (var_8)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [13] [i_1])))))) ? (((/* implicit */int) ((_Bool) 18446744073709551615ULL))) : (((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_9))))))) / (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
            arr_5 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned int) ((unsigned char) (_Bool)1))))))));
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) -5247429410867413016LL))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((((/* implicit */_Bool) 2124666808)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (35184372088831ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) (+(var_5))))));
            var_17 = ((/* implicit */short) 5247429410867413033LL);
        }
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) 5247429410867413016LL))));
        var_19 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) (+(arr_2 [i_0] [i_0])))));
        var_20 += ((/* implicit */unsigned long long int) var_11);
        var_21 = ((/* implicit */unsigned short) -664950953660480095LL);
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_22 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) : (arr_0 [i_2]))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_1 [i_2] [i_2])))))))));
        arr_8 [i_2] = ((/* implicit */long long int) arr_3 [i_2] [i_2] [i_2]);
    }
    for (int i_3 = 2; i_3 < 14; i_3 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 1; i_4 < 15; i_4 += 1) 
        {
            arr_15 [i_4] [(short)1] [i_3 + 2] = ((/* implicit */unsigned long long int) arr_2 [i_3 - 2] [i_3 + 2]);
            var_23 = ((((/* implicit */int) arr_6 [i_3 + 2])) <= (((/* implicit */int) arr_6 [i_4 - 1])));
        }
        arr_16 [i_3] = ((/* implicit */unsigned int) (~(-8273620442065609072LL)));
        var_24 = ((/* implicit */long long int) min((var_24), ((~(((long long int) ((((/* implicit */_Bool) var_1)) ? (-5247429410867413016LL) : (((/* implicit */long long int) ((/* implicit */int) (short)10843))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((var_6) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5]))))))));
        /* LoopNest 2 */
        for (signed char i_6 = 2; i_6 < 12; i_6 += 1) 
        {
            for (short i_7 = 1; i_7 < 13; i_7 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [6LL] [6LL])) ? (arr_2 [i_5] [i_7 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6 - 2])))));
                    var_27 = ((/* implicit */unsigned short) (_Bool)1);
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? ((~(((/* implicit */int) (signed char)-31)))) : (((/* implicit */int) var_11)))))));
                }
            } 
        } 
        var_29 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)34129))));
        var_30 = ((/* implicit */long long int) (-(arr_12 [i_5])));
        arr_25 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((~(arr_4 [(unsigned short)21] [(unsigned short)21]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_22 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))));
    }
    var_31 = ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3)))) ^ (var_8)));
    var_32 *= ((/* implicit */unsigned int) -326229107507259252LL);
    var_33 &= ((/* implicit */unsigned short) var_13);
}
