/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238169
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (var_8))))));
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 3; i_1 < 16; i_1 += 4) 
    {
        var_20 = ((/* implicit */_Bool) (+(min((max((arr_3 [i_1]), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_17)), (var_9))))))));
        var_21 = ((/* implicit */_Bool) ((unsigned short) var_13));
        var_22 = ((_Bool) max((arr_3 [i_1 - 1]), (((/* implicit */unsigned long long int) var_17))));
    }
    for (unsigned short i_2 = 1; i_2 < 7; i_2 += 2) 
    {
        var_23 *= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)10091)) : (((/* implicit */int) var_3))))) ? (((unsigned long long int) (short)27624)) : (arr_3 [i_2 - 1]))) ^ (((/* implicit */unsigned long long int) (+((((_Bool)0) ? (((/* implicit */int) (unsigned short)10067)) : (((/* implicit */int) var_5))))))));
        /* LoopNest 3 */
        for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) var_4);
                        /* LoopSeq 4 */
                        for (short i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) (-(max(((+(arr_3 [i_6]))), (((/* implicit */unsigned long long int) ((arr_8 [i_2] [i_6]) % (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                            var_26 = ((/* implicit */_Bool) arr_8 [i_3] [i_3]);
                            var_27 = ((/* implicit */unsigned short) (~(((int) var_5))));
                        }
                        for (short i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
                            var_29 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_1 [i_2])))) ? (min((max((arr_8 [(short)5] [i_3 - 1]), (((/* implicit */unsigned int) arr_4 [i_3])))), (((/* implicit */unsigned int) (-(var_11)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_11 [9U] [i_5] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_4] [i_5])))))) ? ((+(arr_2 [i_2 + 3]))) : (((/* implicit */unsigned int) (+(var_11))))))));
                        }
                        for (short i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) max((max((((((/* implicit */int) (short)27624)) % (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) (short)27632)))), (((((/* implicit */_Bool) (unsigned short)11026)) ? (((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL)))) : ((-(((/* implicit */int) (unsigned short)0))))))));
                            var_31 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) (short)32739)), (arr_11 [i_2] [i_3 - 1] [i_2 + 1])))));
                        }
                        for (signed char i_9 = 1; i_9 < 8; i_9 += 1) 
                        {
                            var_32 += ((/* implicit */short) var_8);
                            var_33 = ((/* implicit */short) var_6);
                            var_34 = ((/* implicit */short) (+(max(((~(((/* implicit */int) arr_21 [i_2] [i_3])))), (((/* implicit */int) min((arr_6 [i_3]), (((/* implicit */unsigned short) arr_4 [(short)14])))))))));
                        }
                        var_35 = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_5)), (16727849907349368180ULL))), (((/* implicit */unsigned long long int) arr_6 [i_2 + 2]))))) ? (var_8) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (short)31507)) : (((/* implicit */int) ((((/* implicit */_Bool) 16727849907349368187ULL)) && (((/* implicit */_Bool) arr_7 [i_4])))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 3; i_10 < 9; i_10 += 1) 
                        {
                            var_36 = (~(((max((var_11), (((/* implicit */int) var_13)))) % ((-(((/* implicit */int) var_0)))))));
                            var_37 = ((/* implicit */long long int) arr_22 [i_2] [i_3] [i_4] [i_5] [(signed char)1]);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            var_38 *= ((/* implicit */_Bool) var_11);
                            var_39 = ((/* implicit */unsigned short) max(((+(-795792358))), ((+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-25595))))))));
                            var_40 = ((/* implicit */unsigned short) (((((+(var_4))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)(-127 - 1))))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (var_0)))))) : (((/* implicit */int) var_12))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_12 = 0; i_12 < 13; i_12 += 1) 
    {
        var_41 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [12LL]))));
        var_42 = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_4 [i_12]))))));
        var_43 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_12]))) ^ (arr_29 [i_12])));
    }
    var_44 *= ((/* implicit */_Bool) var_11);
}
