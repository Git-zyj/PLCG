/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26398
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 4; i_3 < 18; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)53288)) ? (min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                        var_15 = ((/* implicit */unsigned long long int) var_11);
                    }
                    /* vectorizable */
                    for (signed char i_4 = 4; i_4 < 17; i_4 += 3) 
                    {
                        var_16 += ((/* implicit */unsigned short) (+(var_6)));
                        arr_14 [i_4] [i_4 - 3] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1])) : (var_13)));
                        arr_15 [i_0] [16] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                    }
                    for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        arr_18 [i_0] = ((/* implicit */unsigned long long int) (signed char)120);
                        var_17 ^= ((/* implicit */unsigned short) min((var_0), (((((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))) ? ((~(arr_10 [(unsigned short)14] [i_1] [i_2] [6LL] [i_2]))) : (((arr_10 [i_2] [i_1] [i_2] [i_1] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), ((~(((arr_8 [i_0 - 1] [i_0 + 3] [i_0] [i_0] [i_0 + 3] [i_0 + 3]) | (var_10)))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_19 *= ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
                        var_20 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 386087885)) ? (var_6) : (((/* implicit */int) arr_20 [i_0 + 2] [i_0 + 2])))))));
                    }
                    var_21 = ((/* implicit */signed char) min((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)66))))))))));
                    arr_23 [i_2] [i_1] [i_0 + 2] [i_2] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0]))));
                }
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    var_22 ^= ((/* implicit */_Bool) (+((-(12287783869846442181ULL)))));
                    arr_26 [i_1] [i_1] [i_1] &= ((/* implicit */short) (!(((arr_11 [i_7] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0]) <= (386087885)))));
                    var_23 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59814)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)5721))))) ^ (var_13))), (((/* implicit */unsigned long long int) -386087888))));
                }
                for (unsigned char i_8 = 2; i_8 < 18; i_8 += 4) 
                {
                    var_24 = ((/* implicit */int) var_1);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_9 = 3; i_9 < 18; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) -810017443)) / (1652468551U)));
                        arr_32 [i_0] [i_0] [i_0] [6U] = ((/* implicit */signed char) (~(5381496036806618913ULL)));
                        arr_33 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]);
                    }
                }
                var_26 ^= ((/* implicit */int) var_8);
                var_27 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_3))), (((/* implicit */unsigned long long int) 2642498743U))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 12; i_10 += 1) 
    {
        for (int i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                {
                    var_28 = ((/* implicit */int) (_Bool)1);
                    var_29 ^= ((/* implicit */int) (-(var_8)));
                    var_30 = (signed char)-49;
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)1))))) == (var_4))))) >= (min((min((((/* implicit */long long int) (unsigned short)65535)), (1264193548650243359LL))), (((/* implicit */long long int) ((var_7) + (((/* implicit */int) (unsigned short)5735)))))))));
}
