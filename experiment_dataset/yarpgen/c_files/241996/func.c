/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241996
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_8) | (((/* implicit */int) var_13))))) ? (var_9) : (((int) var_2))))) : (((((/* implicit */unsigned int) var_8)) | (var_3)))));
    var_15 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 - 2]))))) ? (((((/* implicit */_Bool) 268431360)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [12ULL]))))) : (((/* implicit */int) ((unsigned short) arr_7 [i_2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (338481104))) : (arr_0 [8LL]))));
                    var_17 &= ((((/* implicit */_Bool) var_6)) ? (((long long int) var_9)) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned short)57344)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (arr_4 [i_0] [i_0] [i_0]))))));
                    var_18 = arr_8 [i_0] [i_1] [i_2] [i_2 + 1];
                    var_19 = ((/* implicit */int) ((max((var_8), (var_6))) >= (((/* implicit */int) arr_7 [i_0]))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) 
    {
        var_20 = ((/* implicit */int) arr_10 [i_3]);
        var_21 ^= ((/* implicit */unsigned short) ((int) ((signed char) (signed char)-105)));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 19; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 1) 
        {
            arr_17 [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_12)))) || (((/* implicit */_Bool) arr_1 [i_4 - 1]))));
            var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)58))) : (var_3))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_5 - 1])))));
            var_23 = ((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1] [i_4 - 3] [(signed char)17]);
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_5 + 2] [i_5 - 1] [i_5] [i_5 - 1])) && (((/* implicit */_Bool) arr_6 [i_4 - 2] [i_4 - 2] [i_5] [i_4 - 3]))));
        }
        var_25 = ((/* implicit */unsigned short) (~((-(var_6)))));
        var_26 *= arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 3] [i_4 - 1];
        var_27 = ((/* implicit */long long int) arr_15 [i_4] [i_4] [i_4]);
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4 - 1]))) : (var_7)));
    }
    for (int i_6 = 3; i_6 < 19; i_6 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) min(((unsigned short)9557), (((/* implicit */unsigned short) (signed char)-47))))) == (((/* implicit */int) arr_2 [i_6])))));
        var_30 *= ((/* implicit */signed char) arr_3 [i_6] [i_6] [i_6 - 3]);
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (~(arr_5 [i_6 + 1] [(unsigned short)4] [i_6]))))));
    }
}
