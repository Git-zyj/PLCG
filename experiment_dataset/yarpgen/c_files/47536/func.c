/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47536
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [10LL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [4LL])) ? (((/* implicit */int) arr_2 [10U])) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_2 [6U])) : (((/* implicit */int) (_Bool)1))))));
        var_20 -= ((/* implicit */_Bool) ((((unsigned int) ((unsigned int) 7912706144350150727ULL))) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_16)))));
        var_22 = ((/* implicit */_Bool) arr_6 [i_1]);
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_2] [i_1] = ((/* implicit */long long int) var_12);
            arr_11 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11980782718049609336ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2])))))) : (7912706144350150727ULL)));
            /* LoopSeq 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_23 *= ((/* implicit */unsigned short) var_6);
                var_24 = ((/* implicit */signed char) var_5);
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_12 [i_3] [i_1] [i_1] [i_1]))));
            }
            for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                arr_17 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_15 [i_1] [i_1])))) : (arr_16 [9U] [i_2] [i_4])));
                var_26 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_1])))) > (var_16));
                arr_18 [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? ((~(((/* implicit */int) arr_9 [i_1] [i_2] [7U])))) : (((/* implicit */int) (_Bool)1))));
            }
            for (long long int i_5 = 3; i_5 < 18; i_5 += 1) 
            {
                arr_21 [i_2] = ((/* implicit */_Bool) arr_6 [8LL]);
                /* LoopSeq 1 */
                for (signed char i_6 = 3; i_6 < 17; i_6 += 1) 
                {
                    arr_24 [i_1] [i_2] [i_5 - 2] [7U] = ((/* implicit */unsigned short) var_18);
                    arr_25 [i_1] [i_2] [i_5] [i_6] [i_2] [4ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5 + 1] [i_5 + 1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_16 [10ULL] [i_5 - 2] [i_1])));
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((long long int) (_Bool)1)))));
                    var_28 = ((/* implicit */signed char) (_Bool)1);
                }
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        {
                            arr_31 [i_1] [i_8] = (!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_16)))));
                            arr_32 [i_8] = ((/* implicit */long long int) var_10);
                        }
                    } 
                } 
                arr_33 [i_5] [0U] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-59)))) < (((var_2) ? (((/* implicit */unsigned long long int) arr_14 [i_1])) : (arr_7 [i_5]))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (arr_8 [i_1] [i_2] [i_5 + 1]) : (((15050417865320520477ULL) / (((/* implicit */unsigned long long int) arr_28 [i_2]))))));
            }
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_30 = ((/* implicit */_Bool) min((var_30), ((((!(((/* implicit */_Bool) arr_28 [i_9])))) || (((/* implicit */_Bool) arr_28 [i_9]))))));
        arr_37 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((arr_34 [(unsigned short)6]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) var_17))))))))) : (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (4304982769374701599ULL))) << ((((+(var_7))) + (6573732446469280547LL)))))));
    }
    var_31 = ((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */long long int) max(((signed char)58), (var_11)))), (var_9))));
    var_32 = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) var_4))))) > (((((/* implicit */_Bool) ((var_3) ? (var_6) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) | (var_9))))));
    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) max((((/* implicit */long long int) (unsigned short)16352)), (((((long long int) var_10)) + (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
}
