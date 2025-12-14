/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23711
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
    var_10 += ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned short)52859)) % (((/* implicit */int) (unsigned short)7)))))) ? ((((+(-9223372036854775789LL))) ^ (((/* implicit */long long int) ((/* implicit */int) min(((short)-8955), ((short)(-32767 - 1)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))));
    var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((arr_1 [i_0 + 2]) + (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0 + 1]) : (var_2)));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((arr_1 [i_0 - 1]) <= (arr_1 [i_0 - 1]))))));
    }
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((/* implicit */long long int) var_7)), (((long long int) -724350261541530859LL)))))));
                    var_16 = var_4;
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((long long int) var_0)))) ? (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_7 [i_2]))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1]))))) : (((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_1]))) / (var_2))) / (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_3])))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1])) ? (9223372036854775802LL) : (var_2))) : (max((-8699268167032953675LL), (((/* implicit */long long int) var_1)))))), (max((((/* implicit */long long int) arr_8 [i_1] [i_1])), (var_4))))))));
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 - 1])))))));
    }
    /* vectorizable */
    for (short i_4 = 1; i_4 < 22; i_4 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_20 = ((/* implicit */short) arr_11 [i_5] [i_4]);
            arr_16 [i_4] [i_4] [(unsigned short)14] = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_4 + 1])) & (((/* implicit */int) ((((/* implicit */int) arr_15 [i_5])) < (((/* implicit */int) var_9)))))));
            arr_17 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)31673))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_3))))) : (((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
            var_21 = ((((/* implicit */_Bool) arr_15 [i_4 + 1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4 - 1]))));
        }
        for (short i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            var_22 = ((/* implicit */long long int) arr_13 [i_6]);
            var_23 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4 - 1]))));
            var_24 += ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_11 [i_6] [(short)2])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_7 = 2; i_7 < 22; i_7 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) var_8);
            arr_22 [i_7 + 1] [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4 - 1])) ? (((/* implicit */int) arr_21 [i_7 - 2] [i_4 - 1])) : (((/* implicit */int) arr_12 [i_4 - 1]))));
        }
        for (unsigned short i_8 = 2; i_8 < 22; i_8 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_8 - 2] [i_8 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)34114))));
            var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_8 - 2]))));
            var_28 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_8] [i_4])) || (((/* implicit */_Bool) arr_13 [20LL])))))));
        }
    }
    var_29 = ((/* implicit */long long int) var_6);
    var_30 = (((-(var_4))) % (var_0));
}
