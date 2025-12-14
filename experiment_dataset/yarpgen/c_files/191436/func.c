/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191436
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
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_15 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [14])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_0 + 1])))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
            var_16 += ((((/* implicit */int) var_4)) ^ (((/* implicit */int) ((min((var_0), (arr_1 [i_0]))) >= (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [12])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_1]))))))));
            var_17 = (+(((int) (!(((/* implicit */_Bool) arr_4 [8ULL]))))));
            var_18 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)63)) ? (248) : (arr_1 [i_0 + 1])))));
            var_19 = ((max((((/* implicit */long long int) (+(var_9)))), (max((((/* implicit */long long int) (short)23728)), (var_7))))) << (((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [i_1]))))))) - (1))));
        }
        var_20 -= ((/* implicit */_Bool) arr_0 [i_0 + 1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 24; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 3) 
                {
                    {
                        arr_12 [(unsigned short)18] [i_4] [i_4] [i_4 + 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */long long int) arr_6 [i_4] [i_2])) != (arr_10 [i_0] [i_2] [i_3] [(signed char)20]))), (((5578860794238247208LL) >= (((/* implicit */long long int) -616271288)))))))) % (min((min((var_10), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_3] [i_4 + 1])) || (((/* implicit */_Bool) var_4)))))))));
                        var_21 = ((/* implicit */unsigned short) (-((+((-(-5578860794238247217LL)))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        var_22 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)36))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 6; i_6 += 3) 
        {
            for (short i_7 = 3; i_7 < 6; i_7 += 3) 
            {
                {
                    arr_22 [i_5] = ((/* implicit */unsigned short) arr_13 [i_6 + 1] [i_7 + 3]);
                    var_23 = ((/* implicit */int) ((arr_10 [i_6] [i_6 + 2] [i_6] [i_6 + 2]) >> ((((~(((/* implicit */int) ((15ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7])))))))) + (6)))));
                    var_24 = ((/* implicit */_Bool) arr_17 [i_5] [i_6 + 1] [i_7 - 3]);
                    /* LoopSeq 2 */
                    for (int i_8 = 2; i_8 < 7; i_8 += 4) 
                    {
                        arr_26 [i_5] [i_5] [8LL] [i_5] = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) arr_4 [i_5])))), (((((/* implicit */_Bool) arr_10 [i_5] [i_6 + 4] [i_7] [i_8])) ? (((/* implicit */int) (signed char)45)) : (arr_8 [i_5] [i_5]))))), (((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) var_12))))) ? ((-(((/* implicit */int) arr_3 [i_6] [i_6])))) : (((/* implicit */int) arr_13 [i_6] [(unsigned short)9]))))));
                        arr_27 [i_7] = ((/* implicit */int) arr_11 [i_8 + 1] [i_7] [i_5] [i_6 + 1] [i_5]);
                    }
                    for (unsigned int i_9 = 4; i_9 < 9; i_9 += 1) 
                    {
                        var_25 -= ((/* implicit */long long int) min((((/* implicit */int) ((signed char) arr_3 [i_6 + 2] [i_9 - 4]))), (((((/* implicit */_Bool) arr_3 [i_6 + 3] [i_9 - 1])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_5 [i_9 + 1] [i_7 + 1] [i_6 + 3]))))));
                        var_26 = ((/* implicit */short) ((long long int) ((-8316118358053153338LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-1))))));
                    }
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_15 [i_6 + 4] [i_7 + 4]) ? (((/* implicit */int) arr_15 [i_6 - 1] [i_7 + 4])) : (((/* implicit */int) arr_15 [i_6 + 4] [i_7 + 3]))))) ? (((/* implicit */int) arr_15 [i_6 + 4] [i_7 - 1])) : (((/* implicit */int) max((arr_15 [i_6 - 1] [i_7 - 1]), (arr_15 [i_6 - 1] [i_7 + 1])))))))));
                }
            } 
        } 
        arr_30 [i_5] = ((/* implicit */unsigned char) var_1);
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_5])) ? (max(((-(arr_17 [i_5] [i_5] [i_5]))), (((/* implicit */long long int) (unsigned char)86)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)58895)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((arr_23 [i_5] [i_5] [i_10] [i_10]) < (arr_23 [i_10] [i_10] [i_10] [i_10]))))));
            var_30 += ((/* implicit */short) arr_21 [i_5] [i_5] [i_10]);
            arr_33 [i_5] [i_5] [i_5] = ((arr_10 [i_5] [i_5] [i_10] [i_5]) > (((/* implicit */long long int) arr_21 [i_5] [i_10] [i_10])));
        }
    }
    for (int i_11 = 2; i_11 < 19; i_11 += 2) 
    {
        var_31 *= ((/* implicit */signed char) ((_Bool) min((((_Bool) -815900083)), (((((/* implicit */int) (unsigned char)244)) < (((/* implicit */int) arr_2 [i_11])))))));
        /* LoopSeq 1 */
        for (int i_12 = 2; i_12 < 18; i_12 += 3) 
        {
            var_32 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) ((((/* implicit */int) arr_35 [10LL])) % (((/* implicit */int) arr_2 [i_12]))))))));
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (((((-(((/* implicit */int) max((arr_5 [i_12] [i_12] [i_11]), (((/* implicit */short) (signed char)-37))))))) + (2147483647))) << (((((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)25537))) : (((arr_10 [i_11 + 2] [i_11] [i_11] [i_11 + 2]) | (((/* implicit */long long int) arr_0 [i_11 + 2])))))) - (25537LL))))))));
        }
    }
    var_34 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_4)), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-18824)) % (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_0)) : (3149907724417267705ULL)))))));
}
