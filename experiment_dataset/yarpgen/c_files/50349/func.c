/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50349
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (max((((/* implicit */unsigned long long int) (unsigned char)164)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)92)) - (var_17)))) ? (max((((/* implicit */unsigned long long int) (unsigned char)186)), (var_11))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))))))));
    var_20 = ((/* implicit */unsigned short) min((min((min((var_18), (((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */int) var_12)) < (1861067402)))))), ((-(((/* implicit */int) var_1))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_21 += ((/* implicit */unsigned long long int) max(((-((~(((/* implicit */int) arr_1 [i_0])))))), ((+(((/* implicit */int) (short)-3362))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_22 ^= ((/* implicit */signed char) (+(((/* implicit */int) (((-(((/* implicit */int) arr_1 [i_1])))) > (((/* implicit */int) ((_Bool) var_5))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */short) var_14);
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])))))));
                    var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((15833758619891281170ULL) > (2612985453818270446ULL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)9] [i_1]))) | (3749196697492752128ULL)))));
                    var_26 = ((/* implicit */short) ((unsigned long long int) (unsigned char)155));
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0]))));
                }
                for (unsigned char i_4 = 3; i_4 < 18; i_4 += 2) 
                {
                    var_28 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_10 [i_1 + 2] [i_1 + 2] [i_0])) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_2])))) : (max((var_14), (var_3))))));
                    arr_14 [(signed char)9] [i_4] = ((/* implicit */unsigned char) var_13);
                }
            }
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
            {
                var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_11 [(unsigned char)6] [i_0] [i_0] [(unsigned char)6] [i_0])))) ? (((((/* implicit */_Bool) (-(arr_11 [8ULL] [i_1 - 1] [i_0] [i_5] [i_5])))) ? (((/* implicit */int) ((_Bool) arr_15 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)117)) : (arr_6 [7ULL] [i_1 - 1] [i_5]))))) : ((((~(((/* implicit */int) var_9)))) % ((~(((/* implicit */int) var_6))))))));
                var_30 |= ((/* implicit */_Bool) arr_9 [(signed char)9] [(signed char)9] [(signed char)9]);
            }
        }
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_7 = 1; i_7 < 17; i_7 += 4) 
            {
                arr_21 [i_6] [i_7] [i_7 - 1] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (+(var_17)))) ? ((+(var_5))) : (((var_5) / (((/* implicit */int) var_6)))))));
                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_12)) : (min((arr_8 [i_6] [i_0]), (var_15)))))) ? (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_17))))) ? (((/* implicit */unsigned long long int) (+(-1598377296)))) : (((unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) > ((+(((/* implicit */int) (unsigned char)164)))))))))))));
                var_32 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) var_13)))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_17 [16] [13] [i_0])))) - (12800))))), (((/* implicit */int) arr_16 [8ULL]))));
            }
            arr_22 [(unsigned short)17] = ((/* implicit */int) arr_12 [(unsigned char)14] [13] [i_6]);
        }
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((unsigned short) (((-(((/* implicit */int) arr_18 [i_0] [i_0] [i_0])))) + (((/* implicit */int) ((unsigned char) var_11)))))))));
    }
}
