/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233951
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
    var_17 &= ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_14)), ((unsigned short)50534)))) <= (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)50509))))))) >> ((((~(15482109773304496915ULL))) - (2964634300405054669ULL)))));
                /* LoopSeq 2 */
                for (short i_2 = 4; i_2 < 16; i_2 += 3) 
                {
                    var_19 -= 5182781534988756140ULL;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] = ((/* implicit */_Bool) (short)9371);
                                var_20 = (unsigned short)15002;
                                arr_14 [i_4] [i_3] [14ULL] [i_0] [i_0] |= ((/* implicit */short) arr_1 [i_1]);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)15001))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_10 [i_0] [(short)2] [(unsigned char)10] [0LL] [(unsigned short)6]))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [(short)10] [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        {
                            var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [(unsigned short)2] [i_1] [i_1] [i_1] [i_6] [i_1])), ((unsigned short)50535))))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) 4826608566067356648ULL)) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) (unsigned short)50534))))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255)))))));
                            arr_23 [i_0] [i_0] [i_1] [i_0] [11ULL] [i_0] = ((/* implicit */_Bool) (unsigned char)255);
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (unsigned short)50534))));
    var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max(((unsigned short)61171), ((unsigned short)50527)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_0)))))) ? (((((/* implicit */_Bool) max(((short)22090), (((/* implicit */short) (signed char)24))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_0)))))))));
}
