/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234068
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    arr_10 [i_0] [(unsigned short)1] [i_1] [i_0] = ((/* implicit */short) (-(1073741823)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_1))))) != (((((/* implicit */_Bool) var_2)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))), (max((((/* implicit */int) arr_14 [i_0] [i_4 + 2] [i_4] [i_4 + 1] [i_4] [i_4] [i_4 - 1])), ((+(((/* implicit */int) (short)2))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [(_Bool)1] [i_4] [i_4 + 2] = ((/* implicit */_Bool) (~((-(((/* implicit */int) var_13))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) var_7);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_2] [i_2]))))) ? (((/* implicit */int) max((arr_12 [14ULL] [i_2]), (var_7)))) : ((~(((/* implicit */int) arr_1 [(_Bool)1] [(unsigned char)0])))))))));
                                var_20 = ((/* implicit */int) (signed char)-80);
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_21 ^= ((/* implicit */_Bool) arr_13 [i_0]);
                    var_22 += var_3;
                    var_23 &= (+((-(((/* implicit */int) var_6)))));
                    arr_24 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_3))) % ((+(((/* implicit */int) var_16))))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15084))) : (3732954402U)));
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    arr_27 [i_0] [i_8] = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_8 - 1] [i_0])))));
                    arr_28 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_2 [i_1] [i_1]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 4) 
                        {
                            arr_36 [i_10] [(unsigned short)10] [(unsigned short)10] [i_0] |= ((/* implicit */short) (signed char)111);
                            arr_37 [i_0] [i_1] [i_8 - 1] [(_Bool)1] [(unsigned short)16] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((unsigned int) var_15)) : (var_2)));
                        }
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */int) arr_23 [i_0] [i_1] [i_1])), (arr_2 [i_9] [(_Bool)1])))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 6190538496248106523LL)))))))) : ((-(arr_8 [i_8 - 1] [i_9 - 1] [(signed char)0] [i_9 + 1])))));
                        arr_38 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [16U] [1U] [i_0] [i_9 - 1] [(unsigned short)7] [14] [i_8 - 1]))));
                        var_26 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)53670)) == ((~((-(((/* implicit */int) (unsigned short)5004))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_42 [i_1] [i_0] [i_8] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 6190538496248106540LL)) || (((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) 17981304870734542907ULL)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (-1073741823)))));
                        var_27 += ((/* implicit */unsigned long long int) (signed char)5);
                    }
                    var_28 = max((-6190538496248106510LL), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)128))) : (3732954405U)))));
                }
                var_29 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((arr_8 [i_0] [i_0] [(unsigned short)0] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) > (((long long int) var_16))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))));
}
