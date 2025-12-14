/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47796
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
    var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) ((3495889185U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24190)))))) : (799078110U)));
    var_21 = ((/* implicit */unsigned short) (-(((var_14) / (((((/* implicit */_Bool) 799078110U)) ? (-7446680496274944996LL) : (((/* implicit */long long int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [4LL])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (max((-241551610), (((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 241551588)) ? (var_4) : (241551569)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_5 [i_0])) : (var_4)))) : (((((/* implicit */_Bool) 7446680496274944973LL)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_9)) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22345)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_17)) : (71695316372330129LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) arr_12 [(unsigned short)9] [i_1] [i_2]);
                            arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) (unsigned short)58847)) ? (-6628808671944490293LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26105))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    var_24 = ((/* implicit */unsigned int) 7848184995966175928LL);
                    var_25 = ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_14)));
                }
                /* LoopSeq 3 */
                for (long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [12LL] |= ((/* implicit */long long int) -1);
                    var_26 -= 799078131U;
                    var_27 ^= ((/* implicit */long long int) var_6);
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)58849)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
                    var_29 = ((int) (unsigned short)6694);
                }
                for (long long int i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
                {
                    arr_24 [i_0 - 2] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 619763915)) ? (arr_15 [i_0] [i_0] [(unsigned short)7]) : (((/* implicit */long long int) -261583536))))) ? (arr_12 [i_0] [i_1] [6LL]) : (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))))));
                    var_30 = ((/* implicit */long long int) max((var_30), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)47087)) / (((/* implicit */int) arr_20 [i_1 - 1] [2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_20 [i_1 - 1] [2U])) : (arr_16 [i_1 - 1] [i_0 - 2])))) : (((((/* implicit */_Bool) 1433587561928442874LL)) ? (-1433587561928442875LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9152)))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 4; i_8 < 16; i_8 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (arr_12 [i_1] [i_7] [i_8])))) ? (((((/* implicit */int) arr_20 [i_0] [i_0])) ^ (((/* implicit */int) (unsigned short)16634)))) : ((+(((/* implicit */int) (unsigned short)65530)))))))));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 329878563)) ? (arr_17 [i_0 + 2] [i_1 + 1]) : (((/* implicit */int) arr_20 [i_0 + 1] [i_0]))))) ? (((((/* implicit */_Bool) arr_17 [i_8] [(unsigned short)12])) ? (((((/* implicit */_Bool) (unsigned short)57344)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_0 [i_7] [i_7]))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_6 [i_0])), (var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) var_19)))));
                    }
                }
            }
        } 
    } 
}
